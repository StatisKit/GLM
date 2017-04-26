#ifndef STATISKIT_GLM_FISHER_H
#define STATISKIT_GLM_FISHER_H

#include <statiskit/core/estimator.h>
#include <statiskit/glm/glm.h>

namespace statiskit
{
    namespace glm
    {
        template< class D, class B> class ScalarFisherEstimation : public ConditionalActiveEstimation< D, B, size_t >
        {
            public:
                using ConditionalActiveEstimation< D, B, size_t >::ConditionalActiveEstimation;
               
                class Estimator : public B::Estimator
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::shared_ptr< UnivariateConditionalDistributionEstimation > operator() (const std::shared_ptr< MultivariateData >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy=true) const; 
                
                        const double& get_epsilon() const;
                        void set_epsilon(const double& epsilon);

                        const unsigned int& get_maxits() const;
                        void set_maxits(const unsigned int& maxits);

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);
                    
                    protected:
                        typename D::link_type * _link;
                        double _epsilon;
                        unsigned int _maxits;

                        virtual arma::mat X_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;

                        virtual double sigma_square(const double& mu) const = 0;

                        virtual std::shared_ptr< D > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const = 0;
                }; 

            private:
                std::vector< arma::colvec > _beta;
                arma::mat _X;
                arma::colvec _y;
                arma::colvec _w;
        };

        struct STATISKIT_GLM_API PoissonFisherEstimation : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		using ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;
            		
                protected:
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual std::shared_ptr< PoissonRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const;
            };
        };
        
        struct STATISKIT_GLM_API BinomialFisherEstimation : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const unsigned int& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	unsigned int _kappa;
                	
                    virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual std::shared_ptr< BinomialRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const;                                        
            };
        };
        
        struct STATISKIT_GLM_API NegativeBinomialFisherEstimation : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const double& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	double _kappa;
                	
                    virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual std::shared_ptr< NegativeBinomialRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const;                                                            
            };
        };
        
        
        template< class D, class B > class CategoricalFisherEstimation : public ConditionalActiveEstimation< D, B, size_t >
        {
            public:
                using ConditionalActiveEstimation< D, B, size_t  >::ConditionalActiveEstimation;
               
                class Estimator : public B::Estimator
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::shared_ptr< UnivariateConditionalDistributionEstimation > operator() (const std::shared_ptr< MultivariateData >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy=true) const; 
                
                        const double& get_epsilon() const;
                        void set_epsilon(const double& epsilon);

                        const unsigned int& get_maxits() const;
                        void set_maxits(const unsigned int& maxits);

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);
                    
                    protected:
                        typename D::link_type * _link;
                        double _epsilon;
                        unsigned int _maxits;

                        virtual std::vector< arma::mat > Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual std::vector< arma::colvec > y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual std::vector< double > w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual arma::colvec beta_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;

                        virtual std::shared_ptr< D > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const = 0;
                }; 

            private:
                std::vector< arma::colvec > _beta;
                std::vector< arma::mat > _Z;
                std::vector< arma::colvec > _y;
                std::vector< double > _w;
        };
        
        struct STATISKIT_GLM_API NominalFisherEstimation : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class STATISKIT_GLM_API Estimator : public CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		using CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;
            		
            	protected:
                        virtual std::shared_ptr< NominalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        };
        
        struct STATISKIT_GLM_API ProportionalNominalFisherEstimation : NominalFisherEstimation
        {
            class STATISKIT_GLM_API Estimator : public NominalFisherEstimation::Estimator
            {
            	public:
            		using NominalFisherEstimation::Estimator::Estimator;
            		
            	protected:
            			virtual std::vector< arma::mat > Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
            			
                        virtual std::shared_ptr< NominalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        }; 
        
        struct STATISKIT_GLM_API ConstrainedNominalFisherEstimation : NominalFisherEstimation
        {
            class STATISKIT_GLM_API Estimator : public NominalFisherEstimation::Estimator
            {
            	public:
            		Estimator(const arma::mat& constrained_matrix);
                    ~Estimator();
                    Estimator(const Estimator& estimator);
            		
            	protected:
            			arma::mat _constrained_matrix;
            	
            			virtual std::vector< arma::mat > Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
            			
                        virtual std::shared_ptr< NominalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;           	
            };
        };                
         
        
        struct STATISKIT_GLM_API OrdinalFisherEstimation : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class STATISKIT_GLM_API Estimator : public CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		using CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;
            		
            	protected:
                        virtual std::shared_ptr< OrdinalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;
            };
        };
                
        struct STATISKIT_GLM_API ProportionalOrdinalFisherEstimation : OrdinalFisherEstimation
        {
            class STATISKIT_GLM_API Estimator : public OrdinalFisherEstimation::Estimator
            {
            	public:
            		using OrdinalFisherEstimation::Estimator::Estimator;
            		
            	protected:
            			virtual std::vector< arma::mat > Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
            			
                        virtual std::shared_ptr< OrdinalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        }; 
        
        struct STATISKIT_GLM_API ConstrainedOrdinalFisherEstimation : OrdinalFisherEstimation
        {
            class STATISKIT_GLM_API Estimator : public OrdinalFisherEstimation::Estimator
            {
            	public:
            		Estimator(const arma::mat& constraint, const size_t& dimension);
            		Estimator(const arma::mat& constraint, const arma::mat& intercept_constraint);
                    ~Estimator();
                    Estimator(const Estimator& estimator);
            		
            	protected:
            			arma::mat _constraint;
            			arma::mat _intercept_constraint;
            	
            			virtual std::vector< arma::mat > Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
            			
                        virtual std::shared_ptr< OrdinalRegression > build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;           	
            };
        };                 
    }
}

#include "fisher.hpp"
#endif
