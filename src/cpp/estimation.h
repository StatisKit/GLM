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
        
        
        template< class D > class CategoricalFisherEstimation : public ConditionalActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation, Index >
        {
            public:
                CategoricalFisherEstimation();
                CategoricalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                CategoricalFisherEstimation(const CategoricalFisherEstimation& estimation);

                class Estimator : public CategoricalUnivariateConditionalDistributionEstimation::Estimator, public Optimization
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy=true) const; 

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);

                        //const Eigen::MatrixXd& get_information_inverse() const;
                    
                    protected:
                        typename D::link_type * _link;

                        virtual std::vector< Eigen::VectorXd > y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual std::vector< double > w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;

                        virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const = 0;
                        virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const = 0;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const = 0;
                }; 
                const double& get_loglikelihood() const;
                const std::vector< double >& get_loglikelihood_sequence() const;

            private:
                std::vector< Eigen::VectorXd > _beta;
                std::vector< Eigen::MatrixXd > _Z;
                std::vector< Eigen::VectorXd > _y;
                std::vector< double > _w;
                //Eigen::MatrixXd& information_inverse;
                mutable std::vector< double > _loglikelihood_sequence;
                mutable double _loglikelihood;
        };

        template< class D > class CompleteFisherEstimation : public CategoricalFisherEstimation< D >
        {
            public:
                CompleteFisherEstimation();
                CompleteFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                CompleteFisherEstimation(const CompleteFisherEstimation& estimation);

                class Estimator : public CategoricalFisherEstimation< D >::Estimator
                {
                    public:
                        typedef CompleteVectorPredictor predictor_type;
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;

                        CompleteVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 
        };



        template< class D > class ProportionalFisherEstimation : public CategoricalFisherEstimation< D >
        {
            public:
                ProportionalFisherEstimation();
                ProportionalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                ProportionalFisherEstimation(const ProportionalFisherEstimation& estimation);

                class Estimator : public CategoricalFisherEstimation< D >::Estimator
                {
                    public:
                        typedef ProportionalVectorPredictor predictor_type;
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual std::vector< Eigen::MatrixXd > Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;
                        virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;

                        ProportionalVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 
        };


        template< class D > class ConstrainedFisherEstimation : public CategoricalFisherEstimation< D >
        {
            public:
                ConstrainedFisherEstimation();
                ConstrainedFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                ConstrainedFisherEstimation(const ConstrainedFisherEstimation& estimation);

                class Estimator : public CategoricalFisherEstimation< D >::Estimator
                { 
                    public:
                        typedef ConstrainedVectorPredictor predictor_type;
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

                        ConstrainedVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 

                // class PartialProportionalEstimator : public CategoricalUnivariateConditionalDistributionEstimation::Estimator
                // {
                //     public:
                //         typedef ConstrainedVectorPredictor predictor_type;
                //         PartialProportionalEstimator();
                //         PartialProportionalEstimator(const PartialProportionalEstimator& estimator);

                //         virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy=true) const; 

                //         const Indices get_proportional() const;
                //         void set_proportional(const Indices& proportional);

                //     protected:
                //         Indices _proportional;                      
                // };
        };





        template< class  T > class NominalFisherEstimation : public T
        {
            public:
                NominalFisherEstimation();
                NominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                NominalFisherEstimation(const NominalFisherEstimation& estimation);

                class Estimator : public T::Estimator
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        template< class T > class OrdinalFisherEstimation : public T
        {
            public:
                OrdinalFisherEstimation();
                OrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                OrdinalFisherEstimation(const OrdinalFisherEstimation& estimation);

                class Estimator : public T::Estimator
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        template< class T > class CumulativeFisherEstimation : public OrdinalFisherEstimation< T >
        {
            public:
                CumulativeFisherEstimation();
                CumulativeFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories);
                CumulativeFisherEstimation(const CumulativeFisherEstimation& estimation);

                class Estimator : public OrdinalFisherEstimation< T >::Estimator
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);

                        const Eigen::VectorXd& get_beta_init() const;
                        void set_beta_init(const Eigen::VectorXd& beta_init);
            
                    protected:
                        Eigen::VectorXd _beta_init;
                        virtual Eigen::VectorXd beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const;                     
                }; 
        };


        typedef NominalFisherEstimation< CompleteFisherEstimation< NominalRegression > > NominalCompleteFisherEstimation;
        typedef NominalFisherEstimation< CompleteFisherEstimation< NominalRegression > >::Estimator NominalCompleteFisherEstimator;

        typedef NominalFisherEstimation< ProportionalFisherEstimation< NominalRegression > > NominalProportionalFisherEstimation;
        typedef NominalFisherEstimation< ProportionalFisherEstimation< NominalRegression > >::Estimator NominalProportionalFisherEstimator;

        typedef NominalFisherEstimation< ConstrainedFisherEstimation< NominalRegression > > NominalConstrainedFisherEstimation;
        typedef NominalFisherEstimation< ConstrainedFisherEstimation< NominalRegression > >::Estimator NominalConstrainedFisherEstimator;
//typedef NominalFisherEstimation< ConstrainedFisherEstimation< NominalRegression > >::PartialProportionalEstimator NominalPartialProportionalFisherEstimator; 

        typedef OrdinalFisherEstimation< CompleteFisherEstimation< OrdinalRegression > > OrdinalCompleteFisherEstimation;
        typedef OrdinalFisherEstimation< CompleteFisherEstimation< OrdinalRegression > >::Estimator OrdinalCompleteFisherEstimator;

        typedef OrdinalFisherEstimation< ProportionalFisherEstimation< OrdinalRegression > > OrdinalProportionalFisherEstimation;
        typedef OrdinalFisherEstimation< ProportionalFisherEstimation< OrdinalRegression > >::Estimator OrdinalProportionalFisherEstimator;

        typedef OrdinalFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > > OrdinalConstrainedFisherEstimation;
        typedef OrdinalFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > >::Estimator OrdinalConstrainedFisherEstimator;       
//typedef OrdinalFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > >::PartialProportionalEstimator OrdinalPartialProportionalFisherEstimator;           

     
        typedef CumulativeFisherEstimation< CompleteFisherEstimation< OrdinalRegression > > CumulativeCompleteFisherEstimation;
        typedef CumulativeFisherEstimation< CompleteFisherEstimation< OrdinalRegression > >::Estimator CumulativeCompleteFisherEstimator;

        typedef CumulativeFisherEstimation< ProportionalFisherEstimation< OrdinalRegression > > CumulativeProportionalFisherEstimation;
        typedef CumulativeFisherEstimation< ProportionalFisherEstimation< OrdinalRegression > >::Estimator CumulativeProportionalFisherEstimator;

        typedef CumulativeFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > > CumulativeConstrainedFisherEstimation;
        typedef CumulativeFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > >::Estimator CumulativeConstrainedFisherEstimator;
//typedef CumulativeFisherEstimation< ConstrainedFisherEstimation< OrdinalRegression > >::PartialProportionalEstimator CumulativePartialProportionalFisherEstimator;

    }
}

#include "estimation.hpp"
#endif
