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
class AbstractTestScalarLink(object):
    _eta = 0. 
    _mu = 1. 
    _mu_prime = 1.

    def test_evaluate(self):
        """ Test scalar link evaluate """
        self.assertEqual(self._link.evaluate(self._mu), self._eta)

    def test_inverse(self):
        """Test scalar link inverse"""
        self.assertEqual(self._link.inverse(self._eta), self._mu)
        self.assertAlmostEqual(self._link.inverse(self._link.evaluate(self._mu)), self._mu)
        #self.assertEqual(self._link.inverse(self._eta), self._link.inverse(self._eta))  

    def test_inverse_derivative(self):
        """Test scalar link inverse derivative"""
        self.assertEqual(self._link.inverse_derivative(self._eta), self._mu_prime)
        #self.assertAlmostEqual(self._link.inverse_derivative(self._eta), self._link.inverse_derivative(self._eta))  

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestPoissonCanonicalLink(unittest.TestCase, AbstractTestScalarLink):

    @classmethod
    def setUpClass(cls):
        """Test PoissonLink construction"""
        cls._link = glm.PoissonLink()

    @classmethod
    def tearDownClass(cls):
        """Test PoissonLink deletion"""
        del cls._link 

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestPoissonVLink(unittest.TestCase, AbstractTestScalarLink):

    @classmethod
    def setUpClass(cls):
        """Test PoissonLink construction"""
        cls._link = glm.PoissonLink(link='V')

    @classmethod
    def tearDownClass(cls):
        """Test PoissonLink deletion"""
        del cls._link 

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinomialCanonicalLink(unittest.TestCase, AbstractTestScalarLink):
    _mu = 0.5
    _mu_prime = 0.25

    @classmethod
    def setUpClass(cls):
        """Test BinomialLink construction"""
        cls._link = glm.BinomialLink()                 

    @classmethod
    def tearDownClass(cls):
        """Test BinomialLink deletion"""
        del cls._link 

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinomialFLink(unittest.TestCase, AbstractTestScalarLink):
    _mu = 0.5
    _mu_prime = 0.25

    @classmethod
    def setUpClass(cls):
        """Test BinomialLink construction"""
        cls._link = glm.BinomialLink(link='F')                 

    @classmethod
    def tearDownClass(cls):
        """Test BinomialLink deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinaryCanonicalLink(unittest.TestCase, AbstractTestScalarLink):
    _mu = 0.5
    _mu_prime = 0.25

    @classmethod
    def setUpClass(cls):
        """Test BinaryLink construction"""
        cls._link = glm.BinaryLink()                 

    @classmethod
    def tearDownClass(cls):
        """Test BinaryLink deletion"""
        del cls._link 

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinaryFLink(unittest.TestCase, AbstractTestScalarLink):
    _mu = 0.5
    _mu_prime = 0.25

    @classmethod
    def setUpClass(cls):
        """Test BinaryLink construction"""
        cls._link = glm.BinaryLink(link='F')                 

    @classmethod
    def tearDownClass(cls):
        """Test BinaryLink deletion"""
        del cls._link


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class AbstractTestVectorLink(object):
    _places = 5
    _eta = linalg.Vector([1.,1.])
    _mu = linalg.Vector([math.exp(1)/(1+2*math.exp(1)), math.exp(1)/(1+2*math.exp(1))])
    _mu_prime = linalg.Matrix(_mu) - _mu * linalg.RowVector(_mu)

    def test_evaluate(self):
        """ Test vector link evaluate """
        self.assertEqual(self._link.evaluate(self._mu).round(self._places), self._eta.round(self._places))

    def test_inverse(self):
        """Test vector link inverse"""
        self.assertEqual(self._link.inverse(self._eta).round(self._places), self._mu.round(self._places))
        self.assertEqual(self._link.inverse(self._link.evaluate(self._mu)).round(self._places), self._mu.round(self._places))

    def test_inverse_derivative(self):
        """Test vector link inverse derivative"""
        self.assertEqual(self._link.inverse_derivative(self._eta).round(self._places), self._mu_prime.round(self._places))


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestNominalCanonicalLink(unittest.TestCase, AbstractTestVectorLink):

    @classmethod
    def setUpClass(cls):
        """Test Nominal Link construction"""
        cls._link = glm.NominalLink()

    @classmethod
    def tearDownClass(cls):
        """Test Nominal Link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestReferenceLink(unittest.TestCase, AbstractTestVectorLink):

    @classmethod
    def setUpClass(cls):
        """Test reference Link construction"""
        cls._link = glm.NominalLink(ratio='reference')      

    @classmethod
    def tearDownClass(cls):
        """Test reference Link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestReferenceFLink(unittest.TestCase, AbstractTestVectorLink):
    #_places = 4
    _dist = core.NormalDistribution()
    _eta = linalg.Vector([1.,1.])
    f0 = _dist.pdf(_eta[0])
    f1 = _dist.pdf(_eta[1])
    F0 = _dist.cdf(_eta[0])
    F1 = _dist.cdf(_eta[1])
    norm = 1/( 1 + F0/(1-F0) + F1/(1-F1) )
    _mu = linalg.Vector([norm*F0/(1-F0), norm*F1/(1-F1)])
    _mu_prime = linalg.Matrix([[f0/(F0*(1-F0)), 0], [0, f1/(F1*(1-F1))]]) * ( linalg.Matrix(_mu) - _mu * linalg.RowVector(_mu) )

    @classmethod
    def setUpClass(cls):
        """Test reference FLink construction"""
        cls._link = glm.NominalLink(ratio='reference', distribution=cls._dist)      

    @classmethod
    def tearDownClass(cls):
        """Test reference FLink deletion"""
        del cls._link


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestOrdinalCanonicalLink(unittest.TestCase, AbstractTestVectorLink):
    #_places = 5
    _eta = linalg.Vector([1.,1.])
    norm = 1 + math.exp(1) + math.exp(2)
    _mu = linalg.Vector([math.exp(2)/norm, math.exp(1)/norm])
    _mu_prime = linalg.Matrix([[math.exp(2)*(1+math.exp(1))/norm**2, -math.exp(3)/norm**2], [math.exp(2)/norm**2, math.exp(1)/norm**2]])
    #_mu_prime = linalg.Matrix([[1,0], [1,1]]) * ( linalg.Matrix(_mu) - _mu * linalg.RowVector(_mu) )

    @classmethod
    def setUpClass(cls):
        """Test ordinal canonical link construction"""
        cls._link = glm.OrdinalLink()

    @classmethod
    def tearDownClass(cls):
        """Test ordinal canonical link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestAdjacentLink(unittest.TestCase, AbstractTestVectorLink):
    #_places = 5
    _eta = linalg.Vector([1.,1.])
    norm = 1 + math.exp(1) + math.exp(2)
    _mu = linalg.Vector([math.exp(2)/norm, math.exp(1)/norm])
    _mu_prime = linalg.Matrix([[math.exp(2)*(1+math.exp(1))/norm**2, -math.exp(3)/norm**2], [math.exp(2)/norm**2, math.exp(1)/norm**2]])

    @classmethod
    def setUpClass(cls):
        """Test adjacent logistic link construction"""
        cls._link = glm.OrdinalLink(ratio='adjacent')      

    @classmethod
    def tearDownClass(cls):
        """Test adjacent logistic link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestAdjacentFLink(unittest.TestCase, AbstractTestVectorLink):
    _dist = core.LaplaceDistribution()
    _eta = linalg.Vector([1.,1.])
    f0 = _dist.pdf(_eta[0])
    f1 = _dist.pdf(_eta[1])
    F0 = _dist.cdf(_eta[0])
    F1 = _dist.cdf(_eta[1])
    norm = 1/( 1 + F0/(1-F0) * F1/(1-F1) + F1/(1-F1) )
    _mu = linalg.Vector([norm*F0/(1-F0)*F1/(1-F1), norm*F1/(1-F1)])
    _mu_prime = linalg.Matrix([[f0/(F0*(1-F0)), 0], [0, f1/(F1*(1-F1))]]) * linalg.Matrix([[1,0], [1,1]]) *( linalg.Matrix(_mu) - _mu * linalg.RowVector(_mu) )

    @classmethod
    def setUpClass(cls):
        """Test adjacent FLink construction"""
        cls._link = glm.OrdinalLink(ratio='adjacent', distribution=cls._dist)      

    @classmethod
    def tearDownClass(cls):
        """Test adjacent FLink deletion"""
        del cls._link

class TestCumulativeLink(unittest.TestCase, AbstractTestVectorLink):
    _eta = linalg.Vector([0.,1.]) # linear predictors must be strictly ordered for cumulative models !
    _mu = linalg.Vector([0.5, -0.5+ math.exp(1)/(1.+math.exp(1))])
    _mu_prime = linalg.Matrix([[0.25,-0.25], [0, math.exp(1)/pow(1+math.exp(1), 2)]]) 

    @classmethod
    def setUpClass(cls):
        """Test cumulative logistic link construction"""
        cls._link = glm.OrdinalLink(ratio='cumulative')      

    @classmethod
    def tearDownClass(cls):
        """Test cumulative logistic link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestCumulativeFLink(unittest.TestCase, AbstractTestVectorLink):
    _dist = core.CauchyDistribution()
    _eta = linalg.Vector([0.,1.]) # linear predictors must be strictly ordered for cumulative models !
    f0 = _dist.pdf(_eta[0])
    f1 = _dist.pdf(_eta[1])
    F0 = _dist.cdf(_eta[0])
    F1 = _dist.cdf(_eta[1])
    _mu = linalg.Vector([F0, F1-F0])
    _mu_prime = linalg.Matrix([[f0, -f0], [0, f1]]) 

    @classmethod
    def setUpClass(cls):
        """Test cumulative FLink construction"""
        cls._link = glm.OrdinalLink(ratio='cumulative', distribution=cls._dist)      

    @classmethod
    def tearDownClass(cls):
        """Test cumulative FLink deletion"""
        del cls._link


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestSequentialLink(unittest.TestCase, AbstractTestVectorLink):
    _eta = linalg.Vector([1.,1.])
    norm = 1 + math.exp(1)
    _mu = linalg.Vector([math.exp(1)/norm, math.exp(1)/pow(norm, 2)])
    _mu_prime = linalg.Matrix([[math.exp(1)/pow(norm, 2), -math.exp(2)/pow(norm, 3)], [0, math.exp(1)/pow(norm, 3)]]) 

    @classmethod
    def setUpClass(cls):
        """Test Sequential logistic link construction"""
        cls._link = glm.OrdinalLink(ratio='sequential')      

    @classmethod
    def tearDownClass(cls):
        """Test Sequential logistic link deletion"""
        del cls._link

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestSequentialFLink(unittest.TestCase, AbstractTestVectorLink):
    _dist = core.GumbelDistribution()
    _eta = linalg.Vector([0.,1.])
    f0 = _dist.pdf(_eta[0])
    f1 = _dist.pdf(_eta[1])
    F0 = _dist.cdf(_eta[0])
    F1 = _dist.cdf(_eta[1])
    _mu = linalg.Vector([F0, F1*(1-F0)])
    _mu_prime = linalg.Matrix([[f0, -f0*F1], [0, f1*(1-F0)]]) 

    @classmethod
    def setUpClass(cls):
        """Test Sequential FLink construction"""
        cls._link = glm.OrdinalLink(ratio='sequential', distribution=cls._dist)      

    @classmethod
    def tearDownClass(cls):
        """Test Sequential FLink deletion"""
        del cls._link