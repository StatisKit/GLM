#ifndef AUTOWIG__GLM
#define AUTOWIG__GLM

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/glm/link.h>
#include <statiskit/glm/base.h>
#include <statiskit/glm/predictor.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

/*namespace autowig
{
    class Wrap_102f55caaf1b5a859b5e0a3b0de74253 : public ::statiskit::ScalarLink, public boost::python::wrapper< struct ::statiskit::ScalarLink >
    {
        public:
            
            virtual double  inverse_derivative(double const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
            virtual double  inverse(double const & param_0) const
            { return this->get_override("inverse")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_38c14bdcf2585318bf8d4b6f049ff4eb : public ::statiskit::ScalarPredictor, public boost::python::wrapper< class ::statiskit::ScalarPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > (result);
            }
            virtual void  set_beta(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("set_beta")(param_0); }
            virtual ::std::size_t  size() const
            { return this->get_override("size")(); }
            virtual double  operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_545687efcf9f526d878857acd5ecb84d : public ::statiskit::VectorPredictor, public boost::python::wrapper< class ::statiskit::VectorPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > (result);
            }
            virtual void  set_beta(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("set_beta")(param_0); }
            virtual ::std::size_t  size() const
            { return this->get_override("size")(); }
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_886633d13cd15b79a7a65445135a5ac8 : public ::statiskit::VectorLink, public boost::python::wrapper< struct ::statiskit::VectorLink >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }

        protected:
            

        private:
            

    };
}*/
#endif