#ifndef STATISKIT_GLM_FISHER_H
#define STATISKIT_GLM_FISHER_H

#include <statiskit/core/estimator.h>
#include <statiskit/glm/glm.h>

namespace statiskit
{
    namespace glm
    {
        template< class R, class B > class ScalarFisherEstimation : public ActiveEstimation< R, B >
        {
            public:
                using ActiveEstimation< R, B >::ActiveEstimation;
               
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

                        const typename R::link_type* get_link() const;
                        void set_link(const typename R::link_type& link);
                    
                    protected:
                        typename R::link_type * _link;
                        double _epsilon;
                        unsigned int _maxits;

                        virtual arma::mat X_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                        virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;

                        virtual double sigma_square(const double& mu) const = 0;

                        virtual std::shared_ptr< R > build_estimated(const arma::colvec& beta);
                }; 

            private:
                std::vector< arma::colvec > _beta;
                arma::mat _X;
                arma::colvec _y;
                arma::colvec _w;
        };

        struct PoissonFisherEstimation : ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class Estimator : public ScalarFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:

            		
                protected:
                    virtual double sigma_square(const double& mu) const;
            };
        };
        
        struct BinomialFisherEstimation : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class Estimator : public ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const unsigned int& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	unsigned int _kappa;
                	
                    virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
            };
        };
        
        struct NegativeBinomialFisherEstimation : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            class Estimator : public ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator
            {
            	public:
            		Estimator(const double& kappa);
            		Estimator(const Estimator& estimator);
            		
                protected:
                	double _kappa;
                	
                    virtual arma::colvec y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    virtual arma::colvec w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const;
                    
                    virtual double sigma_square(const double& mu) const;
            };
        };
    }
}

#include "fisher.hpp"
#endif
