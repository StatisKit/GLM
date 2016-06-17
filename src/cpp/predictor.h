/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_PREDICTOR_H
#define STATISKIT_CORE_PREDICTOR_H

#include <statiskit/core/sample_space.h>

namespace statiskit
{
    /// \Brief This class ScalarPredictor represents the predictor value for an univariate response variable given a value of explanatory variables: \f$ \eta = \alpha + \boldsymbol{x}^T \; \boldsymbol{\delta}\f$.
    class ScalarPredictor
    {
        public:
        	/**  \Brief This constructor need the sample space of explanatory variables.
        	*
        	* \param explanatory_space the specified space of explanatory variables.
        	* */
            ScalarPredictor(const MultivariateSampleSpace& explanatory_space);
            virtual ~ScalarPredictor();
            ScalarPredictor(const ScalarPredictor& predictor);

        	/// \Brief This operator compute the scalar predictor value from a specific event.
            virtual double operator() (const MultivariateEvent& event) const = 0;
            
        	/// \Brief Get the space of explanatory variables.
            const MultivariateSampleSpace* get_explanatory_space() const;
			
			/// \Brief Get the number of parameters, i.e. the size of the vector beta.
			virtual size_t size() const = 0;
			
			/// \Brief Set the vector of parameters beta.
			virtual void set_beta(const arma::colvec& beta) = 0;

            virtual std::unique_ptr< ScalarPredictor > copy() const = 0;
			
        protected:
            MultivariateSampleSpace* _explanatory_space;
    };

    /// \Brief This class ScalarPredictor represents the predictor value for an univariate response variable given a value of explanatory variables: \f$ \eta = \alpha + \boldsymbol{x}^T \; \boldsymbol{\delta}\f$.
    class CompleteScalarPredictor : public ScalarPredictor
    {
        public:
            CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space);
            CompleteScalarPredictor(const CompleteScalarPredictor& predictor);

            virtual double operator() (const MultivariateEvent& event) const;
			
			virtual size_t size() const;
			
			virtual void set_beta(const arma::colvec& beta);
			           
            double alpha;
            
        	/// \Brief Get the vector of slopes delta.
			const arma::colvec& get_delta() const;

            virtual std::unique_ptr< ScalarPredictor > copy() const;
			
        protected:
            arma::colvec _delta;
            
            CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& size);
    };
    
    /// \Brief This class ConstrainedScalarPredictor represents the predictor value for an univariate response variable with linear equality constraints between parameter slopes, i.e. \f$ \eta =  (1, \; \boldsymbol{x}^T ) \; M \; \boldsymbol{\beta}\f$ where \f$ M \f$ is the matrix of constraints.    
    class ConstrainedScalarPredictor : public CompleteScalarPredictor
    {
        public:
            ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint);
            ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor);
            
            virtual double operator() (const MultivariateEvent& event) const;
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);

            virtual std::unique_ptr< ScalarPredictor > copy() const;            

        protected:
            arma::mat _constraint;
    };      

    class VectorPredictor
    {
        public:
            VectorPredictor(const MultivariateSampleSpace& explanatory_space);
            virtual ~VectorPredictor();
			VectorPredictor(const VectorPredictor& predictor);
			
            virtual arma::colvec operator() (const MultivariateEvent& event) const = 0;

            const MultivariateSampleSpace* get_explanatory_space() const;
			
			virtual size_t size() const = 0;
			
			virtual void set_beta(const arma::colvec& beta) = 0;
						
            virtual std::unique_ptr< VectorPredictor > copy() const = 0;
				            
        protected:
            MultivariateSampleSpace* _explanatory_space;
    };  
        
    class CompleteVectorPredictor : public VectorPredictor
    {
        public:
            CompleteVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension);
            CompleteVectorPredictor(const CompleteVectorPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
			virtual size_t size() const;
			
			virtual void set_beta(const arma::colvec& beta);                  
			
			const arma::colvec& get_alpha() const;
			const arma::mat& get_delta() const;
			
            virtual std::unique_ptr< VectorPredictor > copy() const;	
            		
        protected:
        	arma::colvec _alpha;
            arma::mat _delta;
    };
    
    class ProportionalVectorPredictor : public VectorPredictor
    {
        public:
            ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension);
            ProportionalVectorPredictor(const ProportionalVectorPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
			virtual size_t size() const;
			
			virtual void set_beta(const arma::colvec& beta);                  
			
			const arma::colvec& get_alpha() const;
			const arma::colvec& get_delta() const;
			
            virtual std::unique_ptr< VectorPredictor > copy() const;	
            		
        protected:
        	arma::colvec _alpha;
            arma::colvec _delta;
    };    
  
    
    class ConstrainedVectorPredictor : public ProportionalVectorPredictor
    {
        public:
            ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const arma::mat& constraint);
            ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint, const arma::mat& intercept_constraint);
            ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor);
            
            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);
			
			const arma::mat& get_intercept_constraint() const;
			void set_intercept_constraint(const arma::mat& intercept_constraint);			

            virtual std::unique_ptr< VectorPredictor > copy() const;            

        protected:
            arma::mat _constraint;
            arma::mat _intercept_constraint;
    };   
};

#endif
