#include "estimation.h"

namespace statiskit
{
    namespace glm
    {
        //NominalFisherEstimation::Estimator nominal();

        PoissonFisherEstimation::PoissonFisherEstimation(PoissonRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data, response, explanatories)
        {}

        PoissonFisherEstimation::PoissonFisherEstimation(const PoissonFisherEstimation& estimation) : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        PoissonFisherEstimation::Estimator::Estimator() : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _link = new PoissonCanonicalLink(); }

        PoissonFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {}        

        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        PoissonRegression * PoissonFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new PoissonRegression(predictor, *_link);
        }
        
        BinomialFisherEstimation::BinomialFisherEstimation(BinomialRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data, response, explanatories)
        {}

        BinomialFisherEstimation::BinomialFisherEstimation(const BinomialFisherEstimation& estimation) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        BinomialFisherEstimation::Estimator::Estimator(const unsigned int& kappa) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa == 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        BinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {
            _link = new BinomialCanonicalLink(); 
            _kappa = estimator._kappa; 
        }
                
        double BinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 - mu); }
        
        BinomialRegression * BinomialFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new BinomialRegression(_kappa, predictor, *_link);
        }
        
        Eigen::VectorXd BinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        Eigen::VectorXd BinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }
        
        
        NegativeBinomialFisherEstimation::NegativeBinomialFisherEstimation(NegativeBinomialRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data, response, explanatories)
        {}

        NegativeBinomialFisherEstimation::NegativeBinomialFisherEstimation(const NegativeBinomialFisherEstimation& estimation) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}     

        NegativeBinomialFisherEstimation::Estimator::Estimator(const double& kappa) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa <= 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        NegativeBinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {
            _link = new NegativeBinomialCanonicalLink();
            _kappa = estimator._kappa; 
        }
                
        double NegativeBinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu / pow(1 - mu, 2); }

        NegativeBinomialRegression * NegativeBinomialFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return new NegativeBinomialRegression(_kappa, predictor, *_link);
        }
        
        Eigen::VectorXd NegativeBinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        Eigen::VectorXd NegativeBinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }       
                             
    }
}
