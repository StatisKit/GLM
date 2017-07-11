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
    }
}

#endif