import math

from statiskit import core
from statiskit import glm
from statiskit import linalg

from statiskit.data import glm as data

import unittest
from nose.plugins.attrib import attr

from test_nominal import TestCanonicalNominalRegressionEstimation

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class AbstractTestOrdinalLink(object):
    _eta = linalg.Vector([1.,1.])
    _norm = 1 + math.exp(1) + math.exp(2)
    _mu = linalg.Vector([math.exp(2)/_norm, math.exp(1)/_norm])
    _mu_prime = linalg.Matrix([[math.exp(2)*(1+math.exp(1))/_norm**2, -math.exp(3)/_norm**2], [math.exp(2)/_norm**2, math.exp(1)/_norm**2]])

    # @classmethod
    # def setUpClass(cls):
    #     """Test ordinal link construction"""
    #     cls._canonical_link = glm.OrdinalLink()

    def test_link_inverse(self):
        """Test Ordinal Link inverse"""
        #v = self._logistic_link.inverse(self._eta)
        v = self._link.inverse(self._eta)
        self.assertAlmostEqual(v[0], self._mu[0])
        self.assertAlmostEqual(v[1], self._mu[1])

    def test_link_inverse_derivative(self):
        """Test Ordinal Link inverse derivative"""
        #m = self._logistic_link.inverse_derivative(self._eta)
        m = self._link.inverse_derivative(self._eta)
        self.assertAlmostEqual(m[0,0], self._mu_prime[0,0])
        self.assertAlmostEqual(m[0,1], self._mu_prime[0,1])
        self.assertAlmostEqual(m[1,0], self._mu_prime[1,0])
        self.assertAlmostEqual(m[1,1], self._mu_prime[1,1])

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=0)
# class TestAdjacentLink(unittest.TestCase, AbstractTestOrdinalLink):
#     @classmethod
#     def setUpClass(cls):
#         """Test adjacent link construction"""
#         cls._canonical_link = glm.OrdinalLink()
#         cls._logistic_link = glm.OrdinalLink(ratio='adjacent')  
#         cls._canonical_nominal_link = glm.NominalLink()

#     def test_F_distribution(self):
#         """Test adjacent link  distribution property"""
#         link = glm.OrdinalLink(ratio='adjacent', distribution=core.NormalDistribution())
#         self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

#     def test_canonical_link_inverse(self):
#         """Test adjacent canonical link inverse"""
#         v1 = self._canonical_link.inverse(self._eta)        
#         v2 = self._logistic_link.inverse(self._eta)
#         eta_nominal = linalg.Vector([self._eta[0]+self._eta[1],self._eta[1]])
#         v3 = self._canonical_nominal_link.inverse(eta_nominal)
#         self.assertAlmostEqual(v1[0], v2[0])  
#         self.assertAlmostEqual(v1[1], v2[1])
#         self.assertAlmostEqual(v1[0], v3[0])  
#         self.assertAlmostEqual(v1[1], v3[1])

#     def test_canonical_link_inverse_derivative(self):
#         """Test adjacent canonical link inverse derivative"""
#         m1 = self._canonical_link.inverse_derivative(self._eta)
#         m2 = self._logistic_link.inverse_derivative(self._eta)
#         #m3 = self._canonical_nominal_link.inverse_derivative(self._eta_nominal)
#         self.assertAlmostEqual(m1[0,0], m2[0,0])
#         self.assertAlmostEqual(m1[0,1], m2[0,1])  
#         self.assertAlmostEqual(m1[1,0], m2[1,0])
#         self.assertAlmostEqual(m1[1,1], m2[1,1])

#     @classmethod
#     def tearDownClass(cls):
#         """Test adjacent link deletion"""
#         del cls._canonical_link 
#         del cls._logistic_link
#         del cls._canonical_nominal_link

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=0)
# class TestCumulativeLink(unittest.TestCase, AbstractTestOrdinalLink):
#     _eta = linalg.Vector([0.,1.]) # must be ordered (eta0 < eta1)
#     _norm = 1 + math.exp(1) 
#     _mu = linalg.Vector([0.5, math.exp(1)/_norm-0.5])
#     _mu_prime = linalg.Matrix([[ 0.25, -0.25], [0., math.exp(1)/_norm**2]])

#     @classmethod
#     def setUpClass(cls):
#         """Test Cumulative link construction"""
#         cls._logistic_link = glm.OrdinalLink(ratio='cumulative')

#     def test_F_distribution(self):
#         """Test Cumulative link  distribution property"""
#         link = glm.OrdinalLink(ratio='cumulative', distribution=core.NormalDistribution())
#         self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

#     @classmethod
#     def tearDownClass(cls):
#         """Test Cumulative link deletion"""
#         del cls._logistic_link

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=0)
# class TestSequentialLink(unittest.TestCase, AbstractTestOrdinalLink):
#     # _eta = linalg.Vector([1.,1.]) 
#     # _norm = 1 + math.exp(1) 
#     # _mu = linalg.Vector([math.exp(1)/_norm, math.exp(1)/_norm**2])
#     # _mu_prime = linalg.Matrix([[math.exp(1)/_norm**2, -math.exp(1)**2/_norm**3], [0., math.exp(1)/_norm**3]])
#     _eta = linalg.Vector([0.,1.]) 
#     _norm = 1 + math.exp(1)
#     _mu = linalg.Vector([0.5, 0.5*math.exp(1)/_norm])
#     _mu_prime = linalg.Matrix([[0.25, -0.25*math.exp(1)/_norm], [0., 0.5*math.exp(1)/_norm**2]])

#     @classmethod
#     def setUpClass(cls):
#         """Test Sequential link construction"""
#         cls._logistic_link = glm.OrdinalLink(ratio='sequential')  

#     def test_F_distribution(self):
#         """Test Sequential link  distribution property"""
#         link = glm.OrdinalLink(ratio='sequential', distribution=core.NormalDistribution())
#         self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

#     @classmethod
#     def tearDownClass(cls):
#         """Test Sequential link deletion"""
#         del cls._logistic_link


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestCanonicalOrdinalRegressionEstimation(TestCanonicalNominalRegressionEstimation):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('cars')          
        oss = cls._data.AirConditioning.sample_space.as_ordinal()
        oss.ordered = ['little_important', 'important', 'very_important']
        cls._data.AirConditioning.sample_space = oss
        cls._data.Sex.sample_space.reference = 'women'
        cls._data.Age.sample_space.reference = '18_23'

    def test_Fisher(self):
        """Test Fisher scoring estimation for canonical ordinal regression with complete design"""
        mle = glm.ordinal_estimation(data=self._data, response = 0, explanatories = {1,2})
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        self.assertAlmostEqual(mle.loglikelihood, self._loglikelihood, places=2)


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestCumulativeRegressionEstimation(TestCanonicalOrdinalRegressionEstimation):
    _alpha = linalg.Vector([0.044, 1.655])
    _delta = linalg.Vector([0.576, -1.147, -2.232]) # (Dosbson, 2008) page 161
    _loglikelihood = -290.648

    def test_Fisher(self):
        """Test Fisher scoring estimation for cumulative regression with proportional design"""
        #import ipdb
        #ipdb.set_trace()
        # beta_init = linalg.Vector([-0.66, 0.66, 0., 0., 0.])
        # mle = glm.ordinal_estimation(ratio='cumulative', Z='proportional', data=self._data, response = 0, explanatories = {1,2}, beta_init=beta_init)
        mle = glm.ordinal_estimation(ratio='cumulative', Z='proportional', data=self._data, response = 0, explanatories = {1,2})
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        self.assertAlmostEqual(mle.loglikelihood, self._loglikelihood, places=3)
        for i in range(len(self._alpha)):
            self.assertAlmostEqual(alpha[i], self._alpha[i], places=3)
        for i in range(len(self._delta)):
            self.assertAlmostEqual(delta[i], self._delta[i], places=3)


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestSequentialRegressionEstimation(TestCanonicalOrdinalRegressionEstimation):
    _alpha = linalg.Vector([11.127, 10.915])
    _delta = linalg.Vector([-0.377, 0.49, -0.128, -0.424, -0.062]) # (Tutz, 2012) page 255 - results are truncated at 10^{-3} -

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('retinopathy')          

    def test_Fisher(self):
        """Test Fisher scoring estimation for ordinal regression with proportional design"""
        mle = glm.ordinal_estimation(ratio='sequential', Z='constrained', data=self._data, response = 0, explanatories = {1,2,3,4}, partial_proportional={1,2,3})
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        for i in range(len(self._alpha)):
            x = int(alpha[i]*1000)/float(1000)
            self.assertEqual(x, self._alpha[i])
        for i in range(len(self._delta)):
            x = int(delta[i]*1000)/float(1000)
            self.assertEqual(x, self._delta[i]) 