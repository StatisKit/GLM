#include "regression.h"

namespace statiskit
{
    namespace glm
    {              
        PoissonRegression::PoissonRegression(const ScalarPredictor& predictor, const PoissonLink& link) :  UnivariateDiscreteGeneralizedLinearModel< PoissonLink >(predictor, link)
        { _family = new PoissonDistribution(std::numeric_limits< double >::quiet_NaN()); }
        
		std::unique_ptr< UnivariateConditionalDistribution > PoissonRegression::copy() const
		{ return std::make_unique< PoissonRegression >(*this); }

        void PoissonRegression::update(const double& value) const
        { _family->set_theta(value); } 
                    
        BinomialRegression::BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link) :  UnivariateDiscreteGeneralizedLinearModel< BinomialLink >(predictor, link)
        { _family = new BinomialDistribution(kappa, std::numeric_limits< double >::quiet_NaN()); }
        
        unsigned int BinomialRegression::get_kappa() const
        { return _family->get_kappa(); }
        
        void BinomialRegression::set_kappa(const unsigned int& kappa)
        { _family->set_kappa(kappa); }

		std::unique_ptr< UnivariateConditionalDistribution > BinomialRegression::copy() const
        { return std::make_unique< BinomialRegression >(*this); }

        void BinomialRegression::update(const double& value) const
        { _family->set_pi(value); }    
        
        NegativeBinomialRegression::NegativeBinomialRegression(const double& kappa, const ScalarPredictor& predictor, const NegativeBinomialLink& link) :  UnivariateDiscreteGeneralizedLinearModel< NegativeBinomialLink >(predictor, link)
        { _family = new NegativeBinomialDistribution(kappa, std::numeric_limits< double >::quiet_NaN()); }
        
        double NegativeBinomialRegression::get_kappa() const
        { return _family->get_kappa(); }
        
        void NegativeBinomialRegression::set_kappa(const double& kappa)
        { _family->set_kappa(kappa); }

		std::unique_ptr< UnivariateConditionalDistribution > NegativeBinomialRegression::copy() const
		{ return std::make_unique< NegativeBinomialRegression >(*this); }
		
        void NegativeBinomialRegression::update(const double& value) const
        { _family->set_pi(value / (1 + value)); }

        BinaryRegression::BinaryRegression(const std::string& value, const std::string reference_value, const ScalarPredictor& predictor, const BinaryLink& link) :  CategoricalGeneralizedLinearModel< BinaryLink >(predictor, link)
        { _family = new BinaryDistribution(value, reference_value); }
                 
        std::unique_ptr< UnivariateConditionalDistribution > BinaryRegression::copy() const
        { return std::make_unique< BinaryRegression >(*this); }
                           
        void BinaryRegression::update(const double& value) const
        { _family->set_pi(value); } 
        
        NominalRegression::NominalRegression(const NominalSampleSpace& nss, const VectorPredictor& predictor, const NominalLink& link) :  CategoricalGeneralizedLinearModel< NominalLink >(predictor, link)
        { 
            const std::set< std::string >& values = nss.get_values();
            _family = new NominalDistribution(values); 
            std::set< std::string >::const_iterator it = values.cend();
            --it;
            _reference = *(it);
        }

        void NominalRegression::set_reference(const std::string& value)
        { _reference = value; }

		std::unique_ptr< UnivariateConditionalDistribution > NominalRegression::copy() const
		{ return std::make_unique< NominalRegression >(*this); }
		
        void NominalRegression::update(const Eigen::VectorXd& values) const
        {
            std::set< std::string > categories = _family->get_values();
            Index d = distance(categories.cbegin(), categories.find(_reference));
            Eigen::VectorXd pi = Eigen::VectorXd::Zero(values.rows()+1);
            pi[d] = 1-values.sum();
            for(Index index = 0; index < d; ++index)
            { pi[index] = values[index]; }
            for(Index index = d + 1; index < pi.rows(); ++index)
            { pi[index] = values[index-1] ;}
            _family->set_pi(pi); 
        }   
        
        OrdinalRegression::OrdinalRegression(const OrdinalSampleSpace& oss, const VectorPredictor& predictor, const OrdinalLink& link) :  CategoricalGeneralizedLinearModel< OrdinalLink >(predictor, link)
        { _family = new OrdinalDistribution(oss.get_ordered()); }
        
		std::unique_ptr< UnivariateConditionalDistribution > OrdinalRegression::copy() const
		{ return std::make_unique< OrdinalRegression >(*this); }
		
        void OrdinalRegression::update(const Eigen::VectorXd& values) const
        { _family->set_ordered_pi(values); }

        HierarchicalRegression::HierarchicalRegression(const HierarchicalSampleSpace& hss, const MultivariateSampleSpace& explanatory_space)
        {
            _hierarchical_distribution = new HierarchicalDistribution(hss);
            unsigned int position = 0;
            for(std::map< std::string, CategoricalSampleSpace* >::const_iterator it = hss.cbegin(), it_end = hss.cend(); it != it_end; ++it)
            {
                switch(it->second->get_ordering())
                {
                    case NONE:
                        _regressions.push_back(new NominalRegression(it->second->get_values(), CompleteVectorPredictor(explanatory_space, it->second->get_values().size()-1), NominalCanonicalLink()));
                        break;
                    case TOTAL: 
                        _regressions.push_back(new OrdinalRegression(static_cast< OrdinalSampleSpace* >(it->second)->get_ordered(), CompleteVectorPredictor(explanatory_space, it->second->get_values().size()-1), OrdinalCanonicalLink()));
                        break;
                    case PARTIAL:
                        _regressions.push_back(new HierarchicalRegression(*(static_cast< HierarchicalSampleSpace* >(it->second)), explanatory_space));
                        break;
                }
                ++position;
            }
            _explanatory_space = explanatory_space.copy().release();
        }     

        HierarchicalRegression::HierarchicalRegression(const HierarchicalRegression& hr)  
        {
            _hierarchical_distribution = hr._hierarchical_distribution;
            _regressions = hr._regressions;
        }                   

        HierarchicalRegression::~HierarchicalRegression()
        {
            if(_hierarchical_distribution)
            {
                delete _hierarchical_distribution;
                _hierarchical_distribution = nullptr;
            }
            for(unsigned int i = 0; i < _regressions.size(); ++i)
            { 
                if(_regressions[i])
                {
                    delete _regressions[i];
                    _regressions[i] = nullptr;
                }
            }            
        }

        const UnivariateDistribution* HierarchicalRegression::operator() (const MultivariateEvent& event) const
        {
            unsigned int position = 0;
            for(HierarchicalDistribution::iterator it = _hierarchical_distribution->begin(), it_end = _hierarchical_distribution->end(); it != it_end; ++it)
            {
                it->second = static_cast< CategoricalUnivariateDistribution* >(const_cast< UnivariateDistribution* >(_regressions[position]->operator()(event)));
                ++position;
            }
            return _hierarchical_distribution;
        }

        const MultivariateSampleSpace* HierarchicalRegression::get_explanatory_space() const
        { return _explanatory_space; }

        unsigned int HierarchicalRegression::get_nb_parameters() const
        {
            unsigned int position = 0, nbp = 0;
            for(HierarchicalDistribution::iterator it = _hierarchical_distribution->begin(), it_end = _hierarchical_distribution->end(); it != it_end; ++it)
            {
                nbp += _regressions[position]->get_nb_parameters();
                ++position;
            }
            return nbp;            
        }

        const CategoricalUnivariateConditionalDistribution* HierarchicalRegression::get_regression(const std::string& value) const
        { return _regressions[_hierarchical_distribution->index(value)]; }

        void HierarchicalRegression::set_regression(const std::string& value, const CategoricalUnivariateConditionalDistribution& regression)
        { _regressions[_hierarchical_distribution->index(value)] = static_cast< CategoricalUnivariateConditionalDistribution* >(regression.copy().release()); }

        std::unique_ptr< UnivariateConditionalDistribution > HierarchicalRegression::copy() const
        { return std::make_unique< HierarchicalRegression >(*this); }

        HierarchicalRegression::HierarchicalDistribution::HierarchicalDistribution(const HierarchicalSampleSpace& hss) : statiskit::HierarchicalDistribution(hss)
        {
            std::map< std::string, CategoricalUnivariateDistribution* >::iterator it, it_end = _tree_distribution.end();
            for(it = _tree_distribution.begin(); it != it_end; ++it)
            { 
                if(it->second)
                {
                    delete it->second;
                    it->second = nullptr;
                }
            }             
        }

        HierarchicalRegression::HierarchicalDistribution::HierarchicalDistribution(const HierarchicalDistribution& hd) : statiskit::HierarchicalDistribution(hd)
        {}

        HierarchicalRegression::HierarchicalDistribution::~HierarchicalDistribution()
        {
            std::map< std::string, CategoricalUnivariateDistribution* >::iterator it, it_end = _tree_distribution.end();
            for(it = _tree_distribution.begin(); it != it_end; ++it)
            { 
                if(it->second)
                { it->second = nullptr; }
            } 
        }        

        HierarchicalRegression::HierarchicalDistribution::iterator HierarchicalRegression::HierarchicalDistribution::begin()
        { return _tree_distribution.begin(); }

        HierarchicalRegression::HierarchicalDistribution::iterator HierarchicalRegression::HierarchicalDistribution::end()
        { return _tree_distribution.end(); }

        unsigned int HierarchicalRegression::HierarchicalDistribution::index(const std::string& value) const
        {
            HierarchicalDistribution::check_internal(value);
            return std::distance(_tree_distribution.cbegin(), _tree_distribution.find(value));
        }

        /* MultinomialSplittingOperator::MultinomialSplittingOperator(const VectorPredictor& predictor, const MultinomialSplittingLink& link) : MultivariateGeneralizedLinearModel< SplittingOperator, MultinomialSplittingLink >(predictor, link)
        {}

        MultinomialSplittingOperator::MultinomialSplittingOperator(const MultinomialSplittingOperator& splitting) : MultivariateGeneralizedLinearModel< SplittingOperator, MultinomialSplittingLink >(splitting)
        {}

        MultinomialSplittingOperator::~MultinomialSplittingOperator()
        {}

        void MultinomialSplittingOperator::update(const Eigen::VectorXd& values) const
        { _family->set_pi(values); }

        DirichletMultinomialSplittingOperator::DirichletMultinomialSplittingOperator(const VectorPredictor& predictor, const DirichletMultinomialSplittingLink& link) : MultivariateGeneralizedLinearModel< SplittingOperator, DirichletMultinomialSplittingLink >(predictor, link)
        {}

        DirichletMultinomialSplittingOperator::DirichletMultinomialSplittingOperator(const DirichletMultinomialSplittingOperator& splitting) : MultivariateGeneralizedLinearModel< SplittingOperator, DirichletMultinomialSplittingLink >(splitting)
        {}

        DirichletMultinomialSplittingOperator::~DirichletMultinomialSplittingOperator()
        {}

        void DirichletMultinomialSplittingOperator::update(const Eigen::VectorXd& values) const
        { _family->set_alpha(values); }

        SplittingRegressionI::SplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const SplittingOperator& splitting)
        {
            _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release());
            _splitting = splitting.copy().release();
            _family = new SplittingDistribution();
        }

        SplittingRegressionI::SplittingRegressionI(const SplittingRegressionI& splitting)
        { 
            if(splitting._sum)
            { _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(splitting._sum->copy().release()); }
            else
            { _sum = nullptr; }
            if(splitting._splitting)
            { _splitting = splitting._splitting->copy().release(); }
            else
            { _splitting = nullptr; }
            _family = new SplittingDistribution();
        }

        SplittingRegressionI::~SplittingRegressionI()
        {
            if(_sum)
            { 
                delete _sum;
                _sum = nullptr;
            }
            if(_splitting)
            {
                delete _splitting;
                _splitting = nullptr;
            }
            if(_family)
            {
                delete _family;
                _family = nullptr;
            }
        }

        const MultivariateDistribution* SplittingRegressionI::operator() (const MultivariateEvent& event) const
        {
            _family->set_sum(const_cast< DiscreteUnivariateDistribution* >(static_cast< const DiscreteUnivariateDistribution* >(_sum->operator() (event))));
            _family->set_splitting(const_cast< statiskit::SplittingOperator* >(_splitting->operator() (event)));
            return _family;
        }

        const DiscreteUnivariateConditionalDistribution* SplittingRegressionI::get_sum() const
        { return _sum; }

        void SplittingRegressionI::set_sum(const DiscreteUnivariateConditionalDistribution& sum)
        { 
            if(_sum)
            { delete _sum; }
            _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release());
        }

        const SplittingOperator* SplittingRegressionI::get_splitting() const
        { return _splitting; }

        void SplittingRegressionI::set_splitting(const SplittingOperator& splitting)
        {
            if(_splitting)
            { delete _splitting; }
            _splitting = splitting.copy().release();
        }

        Index SplittingRegressionI::get_nb_components() const
        { return _splitting->get_nb_components(); }

        const MultivariateSampleSpace* SplittingRegressionI::get_explanatory_space() const
        { return _splitting->get_explanatory_space(); }

        unsigned int SplittingRegressionI::get_nb_parameters() const
        { return _sum->get_nb_parameters() + _splitting->get_nb_parameters(); }

        SplittingRegressionI::SplittingDistribution::SplittingDistribution() : statiskit::SplittingDistribution()
        {}

        SplittingRegressionI::SplittingDistribution::~SplittingDistribution()
        {
            _sum = nullptr;
            _splitting = nullptr; 
        }

        void SplittingRegressionI::SplittingDistribution::set_sum(DiscreteUnivariateDistribution* sum)
        { _sum = sum; }

        void SplittingRegressionI::SplittingDistribution::set_splitting(statiskit::SplittingOperator* splitting)
        { _splitting = splitting; }

        // MultinomialSplittingRegressionI::MultinomialSplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link) :  SplittingRegressionI< MultinomialSplittingLink >(sum, predictor, link)
        // { _family = nullptr; }
        
        // MultinomialSplittingRegressionI::MultinomialSplittingRegressionI(const MultinomialSplittingRegressionI& splitting) :  SplittingRegressionI< MultinomialSplittingLink >(splitting)
        // {}

        // std::unique_ptr< MultivariateConditionalDistribution > MultinomialSplittingRegressionI::copy() const
        // { return std::make_unique< MultinomialSplittingRegressionI >(*this); }
        
        // void MultinomialSplittingRegressionI::update(const Eigen::VectorXd& values) const
        // { _family->set_pi(values); }     

        // MultinomialSplittingRegressionII::MultinomialSplittingRegressionII(const DiscreteUnivariateDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link) :  SplittingRegressionII< MultinomialSplittingLink >(sum, predictor, link)
        // { _family = nullptr; }
        
        // MultinomialSplittingRegressionII::MultinomialSplittingRegressionII(const MultinomialSplittingRegressionII& splitting) :  SplittingRegressionII< MultinomialSplittingLink >(splitting)
        // {}

        // std::unique_ptr< MultivariateConditionalDistribution > MultinomialSplittingRegressionII::copy() const
        // { return std::make_unique< MultinomialSplittingRegressionII >(*this); }
        
        // void MultinomialSplittingRegressionII::update(const Eigen::VectorXd& values) const
        // { _family->set_pi(values); }

        // MultinomialSplittingRegressionIII::MultinomialSplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const MultinomialSplittingDistribution& family) :  SplittingRegressionIII< MultinomialSplittingDistribution >(sum, family)
        // {}
        
        // MultinomialSplittingRegressionIII::MultinomialSplittingRegressionIII(const MultinomialSplittingRegressionIII& splitting) :  SplittingRegressionIII< MultinomialSplittingDistribution >(splitting)
        // {}

        // unsigned int MultinomialSplittingRegressionIII::get_nb_parameters() const
        // { return _sum->get_nb_parameters() + get_nb_components() - 1; }

        // const Eigen::VectorXd& MultinomialSplittingRegressionIII::get_pi() const
        // { return _family->get_pi(); }

        // void MultinomialSplittingRegressionIII::set_pi(const Eigen::VectorXd& pi)
        // { return _family->set_pi(pi); }

        // std::unique_ptr< MultivariateConditionalDistribution > MultinomialSplittingRegressionIII::copy() const
        // { return std::make_unique< MultinomialSplittingRegressionIII >(*this); } */
    }
}
