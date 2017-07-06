from statiskit import core
from statiskit import glm
from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

import math


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class AbstractTestLink(object):
    _eta = 0. 
    _mu = 1. 
    _mu_prime = 1.


    # def test_evaluate(self):
    #     self.assertEqual(self._link.evaluate(self._mu), self._eta)

    # def test_inverse(self):
    #     self.assertEqual(self._link.inverse(self._eta), self._mu)
    #     self.assertEqual(self._link.inverse(self._link.evaluate(self._mu)), self._mu)

    # def test_link_inverse_derivative(self):
    #     self.assertEqual(self._link.inverse(self._link.evaluate(self._mu)), self._mu)

    # def test_link_inverse(self):
    #     """Test Link inverse"""
    #     self.assertEqual(self._canonical_link.inverse(self._eta), self._mu)
    #     self.assertEqual(self._canonical_link.inverse(self._eta), self._logistic_link.inverse(self._eta))  

    # def test_link_inverse_derivative(self):
    #     """Test Link inverse derivative"""
    #     self.assertEqual(self._canonical_link.inverse_derivative(self._eta), self._mu_prime)
    #     self.assertAlmostEqual(self._canonical_link.inverse_derivative(self._eta), self._logistic_link.inverse_derivative(self._eta))    


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestNominalLink(unittest.TestCase):
    _eta = linalg.Vector([1.,1.])
    _mu = linalg.Vector([math.exp(1)/(1+2*math.exp(1)), math.exp(1)/(1+2*math.exp(1))])
    _mu_prime = linalg.Matrix([[math.exp(1)*(1+math.exp(1))/(1+2*math.exp(1))**2, -math.exp(1)**2/(1+2*math.exp(1))**2],[-math.exp(1)**2/(1+2*math.exp(1))**2, math.exp(1)*(1+math.exp(1))/(1+2*math.exp(1))**2]])

    @classmethod
    def setUpClass(cls):
        """Test Nominal Link construction"""
        cls._canonical_link = glm.NominalLink()
        cls._logistic_link = glm.NominalLink(ratio='reference')      

    def test_F_distribution(self):
        """Test Nominal distribution property"""
        link = glm.NominalLink(ratio='reference', distribution=core.NormalDistribution())
        self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

    def test_link_inverse(self):
        """Test Nominal Link inverse"""
        self.assertEqual(self._canonical_link.inverse(self._eta), self._mu)
        self.assertEqual(self._canonical_link.inverse(self._eta), self._logistic_link.inverse(self._eta))  

    def test_link_inverse_derivative(self):
        """Test Nominal Link inverse derivative"""
        self.assertEqual(self._canonical_link.inverse_derivative(self._eta), self._mu_prime)
        self.assertAlmostEqual(self._canonical_link.inverse_derivative(self._eta)[0,0], self._logistic_link.inverse_derivative(self._eta)[0,0])
        self.assertAlmostEqual(self._canonical_link.inverse_derivative(self._eta)[0,1], self._logistic_link.inverse_derivative(self._eta)[0,1])          

    @classmethod
    def tearDownClass(cls):
        """Test Nominal Link deletion"""
        del cls._canonical_link 
        del cls._logistic_link

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=0)
# class OrdinalLink(unittest.TestCase):
#     _eta = linalg.Vector([1.,1.])
#     _eta_nominal = linalg.Vector([_eta[0]+_eta[1],_eta[1]])
#     _norm = 1 + math.exp(1) + math.exp(2)
#     _mu = linalg.Vector([math.exp(2)/_norm, math.exp(1)/_norm])
#     _mu_prime = linalg.Matrix([[math.exp(2)*(1+math.exp(1))/_norm**2, -math.exp(3)/_norm**2], [math.exp(2)/_norm**2, math.exp(1)/_norm**2]])

#     @classmethod
#     def setUpClass(cls):
#         """Test Ordinal Link construction"""
#         cls._canonical_link = glm.OrdinalLink()
#         cls._logistic_link = glm.OrdinalLink(ratio='adjacent')  
#         cls._canonical_nominal_link = glm.NominalLink()

#     def test_F_distribution(self):
#         """Test Ordinal distribution property"""
#         link = glm.OrdinalLink(ratio='adjacent', distribution=core.NormalDistribution())
#         self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

#     def test_link_inverse(self):
#         """Test Ordinal Link inverse"""
#         v1 = self._canonical_link.inverse(self._eta)
#         v2 = self._logistic_link.inverse(self._eta)
#         v3 = self._canonical_nominal_link.inverse(self._eta_nominal)
#         self.assertAlmostEqual(v1[0], self._mu[0])
#         self.assertAlmostEqual(v1[1], self._mu[1])
#         self.assertAlmostEqual(v1[0], v2[0])  
#         self.assertAlmostEqual(v1[1], v2[1])
#         self.assertAlmostEqual(v1[0], v3[0])  
#         self.assertAlmostEqual(v1[1], v3[1])

#     def test_link_inverse_derivative(self):
#         """Test Ordinal Link inverse derivative"""
#         m1 = self._canonical_link.inverse_derivative(self._eta)
#         m2 = self._logistic_link.inverse_derivative(self._eta)
#         m3 = self._canonical_nominal_link.inverse_derivative(self._eta_nominal)
#         self.assertAlmostEqual(m1[0,0], self._mu_prime[0,0])
#         self.assertAlmostEqual(m1[0,1], self._mu_prime[0,1])
#         self.assertAlmostEqual(m1[1,0], self._mu_prime[1,0])
#         self.assertAlmostEqual(m1[1,1], self._mu_prime[1,1])
#         self.assertAlmostEqual(m1[0,0], m2[0,0])
#         self.assertAlmostEqual(m1[0,1], m2[0,1])  
#         self.assertAlmostEqual(m1[1,0], m2[1,0])
#         self.assertAlmostEqual(m1[1,1], m2[1,1])
#         # self.assertAlmostEqual(m1[0,0], m3[0,0]+m3[0,1])
#         # self.assertAlmostEqual(m1[0,1], m3[0,1])  
#         # self.assertAlmostEqual(m1[1,0], m3[1,0]+m3[1,1])
#         # self.assertAlmostEqual(m1[1,1], m3[1,1])                      

#     @classmethod
#     def tearDownClass(cls):
#         """Test Ordinal Link deletion"""
#         del cls._canonical_link 
#         del cls._logistic_link

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
        v = self._logistic_link.inverse(self._eta)
        self.assertAlmostEqual(v[0], self._mu[0])
        self.assertAlmostEqual(v[1], self._mu[1])

    def test_link_inverse_derivative(self):
        """Test Ordinal Link inverse derivative"""
        #m = self._logistic_link.inverse_derivative(self._eta)
        m = self._logistic_link.inverse_derivative(self._eta)
        self.assertAlmostEqual(m[0,0], self._mu_prime[0,0])
        self.assertAlmostEqual(m[0,1], self._mu_prime[0,1])
        self.assertAlmostEqual(m[1,0], self._mu_prime[1,0])
        self.assertAlmostEqual(m[1,1], self._mu_prime[1,1])

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestAdjacentLink(unittest.TestCase, AbstractTestOrdinalLink):
    @classmethod
    def setUpClass(cls):
        """Test adjacent link construction"""
        cls._canonical_link = glm.OrdinalLink()
        cls._logistic_link = glm.OrdinalLink(ratio='adjacent')  
        cls._canonical_nominal_link = glm.NominalLink()

    def test_F_distribution(self):
        """Test adjacent link  distribution property"""
        link = glm.OrdinalLink(ratio='adjacent', distribution=core.NormalDistribution())
        self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

    def test_canonical_link_inverse(self):
        """Test adjacent canonical link inverse"""
        v1 = self._canonical_link.inverse(self._eta)        
        v2 = self._logistic_link.inverse(self._eta)
        eta_nominal = linalg.Vector([self._eta[0]+self._eta[1],self._eta[1]])
        v3 = self._canonical_nominal_link.inverse(eta_nominal)
        self.assertAlmostEqual(v1[0], v2[0])  
        self.assertAlmostEqual(v1[1], v2[1])
        self.assertAlmostEqual(v1[0], v3[0])  
        self.assertAlmostEqual(v1[1], v3[1])

    def test_canonical_link_inverse_derivative(self):
        """Test adjacent canonical link inverse derivative"""
        m1 = self._canonical_link.inverse_derivative(self._eta)
        m2 = self._logistic_link.inverse_derivative(self._eta)
        #m3 = self._canonical_nominal_link.inverse_derivative(self._eta_nominal)
        self.assertAlmostEqual(m1[0,0], m2[0,0])
        self.assertAlmostEqual(m1[0,1], m2[0,1])  
        self.assertAlmostEqual(m1[1,0], m2[1,0])
        self.assertAlmostEqual(m1[1,1], m2[1,1])

    @classmethod
    def tearDownClass(cls):
        """Test adjacent link deletion"""
        del cls._canonical_link 
        del cls._logistic_link
        del cls._canonical_nominal_link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestCumulativeLink(unittest.TestCase, AbstractTestOrdinalLink):
    _eta = linalg.Vector([0.,1.]) # must be ordered (eta0 < eta1)
    _norm = 1 + math.exp(1) 
    _mu = linalg.Vector([0.5, math.exp(1)/_norm-0.5])
    _mu_prime = linalg.Matrix([[ 0.25, -0.25], [0., math.exp(1)/_norm**2]])

    @classmethod
    def setUpClass(cls):
        """Test Cumulative link construction"""
        cls._logistic_link = glm.OrdinalLink(ratio='cumulative')

    def test_F_distribution(self):
        """Test Cumulative link  distribution property"""
        link = glm.OrdinalLink(ratio='cumulative', distribution=core.NormalDistribution())
        self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

    @classmethod
    def tearDownClass(cls):
        """Test Cumulative link deletion"""
        del cls._logistic_link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestSequentialLink(unittest.TestCase, AbstractTestOrdinalLink):
    # _eta = linalg.Vector([1.,1.]) 
    # _norm = 1 + math.exp(1) 
    # _mu = linalg.Vector([math.exp(1)/_norm, math.exp(1)/_norm**2])
    # _mu_prime = linalg.Matrix([[math.exp(1)/_norm**2, -math.exp(1)**2/_norm**3], [0., math.exp(1)/_norm**3]])
    _eta = linalg.Vector([0.,1.]) 
    _norm = 1 + math.exp(1)
    _mu = linalg.Vector([0.5, 0.5*math.exp(1)/_norm])
    _mu_prime = linalg.Matrix([[0.25, -0.25*math.exp(1)/_norm], [0., 0.5*math.exp(1)/_norm**2]])

    @classmethod
    def setUpClass(cls):
        """Test Sequential link construction"""
        cls._logistic_link = glm.OrdinalLink(ratio='sequential')  

    def test_F_distribution(self):
        """Test Sequential link  distribution property"""
        link = glm.OrdinalLink(ratio='sequential', distribution=core.NormalDistribution())
        self.assertEqual(str(link.distribution), "N(0.0, 1.0)")

    @classmethod
    def tearDownClass(cls):
        """Test Sequential link deletion"""
        del cls._logistic_link