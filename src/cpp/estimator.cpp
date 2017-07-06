#include "estimator.h"

namespace statiskit
{
    namespace glm
    {
        //NominalRegressionFisherEstimation::Estimator nominal();

        PoissonRegressionFisherEstimation::PoissonRegressionFisherEstimation(PoissonRegression const * estimated, UnivariateConditionalData const * data) : ScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data)
        {}

        PoissonRegressionFisherEstimation::PoissonRegressionFisherEstimation(const PoissonRegressionFisherEstimation & estimation) : ScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        PoissonRegressionFisherEstimation::Estimator::Estimator() : ScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _link = new PoissonCanonicalLink(); }

        PoissonRegressionFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {}        

        double PoissonRegressionFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        PoissonRegression * PoissonRegressionFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new PoissonRegression(predictor, *_link);
        }
        
        BinomialRegressionFisherEstimation::BinomialRegressionFisherEstimation(BinomialRegression const * estimated, UnivariateConditionalData const * data) : ScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data)
        {}

        BinomialRegressionFisherEstimation::BinomialRegressionFisherEstimation(const BinomialRegressionFisherEstimation & estimation) : ScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        BinomialRegressionFisherEstimation::Estimator::Estimator() : ScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { 
            _link = new BinomialCanonicalLink(); 
            _kappa = 0;
        }
        
        BinomialRegressionFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                
        unsigned int BinomialRegressionFisherEstimation::Estimator::get_kappa() const
        { return _kappa; }

        void BinomialRegressionFisherEstimation::Estimator::set_kappa(const unsigned int& kappa)
        { _kappa = kappa; }

        double BinomialRegressionFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 - mu) / _kappa; }
        
        BinomialRegression * BinomialRegressionFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new BinomialRegression(_kappa, predictor, *_link);
        }
        
        Eigen::VectorXd BinomialRegressionFisherEstimation::Estimator::y_init(const UnivariateConditionalData& data) const
        { return ScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data) / _kappa; }
        
        BinomialRegressionSteepestAscentEstimation::BinomialRegressionSteepestAscentEstimation(BinomialRegression const * estimated, UnivariateConditionalData const * data) : OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data)
        {}

        BinomialRegressionSteepestAscentEstimation::BinomialRegressionSteepestAscentEstimation(const BinomialRegressionSteepestAscentEstimation & estimation) : OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        BinomialRegressionSteepestAscentEstimation::Estimator::Estimator() : OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _estimator = new BinomialRegressionFisherEstimation::Estimator(); }
        
        BinomialRegressionSteepestAscentEstimation::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _estimator = estimator._estimator; }

        BinomialRegressionSteepestAscentEstimation::Estimator::~Estimator()
        {
            if(_estimator)
            {
                delete _estimator;
                _estimator = nullptr;
            }
        }

        std::unique_ptr< UnivariateConditionalDistributionEstimation > BinomialRegressionSteepestAscentEstimation::Estimator::operator()(const UnivariateConditionalData& data, const bool& lazy) const
        {
            std::unique_ptr< UnivariateEvent > maximum = data.get_response()->compute_maximum();
            if(!maximum || !maximum->get_outcome() == DISCRETE || !maximum->get_event() == ELEMENTARY)
            { throw statiskit::sample_space_error(DISCRETE); }
            unsigned int its = 0;
            BinomialRegression* binomial = new BinomialRegression(static_cast< DiscreteElementaryEvent* >(maximum.get())->get_value(), CompleteScalarPredictor(*(data.get_explanatories()->get_sample_space())), *(_estimator->get_link()));
            std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
            if(!lazy)
            { estimation = std::make_unique< BinomialRegressionSteepestAscentEstimation  >(binomial, &data); }
            else
            { estimation = std::make_unique< LazyEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation > >(binomial); }
            _estimator->set_kappa(binomial->get_kappa());
            double prev, curr = - 1 * std::numeric_limits< double >::infinity();
            do
            {
                prev = curr;
                std::unique_ptr< UnivariateConditionalDistributionEstimation > _estimation =(*_estimator)(data, true);
                binomial->set_predictor(*(static_cast< const BinomialRegression* >(_estimation->get_estimated())->get_predictor()));
                curr = binomial->loglikelihood(data);
                if(!lazy)
                { static_cast< BinomialRegressionSteepestAscentEstimation * >(estimation.get())->_iterations.push_back(binomial->get_kappa()); }
                if(curr > prev)
                { 
                    _estimator->set_kappa(binomial->get_kappa() + 1);
                    binomial->set_kappa(_estimator->get_kappa());
                }
                ++its;
            } while(run(its, __impl::reldiff(prev, curr)) && prev < curr);
            if(curr < prev)
            {
                _estimator->set_kappa(binomial->get_kappa() - 1);
                std::unique_ptr< UnivariateConditionalDistributionEstimation > _estimation =(*_estimator)(data, true);
                binomial->set_predictor(*(static_cast< const BinomialRegression* >(_estimation->get_estimated())->get_predictor()));
                binomial->set_kappa(_estimator->get_kappa());
            }
            return estimation;
        }

        NegativeBinomialRegressionFisherEstimation::NegativeBinomialRegressionFisherEstimation(NegativeBinomialRegression const * estimated, UnivariateConditionalData const * data) : ScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data)
        {}

        NegativeBinomialRegressionFisherEstimation::NegativeBinomialRegressionFisherEstimation(const NegativeBinomialRegressionFisherEstimation & estimation) : ScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}     

        NegativeBinomialRegressionFisherEstimation::Estimator::Estimator() : ScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { 
            _link = new NegativeBinomialCanonicalLink();
            _kappa = 0.;
        }
        
        NegativeBinomialRegressionFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                        
        double NegativeBinomialRegressionFisherEstimation::Estimator::get_kappa() const
        { return _kappa; }

        void NegativeBinomialRegressionFisherEstimation::Estimator::set_kappa(const double& kappa)
        { _kappa = kappa; }

        double NegativeBinomialRegressionFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 + mu) / _kappa; }

        NegativeBinomialRegression * NegativeBinomialRegressionFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new NegativeBinomialRegression(_kappa, predictor, *_link);
        }
        
        Eigen::VectorXd NegativeBinomialRegressionFisherEstimation::Estimator::y_init(const UnivariateConditionalData& data) const
        { return ScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data) / _kappa; } 

        NegativeBinomialRegressionX2Estimation::NegativeBinomialRegressionX2Estimation(NegativeBinomialRegression const * estimated, UnivariateConditionalData const * data) : OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data)
        {}

        NegativeBinomialRegressionX2Estimation::NegativeBinomialRegressionX2Estimation(const NegativeBinomialRegressionX2Estimation & estimation) : OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        NegativeBinomialRegressionX2Estimation::Estimator::Estimator() : OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _estimator = new NegativeBinomialRegressionFisherEstimation::Estimator(); }
        
        NegativeBinomialRegressionX2Estimation::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _estimator = estimator._estimator; }

        NegativeBinomialRegressionX2Estimation::Estimator::~Estimator()
        {
            if(_estimator)
            {
                delete _estimator;
                _estimator = nullptr;
            }
        }

        std::unique_ptr< UnivariateConditionalDistributionEstimation > NegativeBinomialRegressionX2Estimation::Estimator::operator() (const UnivariateConditionalData& data, const bool& lazy) const
        {
            const UnivariateData* response = data.get_response();
            NaturalMeanEstimation::Estimator mean_estimator = NaturalMeanEstimation::Estimator();
            std::unique_ptr< MeanEstimation > mean_estimation = mean_estimator(*response);
            double total = data.compute_total(), mean = mean_estimation->get_mean(), prev, curr = 0;
            std::unique_ptr< UnivariateData::Generator > rgenerator = response->generator();
            while(rgenerator->is_valid())
            {
                const UnivariateEvent* event = rgenerator->event();
                if(event && event->get_event() == ELEMENTARY)
                { curr += rgenerator->weight() * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - mean, 2) / (total * mean);}
                ++(*rgenerator);
            }
            unsigned int its = 0;
            NegativeBinomialRegression* nbinomial = new NegativeBinomialRegression(curr, CompleteScalarPredictor(*(data.get_explanatories()->get_sample_space())), *(_estimator->get_link()));
            std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
            if(!lazy)
            { estimation = std::make_unique< NegativeBinomialRegressionX2Estimation  >(nbinomial, &data); }
            else
            { estimation = std::make_unique< LazyEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation > >(nbinomial); }
            _estimator->set_kappa(nbinomial->get_kappa());
            do
            {
                prev = curr;
                std::unique_ptr< UnivariateConditionalDistributionEstimation > _estimation =(*_estimator)(data, true);
                nbinomial->set_predictor(*(static_cast< const NegativeBinomialRegression* >(_estimation->get_estimated())->get_predictor()));
                if(!lazy)
                { static_cast< NegativeBinomialRegressionX2Estimation * >(estimation.get())->_iterations.push_back(nbinomial->get_kappa()); }
                curr = 0.;
                std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    const UnivariateEvent* event = generator->response();
                    if(event && event->get_event() == ELEMENTARY)
                    {
                        mean = static_cast< const NegativeBinomialDistribution* >((*nbinomial)(*(generator->explanatories())))->get_mean();
                        curr += generator->weight() * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - mean, 2) / (total * mean * (1 + mean / prev));
                    }
                    ++(*generator);
                }
                curr = prev / curr;
                _estimator->set_kappa(curr);
                nbinomial->set_kappa(_estimator->get_kappa());
                ++its;
            } while(run(its, __impl::reldiff(prev, curr)));
            return estimation;
        }

                             
    }
}
