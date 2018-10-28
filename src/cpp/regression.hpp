#ifndef STATISKIT_GLM_REGRESSION_HPP
#define STATISKIT_GLM_REGRESSION_HPP

namespace statiskit
{
    namespace glm
    {        
        template<class T, class L>
            GeneralizedLinearModel< T, L >::GeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link)
            {
                _link = static_cast< L* >(link.copy().release());
                _predictor = predictor.copy().release();
            }

        template<class T, class L>
            GeneralizedLinearModel< T, L >::GeneralizedLinearModel(const GeneralizedLinearModel< T, L >& glm)
            {
                if(glm._link)
                { _link = glm._link->copy().release(); }
                if(glm._predictor)
                { _predictor = glm._predictor->copy().release(); }
                if(glm._family)
                { _family = static_cast< typename L::family_type* >(glm._family->copy().release()); }
            }

        template<class T, class L>
            GeneralizedLinearModel< T, L >::~GeneralizedLinearModel()
            {
                if(_link)
                {
                    delete _link;
                    _link = nullptr;
                }
                if(_predictor)
                {
                    delete _predictor;
                    _predictor = nullptr;
                }
                if(_family)
                {
                    delete _family;
                    _family = nullptr;
                }
            }

        template<class T, class L>
            const UnivariateDistribution* GeneralizedLinearModel< T, L >::operator() (const MultivariateEvent& event) const
            {
                update(_link->inverse((*_predictor)(event)));     
                return _family;
            }
                
        // template<class T, class L>
        //     std::unique_ptr< UnivariateSampleSpace > GeneralizedLinearModel< T, L >::get_response_space() const
        //     { return _family->get_sample_space(); }
                
        template<class T, class L>
            const MultivariateSampleSpace* GeneralizedLinearModel< T, L >::get_explanatory_space() const
            { return _predictor->get_explanatory_space(); }

//        template<class T, class L>
//            unsigned int GeneralizedLinearModel< T, L >::get_nb_parameters() const
//            { return _family->get_nb_parameters() + _predictor->size(); }

        template<class T, class L>
            typename L::predictor_type* GeneralizedLinearModel< T, L >::get_predictor() const
            { return _predictor; }

        template<class T, class L>
            void GeneralizedLinearModel< T, L >::set_predictor(const typename L::predictor_type& predictor)
            {
                // if(_predictor->get_explanatory_space() == predictor->get_explanatory_space())
                // {
                    delete _predictor;
                    _predictor = predictor.copy().release(); 
                // }
            }


        template<class T, class L>
            L* GeneralizedLinearModel< T, L >::get_link() const
            { return _link; }

        template<class T, class L>
            void GeneralizedLinearModel< T, L >::set_link(const L& link)
            {
                delete _link;
                _link = static_cast< L* >(link.copy().release());
            }
            
        template<class L>
            UnivariateDiscreteGeneralizedLinearModel< L >::UnivariateDiscreteGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >(predictor, link)
            {}

        template<class L>
            UnivariateDiscreteGeneralizedLinearModel< L >::UnivariateDiscreteGeneralizedLinearModel(const UnivariateDiscreteGeneralizedLinearModel< L >& glm) : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >(glm)
            {}

        template<class L>
            UnivariateDiscreteGeneralizedLinearModel< L >::~UnivariateDiscreteGeneralizedLinearModel()
            {}

        template< class L >
            unsigned int UnivariateDiscreteGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_family->get_nb_parameters() + this->_predictor->size() - 1; }
            
        template<class L>
            UnivariateContinuousGeneralizedLinearModel< L >::UnivariateContinuousGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< ContinuousUnivariateConditionalDistribution, L >(predictor, link)
            {}

        template<class L>
            UnivariateContinuousGeneralizedLinearModel< L >::UnivariateContinuousGeneralizedLinearModel(const UnivariateContinuousGeneralizedLinearModel< L >& glm) : GeneralizedLinearModel< ContinuousUnivariateConditionalDistribution, L >(glm)
            {}

        template<class L>
            UnivariateContinuousGeneralizedLinearModel< L >::~UnivariateContinuousGeneralizedLinearModel()
            {}

         template< class L >
            unsigned int UnivariateContinuousGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_family->get_nb_parameters() + this->_predictor->size() - 1; }
            
        template<class L>
            CategoricalGeneralizedLinearModel< L >::CategoricalGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, L >(predictor, link)
            {}

        template<class L>
            CategoricalGeneralizedLinearModel< L >::CategoricalGeneralizedLinearModel(const CategoricalGeneralizedLinearModel< L >& glm) : GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, L >(glm)
            {}

        template<class L>
            CategoricalGeneralizedLinearModel< L >::~CategoricalGeneralizedLinearModel()
            {}

        template< class L >
            unsigned int CategoricalGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_predictor->size(); }                                   
            
        template< class T, class L >
            MultivariateGeneralizedLinearModel< T, L >::MultivariateGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< T, L >(predictor, link)
            {}

        template< class T, class L >
            MultivariateGeneralizedLinearModel< T, L >::MultivariateGeneralizedLinearModel(const MultivariateGeneralizedLinearModel<T, L>& glm) : GeneralizedLinearModel< T, L >(glm)
            {}

        // template<class L>
        //     SplittingRegressionI< L >::SplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >(predictor, link)
        //     { _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release()); }

        // template<class L>
        //     SplittingRegressionI< L >::SplittingRegressionI(const SplittingRegressionI< L >& glm) : GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >(glm)
        //     { _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(glm._sum->copy().release()); }

        // template<class L>
        //     SplittingRegressionI< L >::~SplittingRegressionI()
        //     { delete _sum; }

        // template<class L>
        //     const MultivariateDistribution* SplittingRegressionI< L >::operator() (const MultivariateEvent& event) const
        //     {
        //         this->_family->set_sum(*(static_cast< const DiscreteUnivariateDistribution* >(_sum->operator() (event))));
        //         return GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >::operator() (event);
        //     }

        // template<class L>
        //     const DiscreteUnivariateConditionalDistribution* SplittingRegressionI< L >::get_sum() const
        //     { return _sum; }

        // template<class L>
        //     void SplittingRegressionI< L >::set_sum(const DiscreteUnivariateConditionalDistribution& sum)
        //     { _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release()); }

        // template<class L>
        //     Index SplittingRegressionI< L >::get_nb_components() const
        //     { return this->_family->get_nb_components(); }

        // template< class L >
        //     unsigned int SplittingRegressionI< L >::get_nb_parameters() const
        //     { return _sum->get_nb_parameters() + this->_predictor->size(); }

        // template<class L>
        //     SplittingRegressionII< L >::SplittingRegressionII(const DiscreteUnivariateDistribution& sum, const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >(predictor, link)
        //     { _sum = static_cast< DiscreteUnivariateDistribution* >(sum.copy().release()); }

        // template<class L>
        //     SplittingRegressionII< L >::SplittingRegressionII(const SplittingRegressionII< L >& glm) : GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >(glm)
        //     { _sum = static_cast< DiscreteUnivariateDistribution* >(glm._sum->copy().release()); }

        // template<class L>
        //     SplittingRegressionII< L >::~SplittingRegressionII()
        //     { delete _sum; }

        // template<class L>
        //     const DiscreteUnivariateDistribution* SplittingRegressionII< L >::get_sum() const
        //     { return _sum; }

        // template<class L>
        //     void SplittingRegressionII< L >::set_sum(const DiscreteUnivariateDistribution& sum)
        //     { _sum = static_cast< DiscreteUnivariateDistribution* >(sum.copy().release()); }

        // template<class L>
        //     Index SplittingRegressionII< L >::get_nb_components() const
        //     { return this->_family->get_nb_components(); }

        // template< class L >
        //     unsigned int SplittingRegressionII< L >::get_nb_parameters() const
        //     { return _sum->get_nb_parameters() + this->_predictor->size(); }

        // template<class F>
        //     SplittingRegressionIII< F >::SplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const F& family)
        //     {
        //         _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release());
        //         _family = static_cast< F* >(family.copy().release());

        //     }

        // template<class F>
        //     SplittingRegressionIII< F >::SplittingRegressionIII(const SplittingRegressionIII< F >& glm)
        //     {
        //         _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(glm._sum->copy().release());
        //         _family = static_cast< F* >(glm._family->copy().release());
        //     }

        // template<class F>
        //     SplittingRegressionIII< F >::~SplittingRegressionIII()
        //     {
        //         delete _sum;
        //         delete _family;
        //     }

        // template<class F>
        //     const MultivariateSampleSpace* SplittingRegressionIII< F >::get_explanatory_space() const
        //     { return _sum->get_explanatory_space(); }

        // template<class F>
        //     const MultivariateDistribution* SplittingRegressionIII< F >::operator() (const MultivariateEvent& event) const
        //     {
        //         _family->set_sum(*(static_cast< const DiscreteUnivariateDistribution* >(_sum->operator() (event))));
        //         return _family;
        //     }

        // template<class F>
        //     const DiscreteUnivariateConditionalDistribution* SplittingRegressionIII< F >::get_sum() const
        //     { return _sum; }

        // template<class F>
        //     void SplittingRegressionIII< F >::set_sum(const DiscreteUnivariateConditionalDistribution& sum)
        //     { _sum = static_cast< DiscreteUnivariateConditionalDistribution* >(sum.copy().release()); }

        // template<class F>
        //     Index SplittingRegressionIII< F >::get_nb_components() const
        //     { return _family->get_nb_components(); }
    }
}
#endif
