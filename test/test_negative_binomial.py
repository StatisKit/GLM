# from statiskit import (linalg,
#                        core,
#                        glm)
# from statiskit.data import glm as data

# import unittest
# from nose.plugins.attrib import attr

# import math

# from test_link import AbstractTestScalarLink
# from test_regression import AbstractTestDiscreteRegression

# # @attr(linux=True,
# #       osx=True,
# #       win=True,
# #       level=0)
# # class TestNegativeBinomialULink(unittest.TestCase, AbstractTestScalarLink):
# #     _eta = 1.
# #     _mu = math.exp(1)/(1-math.exp(1))
# #     _mu_prime = math.exp(1)/(1-math.exp(1))**2

# #     @classmethod
# #     def setUpClass(cls):
# #         """Test NegativeBinomialLink construction"""
# #         cls._link = glm.NegativeBinomialLink(link='U')

# #     def test_F_distribution(self):
# #         """Test Negative Binomial distribution property"""
# #         link = glm.NegativeBinomialLink(link='U', distribution=core.NormalDistribution())
# #         self.assertEqual(str(link.distribution), "N(0.0, 1.0)")         

# #     @classmethod
# #     def tearDownClass(cls):
# #         """Test NegativeBinomialLink deletion"""
# #         del cls._link 

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=0)
# class TestNegativeBinomialRegression(unittest.TestCase, AbstractTestDiscreteRegression):
#     _alpha = 1.
#     _delta = linalg.Vector([0.5, -2.])
#     _eta = -1.7
#     _nb_param = 4  
#     _link = glm.NegativeBinomialLink()
#     _V_link = glm.NegativeBinomialLink(link='V')
#     _kappa = 5.5
#     _mu = _kappa * math.exp(_eta)/(1-math.exp(_eta))
#     _mu2 = _kappa * math.exp(_eta)

#     @classmethod
#     def setUpClass(cls):
#         """Test Negative Binomial regression construction"""
#         cls.predictor_init()
#         cls._canonical_model = glm.NegativeBinomialRegression(cls._kappa, cls._pred, cls._link)
#         cls._V_model = glm.NegativeBinomialRegression(cls._kappa, cls._pred, cls._V_link)
#         cls._data = data.load('quine')

#     def test_Fisher_estimation(self):
#         """Test negative binomial regression Fisher estimation"""
#         data = self._data.extract(explanatories=range(len(self._data.components) - 1),
#                                        response=-1)
#         fe = glm.negative_binomial_estimation(algo='Fisher',
#                                               data=data,
#                                               kappa=1.274892646)
#         self.assertAlmostEqual(2 * fe.estimated.loglikelihood(data), -1093.15, places=2)
#         # self.assertAlmostEqual(2 * fe.estimated.loglikelihood(data), -1093.61, places=2)

#     def test_X2_estimation(self):
#         """Test negative binomial regression X2 estimation"""
#         data = self._data.extract(explanatories=range(len(self._data.components) - 1),
#                                        response=-1)
#         fe = glm.negative_binomial_estimation(algo='X2',
#                                               data=data)
#         self.assertAlmostEqual(2 * fe.estimated.loglikelihood(data), -1093.41, places=2)

#     # def test_conditional_V(self):
#     #     """Test negative binomial regression (V link) conditional operator"""
#     #     response_distribution = self._V_model(*self._x)
#     #     self.assertAlmostEqual(response_distribution.mean, self._mu2, places = self._places)    

#     @classmethod
#     def tearDownClass(cls):
#         """Test Negative Binomial regression deletion"""
#         del cls._canonical_model      