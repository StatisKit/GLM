/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "predictor.h"
#include <eigen3/unsupported/Eigen/KroneckerProduct>

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
        _delta = Eigen::VectorXd::Zero(size);
    }

    CompleteScalarPredictor::CompleteScalarPredictor(const CompleteScalarPredictor& predictor) : ScalarPredictor(predictor)
    {
        alpha = predictor.alpha;
        _delta = predictor._delta;
    }
     
    double CompleteScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + _explanatory_space->encode(event) * _delta; }

	void CompleteScalarPredictor::set_beta(const Eigen::VectorXd& beta)
	{
		if(beta.rows() != (1 + _delta.rows()) )
		{ throw statiskit::size_error("beta", beta.rows(), 1+_delta.rows()); }	
		alpha = beta(0);
		_delta = beta.segment(1, _delta.rows());
	}
	
	size_t CompleteScalarPredictor::size() const
	{ return (1+_delta.size()); }
	
	const Eigen::VectorXd& CompleteScalarPredictor::get_delta() const
	{ return _delta; }

    void CompleteScalarPredictor::set_delta(const Eigen::VectorXd& delta)
    {
        if(delta.rows() != _delta.rows() )
        { throw statiskit::size_error("delta", delta.rows(), _delta.rows()); }  
        _delta = delta;
    }

    std::unique_ptr< ScalarPredictor > CompleteScalarPredictor::copy() const
    { return std::make_unique< CompleteScalarPredictor >(*this); }


    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const MultivariateSampleSpace& explanatory_space, const Eigen::MatrixXd& constraint) : CompleteScalarPredictor(explanatory_space, constraint.cols())
    { 
    	if(constraint.rows() != explanatory_space.encode() )
    	{ throw statiskit::size_error("constraint", constraint.rows(), explanatory_space.encode() ); } 
    	if(constraint.cols() > constraint.rows())
    	{ throw statiskit::size_error("constraint", constraint.cols(), constraint.rows(), statiskit::size_error::size_type::superior); }     	   
    	_constraint = constraint; 
    }

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor) : CompleteScalarPredictor(predictor)
    { _constraint = predictor._constraint; }
     
    double ConstrainedScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + _explanatory_space->encode(event) * _constraint * _delta; }
    
    const Eigen::MatrixXd& ConstrainedScalarPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedScalarPredictor::set_constraint(const Eigen::MatrixXd& constraint)
	{
		if(constraint.rows() != _constraint.rows())
		{ throw statiskit::size_error("constraint", constraint.rows(), _constraint.rows()); }
		if(constraint.cols() != _constraint.cols())
		{ throw statiskit::size_error("constraint", constraint.cols(), _constraint.cols()); }			
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
    	_alpha = Eigen::VectorXd::Zero(dimension);
    	_delta = Eigen::MatrixXd::Zero(dimension, explanatory_space.encode()); 
    }
    
    CompleteVectorPredictor::CompleteVectorPredictor(const CompleteVectorPredictor& predictor) : VectorPredictor(predictor)
    {
    	_alpha = predictor._alpha; 
    	_delta = predictor._delta; 
    }

    Eigen::VectorXd CompleteVectorPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _delta * (_explanatory_space->encode(event)).transpose(); }
    
    size_t CompleteVectorPredictor::size() const
    { return _alpha.rows() + _delta.size(); }
            
    void CompleteVectorPredictor::set_beta(const Eigen::VectorXd& beta)
	{
		if(beta.rows() != _alpha.rows() + _delta.rows() * _delta.cols())
		{ throw statiskit::size_error("beta", beta.rows(),  _alpha.rows() + _delta.rows() * _delta.cols()); }
		_alpha = beta.segment(0, _alpha.rows());
		for(size_t j=0; j<_alpha.rows(); ++j)
        { _delta.block(j, 0, 1, _delta.cols()) = ( beta.segment(_alpha.rows() + j * _delta.cols(),_delta.cols() ) ).transpose(); } //_alpha.rows() + (j+1) * _delta.cols() - 1) ).transpose(); }
	}
		
	const Eigen::VectorXd& CompleteVectorPredictor::get_alpha() const
	{ return _alpha; }	

	void CompleteVectorPredictor::set_alpha(const Eigen::VectorXd& alpha)
    {
        if(alpha.rows() != _alpha.rows() )
        { throw statiskit::size_error("alpha", alpha.rows(),  _alpha.rows() ); }
        _alpha = alpha;
    }

	const Eigen::MatrixXd& CompleteVectorPredictor::get_delta() const
	{ return _delta; }

    void CompleteVectorPredictor::set_delta(const Eigen::MatrixXd& delta)
    {
        if(delta.rows() != _delta.rows() )
        { throw statiskit::size_error("delta nb rows", delta.rows(),  _delta.rows() ); }
        if(delta.cols() != _delta.cols() )
        { throw statiskit::size_error("delta nb cols", delta.cols(),  _delta.cols() ); }   
        _delta = delta;
    }    
	
    std::unique_ptr< VectorPredictor > CompleteVectorPredictor::copy() const
    { return std::make_unique< CompleteVectorPredictor >(*this); }	
    
       
    ProportionalVectorPredictor::ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension) : VectorPredictor(explanatory_space)
    {
    	_alpha = Eigen::VectorXd::Zero(dimension); 
    	_delta = Eigen::VectorXd::Zero(explanatory_space.encode());
    }
    
    ProportionalVectorPredictor::ProportionalVectorPredictor(const ProportionalVectorPredictor& predictor) : VectorPredictor(predictor)
    {
     	_alpha = predictor._alpha;
    	_delta = predictor._delta; 
    }
	
    Eigen::VectorXd ProportionalVectorPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _explanatory_space->encode(event) * _delta * Eigen::VectorXd::Ones(_alpha.rows()); }
    
    size_t ProportionalVectorPredictor::size() const
    { return _alpha.rows() + _delta.rows(); }
            
    void ProportionalVectorPredictor::set_beta(const Eigen::VectorXd& beta)
	{
		if(beta.rows() != _alpha.rows() + _delta.rows() * _delta.cols())
		{ throw statiskit::size_error("beta", beta.rows(),  _alpha.rows() + _delta.rows() * _delta.cols()); }
		_alpha = beta.segment(0, _alpha.rows() );
		_delta = beta.segment(_alpha.rows(),  _delta.rows() );
	}
		
	const Eigen::VectorXd& ProportionalVectorPredictor::get_alpha() const
	{ return _alpha; }		
	
    void ProportionalVectorPredictor::set_alpha(const Eigen::VectorXd& alpha)
    {
        if(alpha.rows() != _alpha.rows() )
        { throw statiskit::size_error("alpha", alpha.rows(),  _alpha.rows() ); }
        _alpha = alpha;
    }

	const Eigen::VectorXd& ProportionalVectorPredictor::get_delta() const
	{ return _delta; }

    void ProportionalVectorPredictor::set_delta(const Eigen::VectorXd& delta)
    {
        if(delta.rows() != _delta.rows() )
        { throw statiskit::size_error("delta", delta.rows(),  _delta.rows() ); }
        _delta = delta;
    }   
	
    std::unique_ptr< VectorPredictor > ProportionalVectorPredictor::copy() const
    { return std::make_unique< ProportionalVectorPredictor >(*this); }	

    ProportionalVectorPredictor::ProportionalVectorPredictor(const MultivariateSampleSpace& explanatory_space) : VectorPredictor(explanatory_space)
    {}


    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Eigen::MatrixXd& constraint) : ProportionalVectorPredictor(explanatory_space)
    {   
    	if(constraint.rows() != ( explanatory_space.encode() * dimension ) )
    	{ throw statiskit::size_error("constraint", constraint.rows(),  explanatory_space.encode() * dimension ); } 
    	if(constraint.cols() > constraint.rows())
    	{ throw statiskit::size_error("constraint", constraint.cols(), constraint.rows(), statiskit::size_error::size_type::superior); }     	   
    	_constraint = constraint; 
    	_intercept_constraint = Eigen::MatrixXd::Identity(dimension, dimension);
        _alpha = Eigen::VectorXd::Zero(dimension); 
        _delta = Eigen::VectorXd::Zero(constraint.cols());  
    }
    
    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const Eigen::MatrixXd& constraint, const Eigen::MatrixXd& intercept_constraint) : ProportionalVectorPredictor(explanatory_space)
    { 
    	if(constraint.rows() != ( explanatory_space.encode() * intercept_constraint.rows()) )
    	{ throw statiskit::size_error("constraint", constraint.rows(),  explanatory_space.encode() * intercept_constraint.rows()); } 
    	if(constraint.cols() >  constraint.rows())
    	{ throw statiskit::size_error("constraint", constraint.cols(), constraint.rows(), statiskit::size_error::size_type::superior); } 
    	_constraint = constraint;
    	if(intercept_constraint.cols() > intercept_constraint.rows() )
    	{ throw statiskit::size_error("intercept_constraint", intercept_constraint.cols(), intercept_constraint.rows(), statiskit::size_error::size_type::superior); }     	    	   
    	_intercept_constraint = intercept_constraint; 
        _alpha = Eigen::VectorXd::Zero(intercept_constraint.cols()); 
        _delta = Eigen::VectorXd::Zero(constraint.cols());        
    }    

    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Indices& proportional) : ConstrainedVectorPredictor(explanatory_space, dimension, partial_proportional_constraint(explanatory_space, dimension, proportional))
    {}

    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor) : ProportionalVectorPredictor(predictor)
    { 
    	_constraint = predictor._constraint; 
    	_intercept_constraint = predictor._intercept_constraint;
    }
     
    Eigen::VectorXd ConstrainedVectorPredictor::operator() (const MultivariateEvent& event) const
    { 
        Eigen::VectorXd xt = _explanatory_space->encode(event).transpose();
        Eigen::MatrixXd Identity = Eigen::MatrixXd::Identity(_intercept_constraint.rows(), _intercept_constraint.rows());
        return _intercept_constraint * _alpha + Eigen::kroneckerProduct(Identity, xt) * _constraint * _delta;
    }
    
    const Eigen::MatrixXd& ConstrainedVectorPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedVectorPredictor::set_constraint(const Eigen::MatrixXd& constraint)
	{
		if(constraint.rows() != _constraint.rows())
		{ throw statiskit::size_error("constraint", constraint.rows(), _constraint.rows()); }
		if(constraint.cols() != _constraint.cols())
		{ throw statiskit::size_error("constraint", constraint.cols(), _constraint.cols()); }			
		_constraint = constraint;
	}
	
    const Eigen::MatrixXd& ConstrainedVectorPredictor::get_intercept_constraint() const
    { return _intercept_constraint; }
    
	void ConstrainedVectorPredictor::set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint)
	{
		if(intercept_constraint.rows() != _intercept_constraint.rows())
		{ throw statiskit::size_error("intercept_constraint", intercept_constraint.rows(), _intercept_constraint.rows()); }
		if(intercept_constraint.cols() != _intercept_constraint.cols())
		{ throw statiskit::size_error("intercept_constraint", intercept_constraint.cols(), _intercept_constraint.cols()); }			
		_intercept_constraint = intercept_constraint;
	}	
	
    std::unique_ptr< VectorPredictor > ConstrainedVectorPredictor::copy() const
    { return std::make_unique< ConstrainedVectorPredictor >(*this); }

    Eigen::MatrixXd ConstrainedVectorPredictor::partial_proportional_constraint(const MultivariateSampleSpace& explanatory_space, const size_t& dimension, const Indices& proportional)
    {
        Index nb_cols=0, nb_block_rows=0, current_row = 0, current_col=0;
        std::vector< Index > rows, cols;
        for(Index i=0; i<explanatory_space.size(); ++i)
        {
            if(explanatory_space.get(i)->get_outcome() == outcome_type::CATEGORICAL)
            { 
                Index K = static_cast< const CategoricalSampleSpace* >( explanatory_space.get(i) )->get_cardinality();
                rows.push_back(K-1); 
            }
            else
            { rows.push_back(1); }
            nb_block_rows += rows.back();

            if(proportional.find(i) == proportional.end()) // complete
            { cols.push_back(rows.back()*dimension); }
            else
            { cols.push_back(rows.back()); }  
            nb_cols += cols.back();   
        }
        Eigen::MatrixXd constraint = Eigen::MatrixXd::Zero(nb_block_rows*dimension, nb_cols);
        for(Index i=0; i<explanatory_space.size(); ++i)
        {
            Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(rows[i], rows[i]); 
            if(proportional.find(i) == proportional.end()) 
            {  
                for(Index j=0; j<dimension; ++j)
                {
                    Eigen::RowVectorXd indicator = Eigen::RowVectorXd::Zero(dimension);
                    indicator[j] = 1;    
                    constraint.block(j*nb_block_rows + current_row, current_col, rows[i], cols[i]) = Eigen::kroneckerProduct(indicator, identity); 
                }
            }
            else
            {
                for(Index j=0; j<dimension; ++j)
                {constraint.block(j*nb_block_rows + current_row, current_col, rows[i], cols[i]) = identity; }
            } 
            current_col += cols[i];
            current_row += rows[i];               
        }
        return constraint;
    }

    Eigen::MatrixXd ConstrainedVectorPredictor::partial_proportional_constraint(const MultivariateData& data, const Index& response, const Indices& explanatories, const Indices& proportional)
    {
        Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
        std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
        const MultivariateSampleSpace* explanatory_space = _data->get_sample_space();
        Indices prop;
        for(Indices::iterator it=proportional.begin(); it!=proportional.end(); ++it)
        { prop.insert(distance(explanatories.begin(), explanatories.find(*it))); }
        return partial_proportional_constraint(*explanatory_space, J-1, prop);
    }
}
