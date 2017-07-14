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
        
        NominalRegression::NominalRegression(const std::set< std::string >& values, const VectorPredictor& predictor, const NominalLink& link) :  CategoricalGeneralizedLinearModel< NominalLink >(predictor, link)
        { _family = new NominalDistribution(values); }
        
		std::unique_ptr< UnivariateConditionalDistribution > NominalRegression::copy() const
		{ return std::make_unique< NominalRegression >(*this); }
		
        void NominalRegression::update(const Eigen::VectorXd& values) const
        { _family->set_pi(values); }   
        
        OrdinalRegression::OrdinalRegression(const std::vector< std::string >& values, const VectorPredictor& predictor, const OrdinalLink& link) :  CategoricalGeneralizedLinearModel< OrdinalLink >(predictor, link)
        { _family = new OrdinalDistribution(values); }
        
		std::unique_ptr< UnivariateConditionalDistribution > OrdinalRegression::copy() const
		{ return std::make_unique< OrdinalRegression >(*this); }
		
        void OrdinalRegression::update(const Eigen::VectorXd& values) const
        { _family->set_ordered_pi(values); }                                

        MultinomialSplittingOperator::MultinomialSplittingOperator(const VectorPredictor& predictor, const MultinomialSplittingLink& link) : MultivariateGeneralizedLinearModel< SplittingOperator, MultinomialSplittingLink >(predictor, link)
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
        // { return std::make_unique< MultinomialSplittingRegressionIII >(*this); }
    }
}
