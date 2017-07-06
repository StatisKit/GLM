/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_PREDICTOR_H
#define STATISKIT_CORE_PREDICTOR_H

#include "base.h"
#include <statiskit/core/sample_space.h>
#include <statiskit/core/data.h>

namespace statiskit
{
    /// \Brief This class ScalarPredictor represents the predictor value for an univariate response variable given a value of explanatory variables: \f$ \eta = \alpha + \boldsymbol{x}^T \; \boldsymbol{\delta}\f$.
    class STATISKIT_GLM_API ScalarPredictor
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
			virtual void set_beta(const Eigen::VectorXd& beta) = 0;

            virtual std::unique_ptr< ScalarPredictor > copy() const = 0;
			
        protected:
            MultivariateSampleSpace* _explanatory_space;
    };

    /// \Brief This class ScalarPredictor represents the predictor value for an univariate response variable given a value of explanatory variables: \f$ \eta = \alpha + \boldsymbol{x}^T \; \boldsymbol{\delta}\f$.
    class STATISKIT_GLM_API CompleteScalarPredictor : public ScalarPredictor
    {
        public:
            CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space);
            CompleteScalarPredictor(const CompleteScalarPredictor& predictor);

            virtual double operator() (const MultivariateEvent& event) const;
			
			virtual size_t size() const;
			
			virtual void set_beta(const Eigen::VectorXd& beta);
			           
            double alpha;
            
        	/// \Brief Get the vector of slopes delta.
			const Eigen::VectorXd& get_delta() const;
            void set_delta(const Eigen::VectorXd& delta);

            virtual std::unique_ptr< ScalarPredictor > copy() const;
			
        protected:
            Eigen::VectorXd _delta;
            
            CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& size);
    };
    
    /// \Brief This class ConstrainedScalarPredictor represents the predictor value for an univariate response variable with linear equality constraints between parameter slopes, i.e. \f$ \eta =  (1, \; \boldsymbol{x}^T ) \; M \; \boldsymbol{\beta}\f$ where \f$ M \f$ is the matrix of constraints.    
    class STATISKIT_GLM_API ConstrainedScalarPredictor : public CompleteScalarPredictor
    {
        public:
            ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const Eigen::MatrixXd& constraint);
            ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor);
            
            virtual double operator() (const MultivariateEvent& event) const;
            
			const Eigen::MatrixXd& get_constraint() const;
			void set_constraint(const Eigen::MatrixXd& constraint);

            virtual std::unique_ptr< ScalarPredictor > copy() const;            

        protected:
            Eigen::MatrixXd _constraint;
    };      

    class STATISKIT_GLM_API VectorPredictor
    {
        public:
            VectorPredictor(const MultivariateSampleSpace& explanatory_space);
            virtual ~VectorPredictor();
			VectorPredictor(const VectorPredictor& predictor);
			
            virtual Eigen::VectorXd operator() (const MultivariateEvent& event) const = 0;

            const MultivariateSampleSpace* get_explanatory_space() const;
			
			virtual size_t size() const = 0;
			
			virtual void set_beta(const Eigen::VectorXd& beta) = 0;
						
            virtual std::unique_ptr< VectorPredictor > copy() const = 0;
				            
        protected:
            MultivariateSampleSpace* _explanatory_space;
    };  
        
    class STATISKIT_GLM_API CompleteVectorPredictor : public VectorPredictor
    {
        public:
            CompleteVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension);
            CompleteVectorPredictor(const CompleteVectorPredictor& predictor);

            virtual Eigen::VectorXd operator() (const MultivariateEvent& event) const;
            
			virtual size_t size() const;
			
			virtual void set_beta(const Eigen::VectorXd& beta);                  
			
			const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);

			const Eigen::MatrixXd& get_delta() const;
            void set_delta(const Eigen::MatrixXd& delta);
			
            virtual std::unique_ptr< VectorPredictor > copy() const;	
            		
        protected:
        	Eigen::VectorXd _alpha;
            Eigen::MatrixXd _delta;
    };
    
    class STATISKIT_GLM_API ProportionalVectorPredictor : public VectorPredictor
    {
        public:
            ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension);
            ProportionalVectorPredictor(const ProportionalVectorPredictor& predictor);

            virtual Eigen::VectorXd operator() (const MultivariateEvent& event) const;
            
			virtual size_t size() const;
			
			virtual void set_beta(const Eigen::VectorXd& beta);                  
			
			const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);

			const Eigen::VectorXd& get_delta() const;
            void set_delta(const Eigen::VectorXd& delta);
			
            virtual std::unique_ptr< VectorPredictor > copy() const;	
            		
        protected:
        	Eigen::VectorXd _alpha;
            Eigen::VectorXd _delta;

            ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space);
    };    

    class STATISKIT_GLM_API ConstrainedVectorPredictor : public ProportionalVectorPredictor
    {
        public:
            ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Eigen::MatrixXd& constraint);
            ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const Eigen::MatrixXd& constraint, const Eigen::MatrixXd& intercept_constraint);
            ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Indices& proportional);
            ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor);
            
            virtual Eigen::VectorXd operator() (const MultivariateEvent& event) const;
            
			const Eigen::MatrixXd& get_constraint() const;
			void set_constraint(const Eigen::MatrixXd& constraint);
			
			const Eigen::MatrixXd& get_intercept_constraint() const;
			void set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint);		

            static Eigen::MatrixXd partial_proportional_constraint(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Indices& proportional);	
            static Eigen::MatrixXd partial_proportional_constraint(const UnivariateConditionalData& data, const Indices& proportional); 

            virtual std::unique_ptr< VectorPredictor > copy() const;            

        protected:
            Eigen::MatrixXd _constraint;
            Eigen::MatrixXd _intercept_constraint;
    }; 

};

#endif
