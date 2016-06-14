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
    {
        _explanatory_space = explanatory_space.copy().release();
        alpha = 0.;
        _delta = arma::zeros< arma::colvec >(explanatory_space.encode());
    }

    ScalarPredictor::~ScalarPredictor()
    { delete _explanatory_space; }

    ScalarPredictor::ScalarPredictor(const ScalarPredictor& predictor)
    {
        _explanatory_space = predictor._explanatory_space->copy().release();
        alpha = predictor.alpha;
        _delta = predictor._delta;
    }
     
    double ScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + (_explanatory_space->encode(event) * _delta).eval().at(0); }

    const MultivariateSampleSpace* ScalarPredictor::get_explanatory_space() const
    { return _explanatory_space; }

	const arma::colvec& ScalarPredictor::get_delta() const
	{ return _delta; }
	
	size_t ScalarPredictor::get_delta_size() const
	{ return _delta.size(); }
	
	void ScalarPredictor::set_delta(const arma::colvec& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }
		_delta = delta;
	}

    std::unique_ptr< ScalarPredictor > ScalarPredictor::copy() const
    { return std::make_unique< ScalarPredictor >(*this); }

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const arma::mat& constraint) : ScalarPredictor(explanatory_space)
    { 
    	if(constraint.n_rows != explanatory_space.encode())
    	{ throw statiskit::size_error("constraint", constraint.n_rows, explanatory_space.encode()); } 
    	if(constraint.n_cols <= explanatory_space.encode())
    	{ throw statiskit::size_error("constraint", constraint.n_cols, explanatory_space.encode(), statiskit::size_error::size_type::inferior); }     	   
        _delta = arma::zeros< arma::colvec >(constraint.n_cols);    
    	_constraint = constraint; 
    }

    ConstrainedScalarPredictor::~ConstrainedScalarPredictor()
    {}

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor) : ScalarPredictor(predictor)
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

    VectorPredictor::VectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& nb_cols)
    {
    	_explanatory_space = explanatory_space.copy().release();
    	_alpha = arma::zeros< arma::colvec >(nb_cols);     	
    }
  
    VectorPredictor::~VectorPredictor()
    {} 
    
    VectorPredictor::VectorPredictor(const VectorPredictor& predictor)
    {
    	_explanatory_space = predictor._explanatory_space; 
    	_alpha = predictor._alpha;
    }
    
    const MultivariateSampleSpace* VectorPredictor::get_explanatory_space() const
    { return _explanatory_space; }
    
	
	const arma::colvec& VectorPredictor::get_alpha() const
	{ return _alpha; }
	
	void VectorPredictor::set_alpha(const arma::colvec& alpha)
	{
		if(alpha.n_rows != _alpha.n_rows)
		{ throw statiskit::size_error("alpha", alpha.n_rows, _alpha.n_rows); }
		_alpha = alpha;
	} 

    CompletePredictor::CompletePredictor(const MultivariateSampleSpace& explanatory_space, const size_t& nb_cols) : VectorPredictor(explanatory_space, nb_cols)
    { _delta = arma::zeros< arma::mat >(explanatory_space.encode(), _alpha.n_cols); }
    
    CompletePredictor::~CompletePredictor()
    {}
    
    CompletePredictor::CompletePredictor(const CompletePredictor& predictor) : VectorPredictor(predictor)
    { _delta = predictor._delta; }

    arma::colvec CompletePredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _explanatory_space->encode(event) * _delta; }
            
    void CompletePredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows * _delta.n_cols)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows * _delta.n_cols); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		for(size_t j=0; j<_alpha.n_rows; ++j)
		{ _delta.submat(0, j, _alpha.n_rows -1, j) = beta.subvec(_alpha.n_rows -1 +j, _alpha.n_rows -1 +j + _delta.n_rows); }
	}
	
	size_t CompletePredictor::get_delta_size() const
	{ return _delta.size(); }
		
	const arma::mat& CompletePredictor::get_delta() const
	{ return _delta; }
	
	void CompletePredictor::set_delta(const arma::mat& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }
		if(delta.n_cols != _delta.n_cols)
		{ throw statiskit::size_error("delta", delta.n_cols, _delta.n_cols); }		
		_delta = delta;
	}
	
    std::unique_ptr< VectorPredictor > CompletePredictor::copy() const
    { return std::make_unique< CompletePredictor >(*this); }	


    ProportionalPredictor::ProportionalPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& nb_cols) : VectorPredictor(explanatory_space, nb_cols)
    { _delta = arma::zeros< arma::colvec >(explanatory_space.encode()); }
    
    ProportionalPredictor::~ProportionalPredictor()
    {}
    
    ProportionalPredictor::ProportionalPredictor(const ProportionalPredictor& predictor) : VectorPredictor(predictor)
    { _delta = predictor._delta; }

    arma::colvec ProportionalPredictor::operator() (const MultivariateEvent& event) const
    {
    	arma::colvec constant(_alpha.n_rows, arma::fill::ones);   
    	return _alpha + (_explanatory_space->encode(event) * _delta).eval().at(0) * constant; 
    }
            
    void ProportionalPredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		_delta = beta.subvec(_alpha.n_rows -1, _alpha.n_rows -1 + _delta.n_rows);
	}
	
	size_t ProportionalPredictor::get_delta_size() const
	{ return _delta.size(); }	
			
	const arma::colvec& ProportionalPredictor::get_delta() const
	{ return _delta; }
	
	void ProportionalPredictor::set_delta(const arma::colvec& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }		
		_delta = delta;
	}
	
    std::unique_ptr< VectorPredictor > ProportionalPredictor::copy() const
    { return std::make_unique< ProportionalPredictor >(*this); }	
	    
	    
    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& nb_cols, const arma::mat& constraint) : VectorPredictor(explanatory_space, nb_cols)
    { 
    	if(constraint.n_rows != explanatory_space.encode() * nb_cols)
    	{ throw statiskit::size_error("constraint", constraint.n_rows, explanatory_space.encode() * nb_cols); }    
    	if(constraint.n_cols <= explanatory_space.encode() * nb_cols)
    	{ throw statiskit::size_error("constraint", constraint.n_cols, explanatory_space.encode() * nb_cols, statiskit::size_error::size_type::inferior); }     	
        _delta = arma::zeros< arma::colvec >(constraint.n_cols);    
    	_constraint = constraint; 
    }

    ConstrainedVectorPredictor::~ConstrainedVectorPredictor()
    {}

    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor) : VectorPredictor(predictor)
    {
     	_delta = predictor._delta;
    	_constraint = predictor._constraint; 
    }
     
    arma::colvec ConstrainedVectorPredictor::operator() (const MultivariateEvent& event) const
    {
		arma::mat identity(_alpha.n_rows, _alpha.n_rows, arma::fill::eye);
		return _alpha + kron(identity, _explanatory_space->encode(event)) * _constraint * _delta;
	}
	
    void ConstrainedVectorPredictor::set_beta(const arma::colvec& beta)
    {
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		_delta = beta.subvec(_alpha.n_rows, _alpha.n_rows + _delta.n_rows);
    }
	
	size_t ConstrainedVectorPredictor::get_delta_size() const
	{ return _delta.size(); }    
	
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
	
    std::unique_ptr< VectorPredictor > ConstrainedVectorPredictor::copy() const
    { return std::make_unique< ConstrainedVectorPredictor >(*this); }	
}
