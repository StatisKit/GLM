#include "fisher.h"

namespace statiskit
{
    namespace glm
    {
        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        std::shared_ptr< PoissonRegression > PoissonFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< PoissonRegression >(predictor, *_link);
        }
        
        
        BinomialFisherEstimation::Estimator::Estimator(const unsigned int& kappa) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa == 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        BinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                
        double BinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 - mu); }
        
        std::shared_ptr< BinomialRegression > BinomialFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< BinomialRegression >(_kappa, predictor, *_link);
        }
        
        arma::colvec BinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        arma::colvec BinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }
        
        
        NegativeBinomialFisherEstimation::Estimator::Estimator(const double& kappa) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa <= 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        NegativeBinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                
        double NegativeBinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu / pow(1 - mu, 2); }

        std::shared_ptr< NegativeBinomialRegression > NegativeBinomialFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< NegativeBinomialRegression >(_kappa, predictor, *_link);
        }
        
        arma::colvec NegativeBinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        arma::colvec NegativeBinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }  
        
        
        std::shared_ptr< NominalRegression > NominalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< NominalRegression >(_response_space.get_values(), predictor, *_link);
        }
        
		std::vector< arma::mat > ProportionalNominalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        {
        	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
            std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            size_t p = sample_space->encode();
            std::vector< arma::mat > Z;
            arma::mat identity = arma::mat(J-1, J-1, arma::fill::eye);
            arma::vec col_ones = arma::ones<arma::vec>(J-1);
            for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
            {
            	arma::mat Z_k = arma::mat(J-1, J-1 + p , arma::fill::eye);
                const MultivariateEvent* event = _data->get_event(index);
                if(event)
                {
                	Z_k.submat(0, J-1, J-1, J-2 + p) = arma::kron(col_ones, sample_space->encode(*event));
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k.submat(0, J-1, J-1, J-2 + p) = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::mat >(J-1, p);
                	Z.push_back(Z_k);
                }
            }
            return Z;
        }
                    
        std::shared_ptr< NominalRegression > ProportionalNominalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	ProportionalVectorPredictor predictor = ProportionalVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< NominalRegression >(_response_space.get_values(), predictor, *_link);
        }


        ConstrainedNominalFisherEstimation::Estimator::Estimator(const arma::mat& constrained_matrix) : NominalFisherEstimation::Estimator()
        { _constrained_matrix = constrained_matrix; }
    
        ConstrainedNominalFisherEstimation::Estimator::~Estimator()
        { delete _link; }

        ConstrainedNominalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : NominalFisherEstimation::Estimator(estimator)
        { _constrained_matrix = estimator._constrained_matrix; }
                             
		std::vector< arma::mat > ConstrainedNominalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        {
        	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
            std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            size_t p = sample_space->encode();
            std::vector< arma::mat > Z;
            arma::mat identity = arma::mat(J-1, J-1, arma::fill::eye);
            for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
            {
            	arma::mat Z_k_complete = arma::mat(J-1, (J-1) * (1+p) , arma::fill::eye);
            	arma::mat Z_k;
            	
                const MultivariateEvent* event = _data->get_event(index);
                if(event)
                {
                	Z_k_complete.submat(0, J-1, J-1, (J-1) * (1+p) - 1) = arma::kron(identity, sample_space->encode(*event));
                	Z_k = _constrained_matrix * Z_k_complete;
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::mat >(_constrained_matrix.n_rows, _constrained_matrix.n_cols);
                	Z.push_back(Z_k);
                }
            }
            return Z;
        }
                    
        std::shared_ptr< NominalRegression > ConstrainedNominalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	ConstrainedVectorPredictor predictor = ConstrainedVectorPredictor(explanatory_space, _response_space.get_cardinality()-1, _constrained_matrix);
        	predictor.set_beta(beta);
        	return std::make_shared< NominalRegression >(_response_space.get_values(), predictor, *_link);
        }
                      
        std::shared_ptr< OrdinalRegression > OrdinalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
        	const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< OrdinalRegression >(_response_space.get_ordered(), predictor, *_link);
        } 
        
		std::vector< arma::mat > ProportionalOrdinalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        {
        	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
            std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            size_t p = sample_space->encode();
            std::vector< arma::mat > Z;
            arma::mat identity = arma::mat(J-1, J-1, arma::fill::eye);
            arma::vec col_ones = arma::ones<arma::vec>(J-1);
            for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
            {
            	arma::mat Z_k = arma::mat(J-1, J-1 + p , arma::fill::eye);
                const MultivariateEvent* event = _data->get_event(index);
                if(event)
                {
                	Z_k.submat(0, J-1, J-1, J-2 + p) = arma::kron(col_ones, sample_space->encode(*event));
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k.submat(0, J-1, J-1, J-2 + p) = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::mat >(J-1, p);
                	Z.push_back(Z_k);
                }
            }
            return Z;
        }
                    
        std::shared_ptr< OrdinalRegression > ProportionalOrdinalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	ProportionalVectorPredictor predictor = ProportionalVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< OrdinalRegression >(_response_space.get_ordered(), predictor, *_link);
        }


        ConstrainedOrdinalFisherEstimation::Estimator::Estimator(const arma::mat& constrained_matrix) : OrdinalFisherEstimation::Estimator()
        { _constrained_matrix = constrained_matrix; }
    
        ConstrainedOrdinalFisherEstimation::Estimator::~Estimator()
        { delete _link; }

        ConstrainedOrdinalFisherEstimation::Estimator::Estimator(const Estimator& estimator) : OrdinalFisherEstimation::Estimator(estimator)
        { _constrained_matrix = estimator._constrained_matrix; }
                             
		std::vector< arma::mat > ConstrainedOrdinalFisherEstimation::Estimator::Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        {
        	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
            std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
            const MultivariateSampleSpace* sample_space = _data->get_sample_space();
            size_t p = sample_space->encode();
            std::vector< arma::mat > Z;
            arma::mat identity = arma::mat(J-1, J-1, arma::fill::eye);
            for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
            {
            	arma::mat Z_k_complete = arma::mat(J-1, (J-1) * (1+p) , arma::fill::eye);
            	arma::mat Z_k;
            	
                const MultivariateEvent* event = _data->get_event(index);
                if(event)
                {
                	Z_k_complete.submat(0, J-1, J-1, (J-1) * (1+p) - 1) = arma::kron(identity, sample_space->encode(*event));
                	Z_k = _constrained_matrix * Z_k_complete;
                	Z.push_back(Z_k);
                }
                else
                { 
                	Z_k = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::mat >(_constrained_matrix.n_rows, _constrained_matrix.n_cols);
                	Z.push_back(Z_k);
                }
            }
            return Z;
        }
                    
        std::shared_ptr< OrdinalRegression > ConstrainedOrdinalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	ConstrainedVectorPredictor predictor = ConstrainedVectorPredictor(explanatory_space, _response_space.get_cardinality()-1, _constrained_matrix);
        	predictor.set_beta(beta);
        	return std::make_shared< OrdinalRegression >(_response_space.get_ordered(), predictor, *_link);
        }        
                             
    }
}
