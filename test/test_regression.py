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
class AbstractTestDiscreteRegression(object):
    @classmethod
    def predictor_init(cls):
        sample_spaces = []
        sample_spaces.append(core.controls.ZZ)
        sample_spaces.append(core.controls.RR)
        vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
        cls._pred = glm.CompleteScalarPredictor(vector_sample_spaces)
        cls._pred.alpha = cls._alpha
        cls._pred.delta = cls._delta


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestPoissonRegression(unittest.TestCase, AbstractTestDiscreteRegression):
    _alpha = 1.
    _delta = linalg.Vector([0.5, 2.])
    _x = [1, 1.6]
    _nb_param = 3
    _eta = 4.7
    _canonical_link = glm.PoissonLink()
    _mu = math.exp(_eta)
    _places = 10

    @classmethod
    def setUpClass(cls):
        """Test Poisson regression construction"""
        cls.predictor_init()
        cls._canonical_model = glm.PoissonRegression(cls._pred, cls._canonical_link)

    def test_get_nb_parameters(self):
        """Test discrete regression get number of parameters"""
        self.assertEqual(self._canonical_model.nb_parameters, self._nb_param)

    def test_conditional(self):
        """Test discrete regression conditional operator"""
        response_distribution = self._canonical_model(*self._x)
        self.assertAlmostEqual(response_distribution.mean, self._mu, places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test Poisson regression deletion"""
        del cls._canonical_model

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinomialRegression(TestPoissonRegression):
    _eta = 4.7
    _nb_param = 4  
    _canonical_link = glm.BinomialLink()
    _kappa = 5
    _mu = _kappa * math.exp(_eta)/(1+math.exp(_eta))

    @classmethod
    def setUpClass(cls):
        """Test Binomial regression construction"""
        cls.predictor_init()
        cls._canonical_model = glm.BinomialRegression(cls._kappa, cls._pred, cls._canonical_link)

    @classmethod
    def tearDownClass(cls):
        """Test Binomial regression deletion"""
        del cls._canonical_model

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestNegativeBinomialRegression(TestPoissonRegression):
    _delta = linalg.Vector([0.5, -2.])
    _eta = -1.7
    _nb_param = 4  
    _canonical_link = glm.NegativeBinomialLink()
    _V_link = glm.NegativeBinomialLink(link='V')
    _kappa = 5.5
    _mu = _kappa * math.exp(_eta)/(1-math.exp(_eta))
    _mu2 = _kappa * math.exp(_eta)

    @classmethod
    def setUpClass(cls):
        """Test Negative Binomial regression construction"""
        cls.predictor_init()
        cls._canonical_model = glm.NegativeBinomialRegression(cls._kappa, cls._pred, cls._canonical_link)
        cls._V_model = glm.NegativeBinomialRegression(cls._kappa, cls._pred, cls._V_link)

    def test_conditional_V(self):
        """Test negative binomial regression (V link) conditional operator"""
        response_distribution = self._V_model(*self._x)
        self.assertAlmostEqual(response_distribution.mean, self._mu2, places = self._places)    

    @classmethod
    def tearDownClass(cls):
        """Test Negative Binomial regression deletion"""
        del cls._canonical_model        



@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class AbstractTestCategoricalRegression(object):
    @classmethod
    def predictor_init(cls):
        sample_spaces = []
        sample_spaces.append(core.controls.ZZ)
        sample_spaces.append(core.controls.RR)
        vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
        cls._pred = glm.CompleteVectorPredictor(vector_sample_spaces, 2)
        cls._pred.alpha = cls._alpha
        cls._pred.delta = cls._delta

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestReferenceRegression(unittest.TestCase, AbstractTestCategoricalRegression): 
    _alpha = linalg.Vector([1., 2.])
    _delta = linalg.Matrix([[-1.5, 2.], [-2., 2.5]])
    _x = [1, 1.6]
    _nb_param = 6
    _eta = linalg.Vector([2.7, 4.])
    _canonical_link = glm.NominalLink(ratio='reference')
    _norm = 1 + math.exp(_eta[0]) + math.exp(_eta[1])
    _mu = linalg.Vector([math.exp(_eta[0])/_norm, math.exp(_eta[1])/_norm, 1/_norm])
    _categories = {'B','C','A'}
    _places = 10

    @classmethod
    def setUpClass(cls):
        """Test reference regression construction"""
        cls.predictor_init()
        cls._model = glm.NominalRegression(cls._categories, cls._pred, cls._canonical_link)

    def test_get_nb_parameters(self):
        """Test categorical regression get number of parameters"""
        self.assertEqual(self._model.nb_parameters, self._nb_param)

    def test_conditional(self):
        """Test reference regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('A'), self._mu[0], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('B'), self._mu[1], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('C'), self._mu[2], places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test reference regression deletion"""
        del cls._model

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestAdjacentRegression(TestReferenceRegression): 
    _eta = linalg.Vector([2.7, 4.])
    _canonical_link = glm.OrdinalLink(ratio='adjacent')
    _norm = 1 + math.exp(_eta[0]+_eta[1]) + math.exp(_eta[1])
    _mu = linalg.Vector([math.exp(_eta[0]+_eta[1])/_norm, math.exp(_eta[1])/_norm, 1/_norm])
    _categories = ['B','C','A']

    @classmethod
    def setUpClass(cls):
        """Test adjacent regression construction"""
        cls.predictor_init()
        cls._model = glm.OrdinalRegression(cls._categories, cls._pred, cls._canonical_link)

    def test_conditional(self):
        """Test ordinal regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('B'), self._mu[0], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('C'), self._mu[1], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('A'), self._mu[2], places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test adjacent regression deletion"""
        del cls._model

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestCumulativeRegression(TestAdjacentRegression): 
    _eta = linalg.Vector([2.7, 4.])
    _canonical_link = glm.OrdinalLink(ratio='cumulative')
    _norm = [1+math.exp(_eta[0]), 1+math.exp(_eta[1])]
    _mu = linalg.Vector([math.exp(_eta[0])/_norm[0], math.exp(_eta[1])/_norm[1]-math.exp(_eta[0])/_norm[0], 1-math.exp(_eta[1])/_norm[1]])
    _categories = ['B','C','A']

    @classmethod
    def setUpClass(cls):
        """Test cumulative regression construction"""
        cls.predictor_init()
        cls._model = glm.OrdinalRegression(cls._categories, cls._pred, cls._canonical_link)

    @classmethod
    def tearDownClass(cls):
        """Test cumulative regression deletion"""
        del cls._model

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestSequentialRegression(TestAdjacentRegression): 
    _eta = linalg.Vector([2.7, 4.])
    _canonical_link = glm.OrdinalLink(ratio='sequential')
    _norm = [1+math.exp(_eta[0]), 1+math.exp(_eta[1])]
    _mu = linalg.Vector([math.exp(_eta[0])/_norm[0], math.exp(_eta[1])/(_norm[0]*_norm[1]), 1/(_norm[0]*_norm[1])])
    _categories = ['B','C','A']

    @classmethod
    def setUpClass(cls):
        """Test cumulative regression construction"""
        cls.predictor_init()
        cls._model = glm.OrdinalRegression(cls._categories, cls._pred, cls._canonical_link)

    @classmethod
    def tearDownClass(cls):
        """Test cumulative regression deletion"""
        del cls._model