#ifndef AUTOWIG
#ifndef STATISKIT_GLM_LINK_HPP
#define STATISKIT_GLM_LINK_HPP

namespace statiskit
{
    namespace glm
    {
        template<class T>
        FLink<T>::FLink()
        { _distribution = new LogisticDistribution(); }

        template<class T>
        FLink<T>::FLink(const FLink& flink)
        { _distribution = static_cast< ContinuousUnivariateDistribution* >(flink._distribution->copy().release()); }

        template<class T>       
        FLink<T>::~FLink()
        { delete _distribution; }

        template<class T>
        ContinuousUnivariateDistribution* FLink<T>::get_distribution()
        { return _distribution; }

        template<class T>
        void FLink<T>::set_distribution(const ContinuousUnivariateDistribution& distribution)
        { _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }

        template<class T>
        BinCanonicalLink< T >::BinCanonicalLink()
        {}

        template<class T>
        BinCanonicalLink< T >::~BinCanonicalLink()
        {}  

        template<class T>
        double BinCanonicalLink< T >::evaluate(const double& mu) const
        { return log(mu / (1. - mu)); }

        template<class T>
        double BinCanonicalLink< T >::inverse(const double& value) const
        { return 1. / (1 + exp(-value)); }
        
        template<class T>
        double BinCanonicalLink< T >::inverse_derivative(const double& value) const
        { return exp(-value) / pow(1 + exp(-value), 2); }        

        template<class T>
        std::unique_ptr< T > BinCanonicalLink< T >::copy() const
        { return std::make_unique< BinCanonicalLink< T > >(*this); }
              
        template<class T>         
        BinFLink< T >::BinFLink() : FLink< T >()
        {}

        template<class T>
        BinFLink< T >::BinFLink(const BinFLink& bflink) : FLink< T >(bflink)
        {}

        template<class T>
        BinFLink< T >::~BinFLink()
        {}  

        template<class T>
        double BinFLink< T >::evaluate(const double& mu) const
        { return (*this)._distribution->quantile(mu); }

        template<class T>
        double BinFLink< T >::inverse(const double& value) const
        { return (*this)._distribution->cdf(value); }

        template<class T>        
        double BinFLink< T >::inverse_derivative(const double& value) const
        { return (*this)._distribution->pdf(value); }        

        template<class T>
        std::unique_ptr< T > BinFLink< T >::copy() const
        { return std::make_unique< BinFLink< T > >(*this); }
    }
}

#endif
#endif