#ifndef STATISKIT_GLM_REGRESSION_HPP
#define STATISKIT_GLM_REGRESSION_HPP

namespace statiskit
{
    namespace glm
    {        
        template<class T, class L>
            GeneralizedLinearModel< T, L >::GeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link)
            {
                _link = static_cast< L* >( link.copy().release() );
                _predictor = predictor.copy().release();
            }

        template<class T, class L>
            GeneralizedLinearModel< T, L >::GeneralizedLinearModel(const GeneralizedLinearModel< T, L >& glm)
            {
                _link = glm._link->copy().release();
                _predictor = glm._predictor->copy().release();
                _family = static_cast< typename L::family_type* >(glm._family->copy().release());
            }

        template<class T, class L>
            GeneralizedLinearModel< T, L >::~GeneralizedLinearModel()
            {
                delete _link;
                delete _predictor;
                delete _family;
            }

        template<class T, class L>
            const UnivariateDistribution* GeneralizedLinearModel< T, L >::operator() (const MultivariateEvent& event)
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
            const typename L::predictor_type* GeneralizedLinearModel< T, L >::get_predictor() const
            { return _predictor; }

        template<class T, class L>
            const L* GeneralizedLinearModel< T, L >::get_link() const
            { return _link; }

        template<class T, class L>
            void GeneralizedLinearModel< T, L >::set_link(const L& link)
            {
                delete _link;
                _link = static_cast< L* >(link.copy().release());
            }
            
        template<class L>
            DiscreteGeneralizedLinearModel< L >::DiscreteGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >(predictor, link)
            {}

        template<class L>
            DiscreteGeneralizedLinearModel< L >::DiscreteGeneralizedLinearModel(const DiscreteGeneralizedLinearModel< L >& glm) : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >(glm)
            {}

        template<class L>
            DiscreteGeneralizedLinearModel< L >::~DiscreteGeneralizedLinearModel()
            {}

        template< class L >
            unsigned int DiscreteGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_family->get_nb_parameters() + this->_predictor->size() - 1; }
            
         template< class L >
            unsigned int ContinuousGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_family->get_nb_parameters() + this->_predictor->size() - 1; }

         template< class L >
            unsigned int CategoricalGeneralizedLinearModel< L >::get_nb_parameters() const
            { return this->_predictor->size(); }                                   
    }
}
#endif
