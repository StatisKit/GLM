#ifndef STATISKIT_GLM_ESTIMATION_H
#define STATISKIT_GLM_ESTIMATION_H

#include <statiskit/core/estimator.h>
#include <statiskit/glm/regression.h>
#include <statiskit/linalg/Eigen.h>
#include <eigen3/unsupported/Eigen/KroneckerProduct>

namespace statiskit
{
    namespace glm
    {
        template< class D, class B> class ScalarFisherEstimation : public ConditionalActiveEstimation< D, B, Index >
        {
            public:
                ScalarFisherEstimation();
                ScalarFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                ScalarFisherEstimation(const ScalarFisherEstimation& estimation);

                class Estimator : public B::Estimator, public Optimization
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy=true) const; 

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);
                    
                    protected:
                        typename D::link_type * _link;

                        virtual Eigen::MatrixXd X_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual Eigen::VectorXd y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual Eigen::VectorXd w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;

                        virtual double sigma_square(const double& mu) const = 0;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const = 0;
                }; 

            private:
                std::vector< Eigen::VectorXd > _beta;
                Eigen::MatrixXd _X;
                Eigen::VectorXd _y;
                Eigen::VectorXd _w;
        };

        struct STATISKIT_GLM_API PoissonFisherEstimation : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            PoissonFisherEstimation(PoissonRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            PoissonFisherEstimation(const PoissonFisherEstimation& estimation);

            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator();
                    Estimator(const Estimator& estimator);

                protected:
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual PoissonRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const;
            };
        };
        
        struct STATISKIT_GLM_API BinomialFisherEstimation : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            BinomialFisherEstimation(BinomialRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            BinomialFisherEstimation(const BinomialFisherEstimation& estimation);

            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const unsigned int& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	unsigned int _kappa;
                	
                    virtual Eigen::VectorXd y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                    virtual Eigen::VectorXd w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual BinomialRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const;                                        
            };
        };
        
        struct STATISKIT_GLM_API NegativeBinomialFisherEstimation : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            NegativeBinomialFisherEstimation(NegativeBinomialRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            NegativeBinomialFisherEstimation(const NegativeBinomialFisherEstimation& estimation);  
                      
            class STATISKIT_GLM_API Estimator : public ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const double& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	double _kappa;
                	
                    virtual Eigen::VectorXd y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                    virtual Eigen::VectorXd w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual NegativeBinomialRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space) const;                                                            
            };
        };
        
        
        template< class D, class B > class CategoricalFisherEstimation : public ConditionalActiveEstimation< D, B, Index >
        {
            public:
                CategoricalFisherEstimation();
                CategoricalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                CategoricalFisherEstimation(const CategoricalFisherEstimation& estimation);

                class Estimator : public B::Estimator, public Optimization
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy=true) const; 

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);

                        const Eigen::MatrixXd& get_information_inverse() const;
                    
                    protected:
                        typename D::link_type * _link;

                        virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual std::vector< Eigen::VectorXd > y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual std::vector< double > w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const = 0;
                }; 

            private:
                std::vector< Eigen::VectorXd > _beta;
                std::vector< Eigen::MatrixXd > _Z;
                std::vector< Eigen::VectorXd > _y;
                std::vector< double > _w;
                //Eigen::MatrixXd& information_inverse;
        };
        
        struct STATISKIT_GLM_API NominalFisherEstimation : CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            NominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            NominalFisherEstimation(const NominalFisherEstimation& estimation);        
                
            class STATISKIT_GLM_API Estimator : public CategoricalFisherEstimation< NominalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
                    Estimator();
                    Estimator(const Estimator& estimator);     		

            	protected:
                        virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        };
        
        struct STATISKIT_GLM_API ProportionalNominalFisherEstimation : NominalFisherEstimation
        {
            ProportionalNominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            ProportionalNominalFisherEstimation(const ProportionalNominalFisherEstimation& estimation);

            class STATISKIT_GLM_API Estimator : public NominalFisherEstimation::Estimator
            {
            	public:
                    Estimator();
                    Estimator(const Estimator& estimator);             	

            	protected:
            			virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
            			
                        virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        }; 
        
        struct STATISKIT_GLM_API ConstrainedNominalFisherEstimation : NominalFisherEstimation
        {
            ConstrainedNominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            ConstrainedNominalFisherEstimation(const ConstrainedNominalFisherEstimation& estimation);            

            class STATISKIT_GLM_API Estimator : public NominalFisherEstimation::Estimator
            {
            	public:
                    Estimator();
                    Estimator(const Estimator& estimator);   

                    const Eigen::MatrixXd& get_intercept_constraint() const;
                    void set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint);

                    const Eigen::MatrixXd get_slope_constraint() const;
                    void set_slope_constraint(const Eigen::MatrixXd& slope_constraint);

            	protected:
                    mutable Eigen::MatrixXd _intercept_constraint;
            		mutable Eigen::MatrixXd _slope_constraint;
            	
            		virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                    virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
            			
                    virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;           	
            };
        };                
         
        
        struct STATISKIT_GLM_API OrdinalFisherEstimation : CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            OrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            OrdinalFisherEstimation(const OrdinalFisherEstimation& estimation);     
                    
            class STATISKIT_GLM_API Estimator : public CategoricalFisherEstimation< OrdinalRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
                    Estimator();
                    Estimator(const Estimator& estimator);      

            	protected:
                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;
            };
        };
                
        struct STATISKIT_GLM_API ProportionalOrdinalFisherEstimation : OrdinalFisherEstimation
        {
            ProportionalOrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            ProportionalOrdinalFisherEstimation(const ProportionalOrdinalFisherEstimation& estimation);            

            class STATISKIT_GLM_API Estimator : public OrdinalFisherEstimation::Estimator
            {
            	public:
                    Estimator();
                    Estimator(const Estimator& estimator);  

            	protected:
            			virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
            			
                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;            	
            };
        }; 
        
        struct STATISKIT_GLM_API ConstrainedOrdinalFisherEstimation : OrdinalFisherEstimation
        {
            ConstrainedOrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
            ConstrainedOrdinalFisherEstimation(const ConstrainedOrdinalFisherEstimation& estimation); 

            class STATISKIT_GLM_API Estimator : public OrdinalFisherEstimation::Estimator
            {
            	public:
            		Estimator(const Eigen::MatrixXd& constraint, const Index& dimension);
            		Estimator(const Eigen::MatrixXd& constraint, const Eigen::MatrixXd& intercept_constraint);
                    Estimator(const Estimator& estimator);
            		
            	protected:
            			Eigen::MatrixXd _constraint;
            			Eigen::MatrixXd _intercept_constraint;
            	
            			virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
            			
                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;           	
            };
        };                 
    }
}

#include "estimation.hpp"
#endif
