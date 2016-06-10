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
            double operator() (const MultivariateEvent& event) const;
            
        	/// \Brief Get the space of explanatory variables.
            const MultivariateSampleSpace* get_explanatory_space() const;
            
            double alpha;
            
        	/// \Brief Get the vector of slopes delta.
			const arma::colvec& get_delta() const;
			
			/** \Brief Set the vector of slopes delta.
			*   \details The length of \f$\delta\f$ must be equal to the lenght of \f$ \boldsymbol{x} \f$.
			* */
			void set_delta(const arma::colvec& delta);

            virtual std::unique_ptr< ScalarPredictor > copy() const;
			
        protected:
            MultivariateSampleSpace* _explanatory_space;
            arma::colvec _delta;
    };
    
    /// \Brief This class ConstrainedScalarPredictor represents the predictor value for an univariate response variable with linear equality constraints between parameter slopes, i.e. \f$ \eta = \alpha + \boldsymbol{x}^T \; M \; \boldsymbol{\delta}\f$ where \f$ M \f$ is the matrix of constraints.    
    class ConstrainedScalarPredictor : public ScalarPredictor
    {
        public:
            ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint);
            virtual ~ConstrainedScalarPredictor();
            ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor);

            double operator() (const MultivariateEvent& event) const;
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);

            virtual std::unique_ptr< ScalarPredictor > copy() const;            

        protected:
            arma::mat _constraint;
    };      

    class VectorPredictor
    {
        public:
            VectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& explanatory_space, const size_t& nb_cols);
            virtual ~VectorPredictor();
			VectorPredictor(const VectorPredictor& predictor);
			
            virtual arma::colvec operator() (const MultivariateEvent& event) const = 0;

            const std::shared_ptr< MultivariateSampleSpace >& get_explanatory_space() const;
            
            const arma::colvec& get_alpha() const;
			void set_alpha(const arma::colvec& alpha);

			virtual void set_beta(const arma::colvec& beta) = 0;
			
        protected:
            std::shared_ptr< MultivariateSampleSpace > _explanatory_space;	
            arma::colvec _alpha;	
    };

    class CompletePredictor : VectorPredictor
    {
        public:
            CompletePredictor(const std::shared_ptr< MultivariateSampleSpace >& explanatory_space, const size_t& nb_cols);
            virtual ~CompletePredictor();
            CompletePredictor(const CompletePredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
			
			const arma::mat& get_delta() const;
			void set_delta(const arma::mat& delta);
			
        protected:
            arma::mat _delta;
    };    
    
    class ProportionalPredictor : VectorPredictor
    {
        public:
            ProportionalPredictor(const std::shared_ptr< MultivariateSampleSpace >& explanatory_space, const size_t& nb_cols);
            virtual ~ProportionalPredictor();
            ProportionalPredictor(const ProportionalPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
			
			const arma::colvec& get_delta() const;
			void set_delta(const arma::colvec& delta);
			
        protected:
            arma::colvec _delta;
    }; 

    class ConstrainedVectorPredictor : VectorPredictor
    {
        public:
            ConstrainedVectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& explanatory_space, const size_t& nb_cols, const arma::mat& constraint);
            virtual ~ConstrainedVectorPredictor();
            ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);            

        protected:
        	arma::colvec _delta;
            arma::mat _constraint;
    };    
};

#endif
