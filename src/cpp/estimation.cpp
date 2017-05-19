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
        
        NominalFisherEstimation::NominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data, response, explanatories)
        {}

        NominalFisherEstimation::NominalFisherEstimation(const NominalFisherEstimation& estimation) : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        NominalFisherEstimation::Estimator::Estimator() : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _link = new NominalCanonicalLink(); }

        NominalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {}

        NominalRegression * NominalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return new NominalRegression(_response_space.get_values(), predictor, *_link);
        }

        ProportionalNominalFisherEstimation::ProportionalNominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : NominalFisherEstimation(estimated, data, response, explanatories)
        {}

        ProportionalNominalFisherEstimation::ProportionalNominalFisherEstimation(const ProportionalNominalFisherEstimation& estimation) : NominalFisherEstimation(estimation)
        {}

        ProportionalNominalFisherEstimation::Estimator::Estimator() : NominalFisherEstimation::Estimator::Estimator()
        {}

        ProportionalNominalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : NominalFisherEstimation::Estimator::Estimator(estimator)
        {}

		std::vector< Eigen::MatrixXd > ProportionalNominalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        {
        	Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
            std::shared_ptr< MultivariateData > _data = data.extract(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            Index p = sample_space->encode();
            std::vector< Eigen::MatrixXd > Z;
            Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
            Eigen::VectorXd col_ones = Eigen::VectorXd::Ones(J-1);
            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
            Eigen::MatrixXd Z_k = Eigen::MatrixXd::Identity(J-1, J-1 + p);
            while(generator->is_valid())
            {
                const MultivariateEvent* event = generator->event();
                if(event)
                {
                    Eigen::RowVectorXd xt_k = sample_space->encode(*event).transpose(); 
                	Z_k.block(0, J-1, J-1, p) = Eigen::kroneckerProduct(col_ones, xt_k);
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k.block(0, J-1, J-1, p) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, p);
                	Z.push_back(Z_k);
                }
                ++(*generator);
            }
            return Z;
        }
                    
        NominalRegression * ProportionalNominalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	ProportionalVectorPredictor predictor = ProportionalVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return new NominalRegression(_response_space.get_values(), predictor, *_link);
        }

        ConstrainedNominalFisherEstimation::ConstrainedNominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : NominalFisherEstimation(estimated, data, response, explanatories)
        {}

        ConstrainedNominalFisherEstimation::ConstrainedNominalFisherEstimation(const ConstrainedNominalFisherEstimation& estimation) : NominalFisherEstimation(estimation)
        {}

        // ConstrainedNominalFisherEstimation::Estimator::Estimator(const Eigen::MatrixXd& constrained_matrix) : NominalFisherEstimation::Estimator()
        // { _constrained_matrix = constrained_matrix; }

        // ConstrainedNominalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : NominalFisherEstimation::Estimator(estimator)
        // { _constrained_matrix = estimator._constrained_matrix; }

        ConstrainedNominalFisherEstimation::Estimator::Estimator(const Eigen::MatrixXd& slope_constraint, const Index& dimension) : NominalFisherEstimation::Estimator()
        { 
            _slope_constraint = slope_constraint; 
            _intercept_constraint = Eigen::MatrixXd::Identity(dimension, dimension);
        }

        ConstrainedNominalFisherEstimation::Estimator::Estimator(const Eigen::MatrixXd& slope_constraint, const Eigen::MatrixXd& intercept_constraint) : NominalFisherEstimation::Estimator()
        { 
            _slope_constraint = slope_constraint; 
            _intercept_constraint = intercept_constraint;
        }

        ConstrainedNominalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : NominalFisherEstimation::Estimator(estimator)
        {
            _slope_constraint = estimator._slope_constraint;
            _intercept_constraint = estimator._intercept_constraint;
        }

		std::vector< Eigen::MatrixXd > ConstrainedNominalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        {
        	Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
            std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            Index p = sample_space->encode();
            std::vector< Eigen::MatrixXd > Z;
            Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
            std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
            Eigen::MatrixXd Z_k_complete = Eigen::MatrixXd::Identity(J-1, (J-1) * (1+p));            
            while(generator->is_valid())
            {
                Eigen::MatrixXd Z_k  = Eigen::MatrixXd::Zero(J-1, _intercept_constraint.cols() + _slope_constraint.cols()) ;
                Z_k.block(0, 0, J-1, _intercept_constraint.cols()) = _intercept_constraint;
                const MultivariateEvent* event = generator->event();
                if(event)
                {
                    Eigen::RowVectorXd xt_k = sample_space->encode(*event).transpose(); 
                    Z_k.block(0, J-1, J-1, _slope_constraint.cols()) = Eigen::kroneckerProduct(identity, xt_k) * _slope_constraint;
                    Z.push_back(Z_k);
                }
                else
                { 
                    Z_k.block(0, J-1, J-1, _slope_constraint.cols()) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, _slope_constraint.cols());
                    Z.push_back(Z_k);
                }
                ++(*generator);
            }
            return Z;
        }
                    
        NominalRegression * ConstrainedNominalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	ConstrainedVectorPredictor predictor = ConstrainedVectorPredictor(explanatory_space,  _slope_constraint, _intercept_constraint); //ConstrainedVectorPredictor(explanatory_space, _response_space.get_cardinality()-1, _constrained_matrix);
        	predictor.set_beta(beta);
        	return new NominalRegression(_response_space.get_values(), predictor, *_link);
        }

        OrdinalFisherEstimation::OrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimated, data, response, explanatories)
        {}

        OrdinalFisherEstimation::OrdinalFisherEstimation(const OrdinalFisherEstimation& estimation) : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >(estimation)
        {}

        OrdinalFisherEstimation::Estimator::Estimator() : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        { _link = new OrdinalCanonicalLink(); }

        OrdinalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        {}

        OrdinalRegression * OrdinalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
        	const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return new OrdinalRegression(_response_space.get_ordered(), predictor, *_link);
        } 

        ProportionalOrdinalFisherEstimation::ProportionalOrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : OrdinalFisherEstimation(estimated, data, response, explanatories)
        {}

        ProportionalOrdinalFisherEstimation::ProportionalOrdinalFisherEstimation(const ProportionalOrdinalFisherEstimation& estimation) : OrdinalFisherEstimation(estimation)
        {}

        ProportionalOrdinalFisherEstimation::Estimator::Estimator() : OrdinalFisherEstimation::Estimator::Estimator()
        {}

        ProportionalOrdinalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : OrdinalFisherEstimation::Estimator::Estimator(estimator)
        {}

		std::vector< Eigen::MatrixXd > ProportionalOrdinalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        {
        	Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
            std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            Index p = sample_space->encode();
            std::vector< Eigen::MatrixXd > Z;
            Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
            Eigen::VectorXd col_ones = Eigen::VectorXd::Ones(J-1);
            std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
            Eigen::MatrixXd Z_k = Eigen::MatrixXd::Identity(J-1, J-1 + p);
            while(generator->is_valid())
            {
                const MultivariateEvent* event = generator->event();
                if(event)
                {
                    Eigen::RowVectorXd xt_k = sample_space->encode(*event).transpose();
                	Z_k.block(0, J-1, J-1, p) = Eigen::kroneckerProduct(col_ones, xt_k);
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k.block(0, J-1, J-1, p) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, p);
                	Z.push_back(Z_k);
                }
                ++(*generator);
            }
            return Z;
        }
                    
        OrdinalRegression * ProportionalOrdinalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	ProportionalVectorPredictor predictor = ProportionalVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return new OrdinalRegression(_response_space.get_ordered(), predictor, *_link);
        }

        ConstrainedOrdinalFisherEstimation::ConstrainedOrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : OrdinalFisherEstimation(estimated, data, response, explanatories)
        {}

        ConstrainedOrdinalFisherEstimation::ConstrainedOrdinalFisherEstimation(const ConstrainedOrdinalFisherEstimation& estimation) : OrdinalFisherEstimation(estimation)
        {}
        
        ConstrainedOrdinalFisherEstimation::Estimator::Estimator(const Eigen::MatrixXd& constraint, const Index& dimension) : OrdinalFisherEstimation::Estimator()
        { 
        	_constraint = constraint; 
        	_intercept_constraint = Eigen::MatrixXd::Identity(dimension, dimension);
        }

        ConstrainedOrdinalFisherEstimation::Estimator::Estimator(const Eigen::MatrixXd& constraint, const Eigen::MatrixXd& intercept_constraint) : OrdinalFisherEstimation::Estimator()
        { 
        	_constraint = constraint; 
        	_intercept_constraint = intercept_constraint;
        }

        ConstrainedOrdinalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : OrdinalFisherEstimation::Estimator(estimator)
        {
        	_constraint = estimator._constraint;
        	_intercept_constraint = estimator._intercept_constraint;
        }
                             
		std::vector< Eigen::MatrixXd > ConstrainedOrdinalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
        {
        	Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
            std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            Index p = sample_space->encode();
            std::vector< Eigen::MatrixXd > Z;
            Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
            std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
            while(generator->is_valid())
            {
            	Eigen::MatrixXd Z_k  = Eigen::MatrixXd::Zero(J-1, _intercept_constraint.cols() + _constraint.cols()) ;
            	Z_k.block(0, 0, J-1, _intercept_constraint.cols()) = _intercept_constraint;
                const MultivariateEvent* event = generator->event();
                if(event)
                {
                	Z_k.block(0, J-1, J-1, _constraint.cols()) = Eigen::kroneckerProduct(identity, sample_space->encode(*event)) * _constraint;
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k.block(0, J-1, J-1, _constraint.cols()) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, _constraint.cols());
                	Z.push_back(Z_k);
                }
                ++(*generator);
            }
            return Z;
        }
                    
        OrdinalRegression * ConstrainedOrdinalFisherEstimation::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	ConstrainedVectorPredictor predictor = ConstrainedVectorPredictor(explanatory_space, _response_space.get_cardinality()-1, _constraint);
        	predictor.set_beta(beta);
        	return new OrdinalRegression(_response_space.get_ordered(), predictor, *_link);
        }        
                             
    }
}
