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
                    _link = nullptr;
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
            
        template<class L>
            SplittingRegression< L >::SplittingRegression(const typename L::predictor_type& predictor, const L& link) : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >(predictor, link)
            {}

        template<class L>
            SplittingRegression< L >::SplittingRegression(const SplittingRegression< L >& glm) : GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >(glm)
            {}

        template<class L>
            SplittingRegression< L >::~SplittingRegression()
            {}

        template< class L >
            unsigned int SplittingRegression< L >::get_nb_parameters() const
            { return this->_family->get_nb_parameters() + this->_predictor->size() - 1; }
    }
}
#endif
