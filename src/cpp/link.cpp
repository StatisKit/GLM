#include "link.h"

namespace statiskit
{
        double PoissonLink::inverse(const double& value) const
        { return exp(value); }
        
        double PoissonLink::inverse_derivative(const double& value) const
        { return exp(value); }

        std::unique_ptr< PoissonLink > PoissonLink::copy() const
        { return std::make_unique< PoissonLink >(*this); } 


	PoissonFLink::PoissonFLink()
	{ _distribution = new LogisticDistribution(); }
	
	PoissonFLink::~PoissonFLink()
	{ delete _distribution; }
	
	void PoissonFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double PoissonFLink::inverse(const double& value) const
        { return _distribution->cdf(value) / ( 1-_distribution->cdf(value) ); }
        
        double PoissonFLink::inverse_derivative(const double& value) const
        { return _distribution->pdf(value) / pow( 1-_distribution->cdf(value), 2); }        

        std::unique_ptr< PoissonLink > PoissonFLink::copy() const
        { return std::make_unique< PoissonFLink >(*this); }        

                   
        double BinomialLink::inverse(const double& value) const
        { return 1. / (1 + exp(-value)); }
        
        double BinomialLink::inverse_derivative(const double& value) const
        { return exp(-value) / pow(1 + exp(-value), 2); }        

        std::unique_ptr< BinomialLink > BinomialLink::copy() const
        { return std::make_unique< BinomialLink >(*this); }


	BinomialFLink::BinomialFLink()
	{ _distribution = new LogisticDistribution(); }
	
	BinomialFLink::~BinomialFLink()
	{ delete _distribution; }
			
	void BinomialFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double BinomialFLink::inverse(const double& value) const
        { return _distribution->cdf(value); }
        
        double BinomialFLink::inverse_derivative(const double& value) const
        { return _distribution->pdf(value); }        

        std::unique_ptr< BinomialLink > BinomialFLink::copy() const
        { return std::make_unique< BinomialFLink >(*this); }  
           
           
        double NegativeBinomialLink::inverse(const double& value) const
        { return exp(-value) - 1; } // defined if value < 0.
        
        double NegativeBinomialLink::inverse_derivative(const double& value) const
        { return -exp(-value); } // defined if value < 0.       

        std::unique_ptr< NegativeBinomialLink > NegativeBinomialLink::copy() const
        { return std::make_unique< NegativeBinomialLink >(*this); } 


	NegativeBinomialFLink::NegativeBinomialFLink()
	{ _distribution = new LogisticDistribution(); }
	
	NegativeBinomialFLink::~NegativeBinomialFLink()
	{ delete _distribution; }
			
	void NegativeBinomialFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double NegativeBinomialFLink::inverse(const double& value) const
        { return _distribution->cdf(value) / (1 - _distribution->cdf(value)); }
        
        double NegativeBinomialFLink::inverse_derivative(const double& value) const
        { return _distribution->pdf(value) / pow(1 - _distribution->cdf(value), 2); }        

        std::unique_ptr< NegativeBinomialLink > NegativeBinomialFLink::copy() const
        { return std::make_unique< NegativeBinomialFLink >(*this); }
        
        
        Eigen::VectorXd NominalLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = values.array().exp();
        	double norm = 1 + pi.sum();
        	return pi/norm; 
        }
        
        Eigen::MatrixXd NominalLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = inverse(values);
        	return ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() ); 
        }          
        
        std::unique_ptr< NominalLink > NominalLink::copy() const
        { return std::make_unique< NominalLink >(*this); }
        
        
		ReferenceLink::ReferenceLink()
		{ _distribution = new LogisticDistribution(); }
		
		ReferenceLink::~ReferenceLink()
		{ delete _distribution; }
				
		void ReferenceLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        Eigen::VectorXd ReferenceLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi( values.size() );
        	double norm = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{
        		pi[j] = _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) );
        		norm += pi[j];
        	}
        	return pi/norm; 
        }
        
        Eigen::MatrixXd ReferenceLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = inverse(values);
        	Eigen::MatrixXd D = Eigen::MatrixXd::Zero(pi.rows(),pi.rows());
        	for(size_t j=0; j<pi.rows(); ++j)
        	{ D(j,j) = _distribution->cdf( values(j) ) / ( _distribution->cdf( values(j) ) * ( 1-_distribution->cdf( values(j) ) ) ); }
        	return D * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() );
        }                

        std::unique_ptr< NominalLink > ReferenceLink::copy() const
        { return std::make_unique< ReferenceLink >(*this); } 
        
        
        
        Eigen::VectorXd OrdinalLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = values.array().exp();
        	double norm = 1 + pi.sum();
        	return pi/norm;  
        } 
        
        Eigen::MatrixXd OrdinalLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = inverse(values);
        	return ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() ); 
        } 
               
        std::unique_ptr< OrdinalLink > OrdinalLink::copy() const
        { return std::make_unique< OrdinalLink >(*this); }   
        
            

	AdjacentLink::AdjacentLink()
	{ _distribution = new LogisticDistribution(); }
	
	AdjacentLink::~AdjacentLink()
	{ delete _distribution; }
			
	void AdjacentLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        Eigen::VectorXd AdjacentLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd ordered_pi( values.size() );
        	ordered_pi[values.size()-1] = _distribution->cdf( values(values.size()-1) ) / ( 1-_distribution->cdf( values(values.size()-1) ) );
        	double norm = 1 + ordered_pi[values.size()-1];
        	for(size_t j=values.size()-2; j>=0; --j)
        	{
        		ordered_pi[j] = ordered_pi[j+1] * _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) );
        		norm += ordered_pi[j];
        	}         	    	
        	return ordered_pi/norm; 
        } 
               
        Eigen::MatrixXd AdjacentLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd pi = inverse(values);
        	Eigen::MatrixXd D = Eigen::MatrixXd::Zero(pi.rows(),pi.rows());
                Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(pi.rows(),pi.rows());
        	for(size_t j=0; j<pi.rows(); ++j)
        	{ D(j,j) = _distribution->pdf( values(j) ) / ( _distribution->cdf( values(j) ) * ( 1-_distribution->cdf( values(j) ) ) ); }
        	return D * Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Lower>(Ones) *  ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() );
        } 
        
        std::unique_ptr< OrdinalLink > AdjacentLink::copy() const
        { return std::make_unique< AdjacentLink >(*this); }
            

	CumulativeLink::CumulativeLink()
	{ _distribution = new LogisticDistribution(); }
	
	CumulativeLink::~CumulativeLink()
	{ delete _distribution; }
			
	void CumulativeLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        Eigen::VectorXd CumulativeLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd ordered_pi( values.size() );
		ordered_pi[0] = _distribution->cdf( values(0) );
        	for(size_t j=1; j<values.size(); ++j)
        	{ ordered_pi[j] = _distribution->cdf( values(j) ) - _distribution->cdf( values(j-1) ); }
        	
        	return ordered_pi; 
        } 
               
        Eigen::MatrixXd CumulativeLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
                Eigen::MatrixXd R = Eigen::MatrixXd::Identity(values.rows(), values.rows());
                R.block(0, 1, values.rows()-1, values.rows()-1) -= Eigen::MatrixXd::Identity(values.rows() -1, values.rows()-1);
        	Eigen::MatrixXd F = Eigen::MatrixXd::Zero(values.rows(),values.rows());
        	for(size_t j=0; j<values.rows(); ++j)
        	{ F(j,j) = _distribution->pdf( values(j) ); }        	
        	return (F * R);
        } 
        
        std::unique_ptr< OrdinalLink > CumulativeLink::copy() const
        { return std::make_unique< CumulativeLink >(*this); }
        
            

	SequentialLink::SequentialLink()
	{ _distribution = new LogisticDistribution(); }
	
	SequentialLink::~SequentialLink()
	{ delete _distribution; }
			
	void SequentialLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
	{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        Eigen::VectorXd SequentialLink::inverse(const Eigen::VectorXd& values) const
        {
        	Eigen::VectorXd ordered_pi( values.size() );
			double product = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{ 
        		ordered_pi[j] = product * _distribution->cdf( values(j) );
        		product *= ( 1 - _distribution->cdf( values(j) ) );
        	}			
        	    	
        	return ordered_pi; 
        }
 
        Eigen::MatrixXd SequentialLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
		Eigen::MatrixXd M = Eigen::MatrixXd::Zero(values.rows(),values.rows());
		Eigen::VectorXd pi = inverse(values);
		double mu_ref(1), cste(0);
		for (size_t j=0; j < pi.rows(); ++j)
		{
			mu_ref -= cste;
			M(j,j) = 1/mu_ref;
			for (size_t i=0; i<j; ++i)
			{ M(i,j) = pi(j)/(mu_ref*mu_ref); }

			cste = pi[j];
		}
		return M.inverse(); 
        }                 

        std::unique_ptr< OrdinalLink > SequentialLink::copy() const
        { return std::make_unique< SequentialLink >(*this); }                 
}


