/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "predictor.h"

namespace statiskit
{
    ScalarPredictor::ScalarPredictor(const MultivariateSampleSpace& explanatory_space)
    { _explanatory_space = explanatory_space.copy().release(); }

    ScalarPredictor::~ScalarPredictor()
    { delete _explanatory_space; }

    ScalarPredictor::ScalarPredictor(const ScalarPredictor& predictor)
    { _explanatory_space = predictor._explanatory_space->copy().release(); }

    const MultivariateSampleSpace* ScalarPredictor::get_explanatory_space() const
    { return _explanatory_space; }


    CompleteScalarPredictor::CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space) : CompleteScalarPredictor(explanatory_space, explanatory_space.encode())
    {}

    CompleteScalarPredictor::CompleteScalarPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& size) : ScalarPredictor(explanatory_space)
    {
        alpha = 0.;
        _delta = arma::zeros< arma::colvec >(size);
    }

    CompleteScalarPredictor::CompleteScalarPredictor(const CompleteScalarPredictor& predictor) : ScalarPredictor(predictor)
    {
        alpha = predictor.alpha;
        _delta = predictor._delta;
    }
     
    double CompleteScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + (_explanatory_space->encode(event) * _delta).eval().at(0); }

	void CompleteScalarPredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != (1 + _delta.n_rows) )
		{ throw statiskit::size_error("beta", beta.n_rows, 1+_delta.n_rows); }	
		alpha = beta(0);
		_delta = beta.subvec(1, _delta.n_rows);
	}
	
	size_t CompleteScalarPredictor::size() const
	{ return (1+_delta.size()); }
	
	const arma::colvec& CompleteScalarPredictor::get_delta() const
	{ return _delta; }

    std::unique_ptr< ScalarPredictor > CompleteScalarPredictor::copy() const
    { return std::make_unique< CompleteScalarPredictor >(*this); }


    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint) : CompleteScalarPredictor(explanatory_space, constraint.n_cols)
    { 
    	if(constraint.n_rows != explanatory_space.encode() )
    	{ throw statiskit::size_error("constraint", constraint.n_rows, explanatory_space.encode() ); } 
    	if(constraint.n_cols > constraint.n_rows)
    	{ throw statiskit::size_error("constraint", constraint.n_cols, constraint.n_rows, statiskit::size_error::size_type::superior); }     	   
    	_constraint = constraint; 
    }

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor) : CompleteScalarPredictor(predictor)
    { _constraint = predictor._constraint; }
     
    double ConstrainedScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + (_explanatory_space->encode(event) * _constraint * _delta).eval().at(0); }
    
    const arma::mat& ConstrainedScalarPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedScalarPredictor::set_constraint(const arma::mat& constraint)
	{
		if(constraint.n_rows != _constraint.n_rows)
		{ throw statiskit::size_error("constraint", constraint.n_rows, _constraint.n_rows); }
		if(constraint.n_cols != _constraint.n_cols)
		{ throw statiskit::size_error("constraint", constraint.n_cols, _constraint.n_cols); }			
		_constraint = constraint;
	}
	
    std::unique_ptr< ScalarPredictor > ConstrainedScalarPredictor::copy() const
    { return std::make_unique< ConstrainedScalarPredictor >(*this); }
    

    VectorPredictor::VectorPredictor(const MultivariateSampleSpace& explanatory_space)
    { _explanatory_space = explanatory_space.copy().release(); }
  
    VectorPredictor::~VectorPredictor()
    {} 
    
    VectorPredictor::VectorPredictor(const VectorPredictor& predictor)
    { _explanatory_space = predictor._explanatory_space; }
    
    const MultivariateSampleSpace* VectorPredictor::get_explanatory_space() const
    { return _explanatory_space; }
    

    CompleteVectorPredictor::CompleteVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension) : VectorPredictor(explanatory_space)
    {
    	_alpha = arma::zeros< arma::colvec >(dimension);
    	_delta = arma::zeros< arma::mat >(dimension, explanatory_space.encode()); 
    }
    
    CompleteVectorPredictor::CompleteVectorPredictor(const CompleteVectorPredictor& predictor) : VectorPredictor(predictor)
    {
    	_alpha = predictor._alpha; 
    	_delta = predictor._delta; 
    }

    arma::colvec CompleteVectorPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _delta * (_explanatory_space->encode(event)).t(); }
    
    size_t CompleteVectorPredictor::size() const
    { return _alpha.n_rows + _delta.size(); }
            
    void CompleteVectorPredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows * _delta.n_cols)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows * _delta.n_cols); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		for(size_t j=0; j<_alpha.n_rows; ++j)
		{ _delta.submat(j, 0, j, _delta.n_cols-1) = ( beta.subvec(_alpha.n_rows + j * _delta.n_cols, _alpha.n_rows + (j+1) * _delta.n_cols - 1) ).t(); }
	}
		
	const arma::colvec& CompleteVectorPredictor::get_alpha() const
	{ return _alpha; }		
		
	const arma::mat& CompleteVectorPredictor::get_delta() const
	{ return _delta; }
	
    std::unique_ptr< VectorPredictor > CompleteVectorPredictor::copy() const
    { return std::make_unique< CompleteVectorPredictor >(*this); }	
    
       
    ProportionalVectorPredictor::ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension) : VectorPredictor(explanatory_space)
    {
    	_alpha = arma::zeros< arma::colvec >(dimension); 
    	_delta = arma::zeros< arma::colvec >(explanatory_space.encode());
    }
    
    ProportionalVectorPredictor::ProportionalVectorPredictor(const ProportionalVectorPredictor& predictor) : VectorPredictor(predictor)
    {
     	_alpha = predictor._alpha;
    	_delta = predictor._delta; 
    }
	
    arma::colvec ProportionalVectorPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _explanatory_space->encode(event) * _delta; }
    
    size_t ProportionalVectorPredictor::size() const
    { return _alpha.n_rows + _delta.n_rows; }
            
    void ProportionalVectorPredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows * _delta.n_cols)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows * _delta.n_cols); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		_delta = beta.subvec(_alpha.n_rows, _alpha.n_rows + _delta.n_cols - 1);
	}
		
	const arma::colvec& ProportionalVectorPredictor::get_alpha() const
	{ return _alpha; }		
		
	const arma::colvec& ProportionalVectorPredictor::get_delta() const
	{ return _delta; }
	
    std::unique_ptr< VectorPredictor > ProportionalVectorPredictor::copy() const
    { return std::make_unique< ProportionalVectorPredictor >(*this); }	


    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const arma::mat& constraint) : ProportionalVectorPredictor(explanatory_space, dimension)
    { 
    	if(constraint.n_rows != ( explanatory_space.encode() * dimension ) )
    	{ throw statiskit::size_error("constraint", constraint.n_rows,  explanatory_space.encode() * dimension ); } 
    	if(constraint.n_cols > constraint.n_rows)
    	{ throw statiskit::size_error("constraint", constraint.n_cols, constraint.n_rows, statiskit::size_error::size_type::superior); }     	   
    	_constraint = constraint; 
    	_intercept_constraint = arma::eye< arma::mat >(dimension, dimension);
    }
    
    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint, const arma::mat& intercept_constraint) : ProportionalVectorPredictor(explanatory_space, intercept_constraint.n_rows)
    { 
    	if(constraint.n_rows != ( explanatory_space.encode() * intercept_constraint.n_rows) )
    	{ throw statiskit::size_error("constraint", constraint.n_rows,  explanatory_space.encode() * intercept_constraint.n_rows); } 
    	if(constraint.n_cols >  constraint.n_rows)
    	{ throw statiskit::size_error("constraint", constraint.n_cols, constraint.n_rows, statiskit::size_error::size_type::superior); } 
    	_constraint = constraint;
    	if(intercept_constraint.n_cols > intercept_constraint.n_rows )
    	{ throw statiskit::size_error("intercept_constraint", intercept_constraint.n_cols, intercept_constraint.n_rows, statiskit::size_error::size_type::superior); }     	    	   
    	_intercept_constraint = intercept_constraint; 
    }    

    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor) : ProportionalVectorPredictor(predictor)
    { 
    	_constraint = predictor._constraint; 
    	_intercept_constraint = predictor._intercept_constraint;
    }
     
    arma::colvec ConstrainedVectorPredictor::operator() (const MultivariateEvent& event) const
    { return _intercept_constraint * _alpha +  arma::kron(arma::eye< arma::mat >(_intercept_constraint.n_rows, _intercept_constraint.n_rows), _explanatory_space->encode(event)) * _constraint * _delta;}
    
    const arma::mat& ConstrainedVectorPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedVectorPredictor::set_constraint(const arma::mat& constraint)
	{
		if(constraint.n_rows != _constraint.n_rows)
		{ throw statiskit::size_error("constraint", constraint.n_rows, _constraint.n_rows); }
		if(constraint.n_cols != _constraint.n_cols)
		{ throw statiskit::size_error("constraint", constraint.n_cols, _constraint.n_cols); }			
		_constraint = constraint;
	}
	
    const arma::mat& ConstrainedVectorPredictor::get_intercept_constraint() const
    { return _intercept_constraint; }
    
	void ConstrainedVectorPredictor::set_intercept_constraint(const arma::mat& intercept_constraint)
	{
		if(intercept_constraint.n_rows != _intercept_constraint.n_rows)
		{ throw statiskit::size_error("intercept_constraint", intercept_constraint.n_rows, _intercept_constraint.n_rows); }
		if(intercept_constraint.n_cols != _intercept_constraint.n_cols)
		{ throw statiskit::size_error("intercept_constraint", intercept_constraint.n_cols, _intercept_constraint.n_cols); }			
		_intercept_constraint = intercept_constraint;
	}	
	
    std::unique_ptr< VectorPredictor > ConstrainedVectorPredictor::copy() const
    { return std::make_unique< ConstrainedVectorPredictor >(*this); }
}
