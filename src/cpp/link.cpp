#include "link.h"

namespace statiskit
{

    PoissonCanonicalLink::PoissonCanonicalLink()
    {}

    PoissonCanonicalLink::~PoissonCanonicalLink()
    {} 

    double PoissonCanonicalLink::evaluate(const double& value) const
    { return log(value); }

    double PoissonCanonicalLink::inverse(const double& value) const
    { return exp(value); }

    double PoissonCanonicalLink::inverse_derivative(const double& value) const
    { return exp(value); }

    std::unique_ptr< PoissonLink > PoissonCanonicalLink::copy() const
    { return std::make_unique< PoissonCanonicalLink >(); } 

    PoissonVLink::PoissonVLink() : FLink<PoissonLink>()
    {}

    PoissonVLink::PoissonVLink(const PoissonVLink& link) : FLink<PoissonLink>(link)
    {}

    PoissonVLink::~PoissonVLink()
    {} 

    double PoissonVLink::evaluate(const double& value) const
    { return _distribution->quantile(value / (1. + value)); }

    double PoissonVLink::inverse(const double& value) const // v = F/(1-F)
    { return _distribution->cdf(value) / ( 1-_distribution->cdf(value) ); } 

    double PoissonVLink::inverse_derivative(const double& value) const
    { return _distribution->pdf(value) / pow( 1-_distribution->cdf(value), 2); }        

    std::unique_ptr< PoissonLink > PoissonVLink::copy() const
    { return std::make_unique< PoissonVLink >(*this); }        

                   
    BinomialCanonicalLink::BinomialCanonicalLink()
    {}

    BinomialCanonicalLink::~BinomialCanonicalLink()
    {}  

    double BinomialCanonicalLink::evaluate(const double& value) const
    { return log(value / (1. - value)); }

    double BinomialCanonicalLink::inverse(const double& value) const
    { return 1. / (1 + exp(-value)); }
    
    double BinomialCanonicalLink::inverse_derivative(const double& value) const
    { return exp(-value) / pow(1 + exp(-value), 2); }        

    std::unique_ptr< BinomialLink > BinomialCanonicalLink::copy() const
    { return std::make_unique< BinomialCanonicalLink >(*this); }
                   
    BinomialFLink::BinomialFLink() : FLink<BinomialLink>()
    {}

    BinomialFLink::BinomialFLink(const BinomialFLink& bflink) : FLink<BinomialLink>(bflink)
    {}

    BinomialFLink::~BinomialFLink()
    {}  

    double BinomialFLink::evaluate(const double& value) const
    { return _distribution->quantile(value); }

    double BinomialFLink::inverse(const double& value) const
    { return _distribution->cdf(value); }
    
    double BinomialFLink::inverse_derivative(const double& value) const
    { return _distribution->pdf(value); }        

    std::unique_ptr< BinomialLink > BinomialFLink::copy() const
    { return std::make_unique< BinomialFLink >(*this); }  

    NegativeBinomialCanonicalLink::NegativeBinomialCanonicalLink()
    {}

    NegativeBinomialCanonicalLink::~NegativeBinomialCanonicalLink()
    {} 

    double NegativeBinomialCanonicalLink::evaluate(const double& value) const
    {
        double res;
        if(boost::math::isfinite(value) && value > 0.)
        { res = log(value / (1 + value)); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    }

    double NegativeBinomialCanonicalLink::inverse(const double& value) const
    {
        double res;
        if(boost::math::isfinite(value) && value < 0.)
        { res = exp(value) / (1 - exp(value)); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    }

    double NegativeBinomialCanonicalLink::inverse_derivative(const double& value) const
    {
        double res;
        if(boost::math::isfinite(value) && value < 0.)
        { res = exp(value) / pow(1 - exp(value), 2); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    }

    std::unique_ptr< NegativeBinomialLink > NegativeBinomialCanonicalLink::copy() const
    { return std::make_unique< NegativeBinomialCanonicalLink >(*this); } 

                    
    NegativeBinomialULink::NegativeBinomialULink() : FLink<NegativeBinomialLink>()
    {}

    NegativeBinomialULink::NegativeBinomialULink(const NegativeBinomialULink& link) : FLink<NegativeBinomialLink>(link)
    {}

    NegativeBinomialULink::~NegativeBinomialULink()
    {}    

    double NegativeBinomialULink::evaluate(const double& value) const
    {
        double res;
        if(boost::math::isfinite(value) && value > 0.)
        { res = _distribution->quantile(value / (1. + 2 * value)); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    } 

    double NegativeBinomialULink::inverse(const double& value) const // return mu (and not pi)
    {
        double res;
        if(boost::math::isfinite(value) && value < 0.)
        { res = _distribution->cdf(value) / (1 - 2*_distribution->cdf(value)); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    } 
    
    double NegativeBinomialULink::inverse_derivative(const double& value) const
    {
        double res;
        if(boost::math::isfinite(value) && value < 0.)
        { res = _distribution->pdf(value) / pow(1 - 2*_distribution->cdf(value), 2); }
        else
        { res = std::numeric_limits< double >::quiet_NaN(); }
        return res;
    }   

    std::unique_ptr< NegativeBinomialLink > NegativeBinomialULink::copy() const
    { return std::make_unique< NegativeBinomialULink >(*this); }
        

    NegativeBinomialVLink::NegativeBinomialVLink() : FLink<NegativeBinomialLink>()
    {}

    NegativeBinomialVLink::NegativeBinomialVLink(const NegativeBinomialVLink& link) : FLink<NegativeBinomialLink>(link)
    {}

    NegativeBinomialVLink::~NegativeBinomialVLink()
    {}    

    double NegativeBinomialVLink::evaluate(const double& value) const
    { return _distribution->quantile(value / (1. + value)); }

    double NegativeBinomialVLink::inverse(const double& value) const 
    { return _distribution->cdf(value) / (1 - _distribution->cdf(value)); } 
    
    double NegativeBinomialVLink::inverse_derivative(const double& value) const
    { return _distribution->pdf(value) / pow(1-_distribution->cdf(value), 2); }  

    std::unique_ptr< NegativeBinomialLink > NegativeBinomialVLink::copy() const
    { return std::make_unique< NegativeBinomialVLink >(*this); }        


    NominalCanonicalLink::NominalCanonicalLink()
    {}

    NominalCanonicalLink::~NominalCanonicalLink()
    {}

    Eigen::VectorXd NominalCanonicalLink::inverse(const Eigen::VectorXd& values) const
    {
    	Eigen::VectorXd pi = values.array().exp();
    	double norm = 1 + pi.sum();
    	return pi/norm; 
    }
    
    Eigen::MatrixXd NominalCanonicalLink::inverse_derivative(const Eigen::VectorXd& values) const
    {
    	Eigen::VectorXd pi = inverse(values);
    	return ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ); 
    }          
    
    std::unique_ptr< NominalLink > NominalCanonicalLink::copy() const
    { return std::make_unique< NominalCanonicalLink >(*this); }
        
        
    ReferenceLink::ReferenceLink() : FLink<NominalLink>()
    {}

    ReferenceLink::ReferenceLink(const ReferenceLink& link) : FLink<NominalLink>(link)
    {}

    ReferenceLink::~ReferenceLink()
    {}  

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
    	{ D(j,j) = _distribution->pdf( values(j) ) / ( _distribution->cdf( values(j) ) * ( 1-_distribution->cdf( values(j) ) ) ); }
    	return D * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() );
    }                

    std::unique_ptr< NominalLink > ReferenceLink::copy() const
    { return std::make_unique< ReferenceLink >(*this); } 
        

    OrdinalCanonicalLink::OrdinalCanonicalLink()
    {}

    OrdinalCanonicalLink::~OrdinalCanonicalLink()
    {}        
        
    Eigen::VectorXd OrdinalCanonicalLink::inverse(const Eigen::VectorXd& values) const
    {
        Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(values.rows(), values.rows());
        Eigen::VectorXd pi = (Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Upper>(Ones) * values).array().exp(); // eta = (At)^-1 eta_prime
    	double norm = 1 + pi.sum();
    	return pi/norm;  
    } 
    
    Eigen::MatrixXd OrdinalCanonicalLink::inverse_derivative(const Eigen::VectorXd& values) const
    {
    	Eigen::VectorXd pi = inverse(values);
        Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(pi.rows(),pi.rows());
    	return Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Lower>(Ones) * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() ); 
    } 
           
    std::unique_ptr< OrdinalLink > OrdinalCanonicalLink::copy() const
    { return std::make_unique< OrdinalCanonicalLink >(*this); }   

        
    AdjacentLink::AdjacentLink() : FLink<OrdinalLink>()
    {}

    AdjacentLink::AdjacentLink(const AdjacentLink& link) : FLink<OrdinalLink>(link)
    {}

    AdjacentLink::~AdjacentLink()
    {}  

    Eigen::VectorXd AdjacentLink::inverse(const Eigen::VectorXd& values) const
    {    
        Eigen::VectorXd pi( values.size() );
        pi[values.size()-1] = _distribution->cdf( values(values.size()-1) ) / ( 1-_distribution->cdf( values(values.size()-1) ) );
        double norm = 1 + pi[values.size()-1];   
        for(size_t j=(values.size()-1); j>0; --j)
        {
            pi[j-1] = pi[j] * _distribution->cdf( values(j-1) ) / ( 1-_distribution->cdf( values(j-1) ) );
            norm += pi[j-1];
        }                      
        return pi/norm; // pi is ordered
    } 

    Eigen::MatrixXd AdjacentLink::inverse_derivative(const Eigen::VectorXd& values) const
    {
    	Eigen::VectorXd pi = inverse(values);
    	Eigen::MatrixXd D = Eigen::MatrixXd::Zero(pi.rows(),pi.rows());
        Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(pi.rows(),pi.rows());
    	for(size_t j=0; j<pi.rows(); ++j)
    	{ D(j,j) = _distribution->pdf( values(j) ) / ( _distribution->cdf( values(j) ) * ( 1-_distribution->cdf( values(j) ) ) ); }
    	return Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Lower>(Ones) * D * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() );
    } 
    
    std::unique_ptr< OrdinalLink > AdjacentLink::copy() const
    { return std::make_unique< AdjacentLink >(*this); }
			
        
    CumulativeLink::CumulativeLink() : FLink<OrdinalLink>()
    {}

    CumulativeLink::CumulativeLink(const CumulativeLink& link) : FLink<OrdinalLink>(link)
    {} 

    CumulativeLink::~CumulativeLink()
    {}  

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
        
    
    SequentialLink::SequentialLink() : FLink<OrdinalLink>()
    {}

    SequentialLink::SequentialLink(const SequentialLink& link) : FLink<OrdinalLink>(link)
    {}

    SequentialLink::~SequentialLink()
    {} 

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

 //    Eigen::MatrixXd SequentialLink::inverse_derivative(const Eigen::VectorXd& values) const
 //    {
	// Eigen::MatrixXd M = Eigen::MatrixXd::Zero(values.rows(),values.rows());
	// Eigen::VectorXd pi = inverse(values);
	// double mu_ref(1), cste(0);
	// for (size_t j=0; j < pi.rows(); ++j)
	// {
	// 	mu_ref -= cste;
	// 	M(j,j) = 1/mu_ref;
	// 	for (size_t i=0; i<j; ++i)
	// 	{ M(i,j) = pi(j)/(mu_ref*mu_ref); }

	// 	cste = pi[j];
	// }
	// return M.inverse(); 
 //    }                 

    Eigen::MatrixXd SequentialLink::inverse_derivative(const Eigen::VectorXd& values) const
    {
    Eigen::MatrixXd M = Eigen::MatrixXd::Zero(values.rows(),values.rows());
    double product = 1;
    for (size_t j=0; j < values.rows(); ++j)
    {
        M(j,j) = _distribution->pdf(values(j)) * product;
        for (size_t i=0; i<j; ++i)
        //{ M(i,j) = -M(j,j) * _distribution->cdf(values(j)) / ( 1-_distribution->cdf(values(i)) ); }
        { M(i,j) = - _distribution->pdf(values(i)) / ( 1-_distribution->cdf(values(i)) ) * _distribution->cdf(values(j)) * product ; }    
        product *= ( 1 - _distribution->cdf( values(j) ) );
    }
    return M; 
    }

    std::unique_ptr< OrdinalLink > SequentialLink::copy() const
    { return std::make_unique< SequentialLink >(*this); }                 
}


