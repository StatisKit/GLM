#include "link.h"

namespace statiskit
{
    namespace glm
    {
        PoissonCanonicalLink::PoissonCanonicalLink()
        {}

        PoissonCanonicalLink::~PoissonCanonicalLink()
        {} 

        double PoissonCanonicalLink::evaluate(const double& mu) const
        { return log(mu); }

        double PoissonCanonicalLink::inverse(const double& eta) const
        { return exp(eta); }

        double PoissonCanonicalLink::inverse_derivative(const double& eta) const
        { return exp(eta); }

        std::unique_ptr< PoissonLink > PoissonCanonicalLink::copy() const
        { return std::make_unique< PoissonCanonicalLink >(); } 

        PoissonVLink::PoissonVLink() : FLink<PoissonLink>()
        {}

        PoissonVLink::PoissonVLink(const PoissonVLink& link) : FLink<PoissonLink>(link)
        {}

        PoissonVLink::~PoissonVLink()
        {} 

        double PoissonVLink::evaluate(const double& mu) const
        { return _distribution->quantile(mu / (1. + mu)); }

        double PoissonVLink::inverse(const double& eta) const // v = F/(1-F)
        { return _distribution->cdf(eta) / ( 1-_distribution->cdf(eta) ); } 

        double PoissonVLink::inverse_derivative(const double& eta) const
        { return _distribution->pdf(eta) / pow( 1-_distribution->cdf(eta), 2); }        

        std::unique_ptr< PoissonLink > PoissonVLink::copy() const
        { return std::make_unique< PoissonVLink >(*this); }         

        NegativeBinomialCanonicalLink::NegativeBinomialCanonicalLink()
        {}

        NegativeBinomialCanonicalLink::~NegativeBinomialCanonicalLink()
        {} 

        double NegativeBinomialCanonicalLink::evaluate(const double& mu) const
        {
            double res;
            if(boost::math::isfinite(mu) && mu > 0.)
            { res = log(mu / (1 + mu)); }
            else
            { res = std::numeric_limits< double >::quiet_NaN(); }
            return res;
        }

        double NegativeBinomialCanonicalLink::inverse(const double& eta) const
        {
            double res;
            if(boost::math::isfinite(eta) && eta < 0.)
            { res = exp(eta) / (1 - exp(eta)); }
            else
            { res = std::numeric_limits< double >::quiet_NaN(); }
            return res;
        }

        double NegativeBinomialCanonicalLink::inverse_derivative(const double& eta) const
        {
            double res;
            if(boost::math::isfinite(eta) && eta < 0.)
            { res = exp(eta) / pow(1 - exp(eta), 2); }
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

        double NegativeBinomialULink::evaluate(const double& mu) const
        {
            double res;
            if(boost::math::isfinite(mu) && mu > 0.)
            { res = _distribution->quantile(mu / (1. + 2 * mu)); }
            else
            { res = std::numeric_limits< double >::quiet_NaN(); }
            return res;
        } 

        double NegativeBinomialULink::inverse(const double& eta) const // return mu (and not pi)
        {
            double res;
            if(boost::math::isfinite(eta) && eta < 0.)
            { res = _distribution->cdf(eta) / (1 - 2*_distribution->cdf(eta)); }
            else
            { res = std::numeric_limits< double >::quiet_NaN(); }
            return res;
        } 
        
        double NegativeBinomialULink::inverse_derivative(const double& eta) const
        {
            double res;
            if(boost::math::isfinite(eta) && eta < 0.)
            { res = _distribution->pdf(eta) / pow(1 - 2*_distribution->cdf(eta), 2); }
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

        double NegativeBinomialVLink::evaluate(const double& mu) const
        { return _distribution->quantile(mu / (1. + mu)); }

        double NegativeBinomialVLink::inverse(const double& eta) const 
        { return _distribution->cdf(eta) / (1 - _distribution->cdf(eta)); } 
        
        double NegativeBinomialVLink::inverse_derivative(const double& eta) const
        { return _distribution->pdf(eta) / pow(1-_distribution->cdf(eta), 2); }  

        std::unique_ptr< NegativeBinomialLink > NegativeBinomialVLink::copy() const
        { return std::make_unique< NegativeBinomialVLink >(*this); }        


        Eigen::VectorXd VectorLink::in_open_corner(const Eigen::VectorXd& p) const
        {
            Eigen::VectorXd pi = p;
            Index J = pi.size() + 1;
            for(Index j=0; j<J-1; ++j)
            { pi[j] = std::max(_epsilon_0, std::min(pi[j], 1-_epsilon_1)); }
            double sum = pi.sum();
            if(sum > 1-_epsilon_1)
            {
                for(Index j=0; j<J-1; ++j)
                { pi[j] *= (1.-_epsilon_1)/sum;  }
            }
            return pi;
        }

        NominalCanonicalLink::NominalCanonicalLink()
        {}

        NominalCanonicalLink::~NominalCanonicalLink()
        {}

        Eigen::VectorXd NominalCanonicalLink::evaluate(const Eigen::VectorXd& pi) const
        { 
            Eigen::VectorXd eta = pi.array().log();
            return  eta - Eigen::VectorXd::Constant(pi.size(), log(1-pi.sum()));
        }

        Eigen::VectorXd NominalCanonicalLink::inverse(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi = eta.array().exp();
        	double norm = 1 + pi.sum();
        	//return pi/norm;
            return in_open_corner(pi/norm);
        }
        
        Eigen::MatrixXd NominalCanonicalLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi = inverse(eta);
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
 
        Eigen::VectorXd ReferenceLink::evaluate(const Eigen::VectorXd& pi) const
        {
            Eigen::VectorXd eta(pi.size());
            for(size_t j=0; j<pi.size(); ++j)
            { eta[j] = _distribution->quantile(pi[j]/(pi[j]+1-pi.sum())); }
            return eta;             
        }

        Eigen::VectorXd ReferenceLink::inverse(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi( eta.size() );
        	double norm = 1.;
        	for(size_t j=0; j<eta.size(); ++j)
        	{
        		pi[j] = _distribution->cdf( eta(j) ) / ( 1-_distribution->cdf( eta(j) ) );
        		norm += pi[j];
        	}
        	return in_open_corner(pi/norm); 
        }
        
        Eigen::MatrixXd ReferenceLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi = inverse(eta);
        	Eigen::MatrixXd D = Eigen::MatrixXd::Zero(pi.rows(),pi.rows());
        	for(size_t j=0; j<pi.rows(); ++j)
        	{ D(j,j) = _distribution->pdf( eta(j) ) / ( std::max(this->_epsilon_0, std::min(1-this->_epsilon_1, _distribution->cdf(eta(j)))) * std::max(this->_epsilon_0, std::min(1-this->_epsilon_1, 1-_distribution->cdf(eta(j)))) ); }
        	return D * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() );
        }                

        std::unique_ptr< NominalLink > ReferenceLink::copy() const
        { return std::make_unique< ReferenceLink >(*this); } 
            

        OrdinalCanonicalLink::OrdinalCanonicalLink()
        {}

        OrdinalCanonicalLink::~OrdinalCanonicalLink()
        {}  

        Eigen::VectorXd OrdinalCanonicalLink::evaluate(const Eigen::VectorXd& pi) const
        {
            Eigen::VectorXd eta(pi.size());
            Index J = pi.size()+1;
            for(size_t j=0; j<J-2; ++j)
            { eta[j] = log(pi[j]) - log(pi[j+1]); }
            eta[J-2] = log(pi[J-2]) - log(1-pi.sum());
            return eta;             
        }

        Eigen::VectorXd OrdinalCanonicalLink::inverse(const Eigen::VectorXd& eta) const
        {
            Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(eta.rows(), eta.rows());
            Eigen::VectorXd pi = (Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Upper>(Ones) * eta).array().exp(); // eta = (At)^-1 eta_prime
        	double norm = 1 + pi.sum();
        	return in_open_corner(pi/norm);  
        } 
        
        Eigen::MatrixXd OrdinalCanonicalLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi = inverse(eta);
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

        Eigen::VectorXd AdjacentLink::evaluate(const Eigen::VectorXd& pi) const
        {
            Eigen::VectorXd eta(pi.size());
            Index J = pi.size()+1;
            for(size_t j=0; j<J-2; ++j)
            { eta[j] = _distribution->quantile(pi[j]/(pi[j]+pi[j+1])); }
            eta[J-2] = _distribution->quantile(pi[J-2]/(pi[J-2]+1.-pi.sum()));
            return eta;             
        }

        Eigen::VectorXd AdjacentLink::inverse(const Eigen::VectorXd& eta) const
        {    
            Eigen::VectorXd pi( eta.size() );
            pi[eta.size()-1] = _distribution->cdf( eta(eta.size()-1) ) / ( 1-_distribution->cdf( eta(eta.size()-1) ) );
            double norm = 1 + pi[eta.size()-1];   
            for(size_t j=(eta.size()-1); j>0; --j)
            {
                pi[j-1] = pi[j] * _distribution->cdf( eta(j-1) ) / ( 1-_distribution->cdf( eta(j-1) ) );
                norm += pi[j-1];
            }                      
            return in_open_corner(pi/norm); // pi is ordered
        } 

        Eigen::MatrixXd AdjacentLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd pi = inverse(eta);
        	Eigen::MatrixXd D = Eigen::MatrixXd::Zero(pi.rows(),pi.rows());
            Eigen::MatrixXd Ones = Eigen::MatrixXd::Ones(pi.rows(),pi.rows());
        	for(size_t j=0; j<pi.rows(); ++j)
        	{ D(j,j) = _distribution->pdf( eta(j) ) /( std::max(this->_epsilon_0, std::min(1-this->_epsilon_1, _distribution->cdf(eta(j)))) * std::max(this->_epsilon_0, std::min(1-this->_epsilon_1, 1-_distribution->cdf(eta(j)))) ); }

        	return D * Eigen::TriangularView<Eigen::MatrixXd, Eigen::UpLoType::Lower>(Ones) * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose() );

            // Eigen::VectorXd mu = inverse(eta);
            // Eigen::MatrixXd diag_f = Eigen::MatrixXd::Zero(mu.rows(),mu.rows());
            // for(size_t j=0; j<mu.rows(); ++j)
            // { diag_f(j,j) = _distribution->pdf( eta(j) );}

            // Eigen::MatrixXd M = Eigen::MatrixXd::Zero(mu.size(), mu.size());
            // int i(0), j(0);
            // double cste(1);

            // for (i=0; i < mu.size()-1; i++)
            // {
            //     M(i,i) = mu[i+1]/((mu[i]+mu[i+1])*(mu[i]+mu[i+1]));
            //     M(i+1,i) = -mu[i]/((mu[i]+mu[i+1])*(mu[i]+mu[i+1]));
            //     cste -= mu[i];
            // }

            // for (j=0; j< mu.size()-1 ; j++)
            //     M(j,mu.size()-1) = mu[mu.size()-1]/(cste*cste);

            // M(mu.size()-1, mu.size()-1) = 1/cste;      

            // return diag_f * M.inverse();
        } 
        
        std::unique_ptr< OrdinalLink > AdjacentLink::copy() const
        { return std::make_unique< AdjacentLink >(*this); }
    			
            
        CumulativeLink::CumulativeLink() : FLink<OrdinalLink>()
        {}

        CumulativeLink::CumulativeLink(const CumulativeLink& link) : FLink<OrdinalLink>(link)
        {} 

        CumulativeLink::~CumulativeLink()
        {}  

        Eigen::VectorXd CumulativeLink::evaluate(const Eigen::VectorXd& pi) const
        {
            Eigen::VectorXd eta(pi.size());
            double cum_proba = 0.;
            for(size_t j=0; j<pi.size(); ++j)
            { 
                cum_proba += pi[j];
                eta[j] = _distribution->quantile(cum_proba); 
            }
            return eta;             
        }

        Eigen::VectorXd CumulativeLink::inverse(const Eigen::VectorXd& eta) const
        {
            Eigen::VectorXd ordered_pi( eta.size() );
            ordered_pi[0] = _distribution->cdf( eta(0) );
            for(size_t j=1; j<eta.size(); ++j)
            { ordered_pi[j] = _distribution->cdf( eta(j) ) - _distribution->cdf( eta(j-1) ); }
            return in_open_corner(ordered_pi); 
        } 
               
        Eigen::MatrixXd CumulativeLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
            Eigen::MatrixXd R = Eigen::MatrixXd::Identity(eta.rows(), eta.rows());
            R.block(0, 1, eta.rows()-1, eta.rows()-1) -= Eigen::MatrixXd::Identity(eta.rows() -1, eta.rows()-1);
        	Eigen::MatrixXd F = Eigen::MatrixXd::Zero(eta.rows(),eta.rows());
        	for(size_t j=0; j<eta.rows(); ++j)
        	{ F(j,j) = _distribution->pdf( eta(j) ); }        	
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

        Eigen::VectorXd SequentialLink::evaluate(const Eigen::VectorXd& pi) const
        {
            Eigen::VectorXd eta(pi.size());
            double cum_proba = 0.;
            for(size_t j=0; j<pi.size(); ++j)
            { 
                eta[j] = _distribution->quantile(pi[j]/std::max(this->_epsilon_0, 1-cum_proba)); 
                cum_proba += pi[j];
            }
            return eta;             
        }

        Eigen::VectorXd SequentialLink::inverse(const Eigen::VectorXd& eta) const
        {
        	Eigen::VectorXd ordered_pi( eta.size() );
    		double product = 1;
        	for(size_t j=0; j<eta.size(); ++j)
        	{ 
        		ordered_pi[j] = product * _distribution->cdf( eta(j) );
        		product *= ( 1 - _distribution->cdf( eta(j) ) );
        	}			
        	    	
        	return in_open_corner(ordered_pi); 
        }              

        Eigen::MatrixXd SequentialLink::inverse_derivative(const Eigen::VectorXd& eta) const
        {
            Eigen::MatrixXd M = Eigen::MatrixXd::Zero(eta.rows(),eta.rows());
            double product = 1.;
            for (size_t j=0; j < eta.rows(); ++j)
            {
                M(j,j) = _distribution->pdf(eta(j)) * product;
                for (size_t i=0; i<j; ++i)
                { M(i,j) = - _distribution->pdf(eta(i))  * std::max(this->_epsilon_0, std::min(_distribution->cdf(eta(j)), 1-this->_epsilon_1)) * product / std::max(this->_epsilon_0, std::min( 1-_distribution->cdf(eta(i)), 1-this->_epsilon_1)); }    
                product *= std::max(this->_epsilon_0, std::min( 1-_distribution->cdf(eta(j)), 1-this->_epsilon_1));
            }
            return M; 

            // Eigen::VectorXd mu = inverse(eta);
            // Eigen::MatrixXd M = Eigen::MatrixXd::Zero(mu.size(), mu.size());
            // Eigen::MatrixXd diag_f = Eigen::MatrixXd::Zero(mu.size(), mu.size());
            // int i(0), j(0);
            // double mu_ref(1), cste(0);

            // for (j=0; j < mu.size(); j++)
            // {
            //     mu_ref -= cste;
            //     M(j,j) = 1/mu_ref;
            //     for (i=0; i<j; i++)
            //     { M(i,j) = mu[j]/(mu_ref*mu_ref); }
            //     cste = mu[j];
            //     diag_f(j,j) = _distribution->pdf(eta(j));
            // }
            // return diag_f * M.inverse();
        }

        std::unique_ptr< OrdinalLink > SequentialLink::copy() const
        { return std::make_unique< SequentialLink >(*this); }                 

        /* MultinomialSplittingCanonicalLink::MultinomialSplittingCanonicalLink()
        {}

        MultinomialSplittingCanonicalLink::~MultinomialSplittingCanonicalLink()
        {}

        Eigen::VectorXd MultinomialSplittingCanonicalLink::inverse(const Eigen::VectorXd& values) const
        {
            Eigen::VectorXd pi = values.array().exp();
            double norm = 1 + pi.sum();
            return pi/norm; 
        }
        
        Eigen::MatrixXd MultinomialSplittingCanonicalLink::inverse_derivative(const Eigen::VectorXd& values) const
        {
            Eigen::VectorXd pi = inverse(values);
            return ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ); 
        }          
        
        std::unique_ptr< MultinomialSplittingLink > MultinomialSplittingCanonicalLink::copy() const
        { return std::make_unique< MultinomialSplittingCanonicalLink >(*this); }

        DirichletMultinomialSplittingCanonicalLink::DirichletMultinomialSplittingCanonicalLink()
        {}

        DirichletMultinomialSplittingCanonicalLink::~DirichletMultinomialSplittingCanonicalLink()
        {}

        Eigen::VectorXd DirichletMultinomialSplittingCanonicalLink::inverse(const Eigen::VectorXd& values) const
        { return values.array().exp(); }
        
        Eigen::MatrixXd DirichletMultinomialSplittingCanonicalLink::inverse_derivative(const Eigen::VectorXd& values) const
        { return inverse(values); }          
        
        std::unique_ptr< DirichletMultinomialSplittingLink > DirichletMultinomialSplittingCanonicalLink::copy() const
        { return std::make_unique< DirichletMultinomialSplittingCanonicalLink >(*this); } */
    }
}


