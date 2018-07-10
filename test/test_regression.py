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
class AbstractTestUnivariateRegression(object):
    @classmethod
    def predictor_init(cls):
        sample_spaces = []
        sample_spaces.append(core.controls.ZZ)
        sample_spaces.append(core.controls.RR)
        cls._vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
        cls._pred = glm.CompleteScalarPredictor(cls._vector_sample_spaces)
        cls._pred.alpha = cls._alpha
        cls._pred.delta = cls._delta

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinaryRegression(unittest.TestCase, AbstractTestUnivariateRegression): 
    _alpha = 1.
    _delta = linalg.Vector([-1.5, 2.])
    _x = [1, 1.6]
    _nb_param = 3
    _eta = 2.7
    _canonical_link = glm.BinaryLink()
    _pi = math.exp(_eta)/(1 + math.exp(_eta))
    _places = 10

    @classmethod
    def setUpClass(cls):
        """Test binary regression construction"""
        cls.predictor_init()
        cls._model = glm.BinaryRegression('A', 'B', cls._pred, cls._canonical_link)

    def test_get_nb_parameters(self):
        """Test binary regression get number of parameters"""
        self.assertEqual(self._model.nb_parameters, self._nb_param)

    def test_conditional(self):
        """Test binary regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('A'), self._pi, places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('B'), 1-self._pi, places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test binary regression deletion"""
        del cls._model

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
        cls._vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
        cls._pred = glm.CompleteVectorPredictor(cls._vector_sample_spaces, 2)
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
    _categories = {'Bb','Bc','Ba'}
    _places = 10

    @classmethod
    def setUpClass(cls):
        """Test reference regression construction"""
        cls.predictor_init()
        cls._model = glm.NominalRegression(cls._categories, cls._pred, cls._canonical_link)

    def test_get_nb_parameters(self):
        """Test reference regression get number of parameters"""
        self.assertEqual(self._model.nb_parameters, self._nb_param)

    def test_conditional(self):
        """Test reference regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('Ba'), self._mu[0], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Bb'), self._mu[1], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Bc'), self._mu[2], places = self._places)

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
    _categories = ['C','B','A']

    @classmethod
    def setUpClass(cls):
        """Test adjacent regression construction"""
        cls.predictor_init()
        cls._model = glm.OrdinalRegression(cls._categories, cls._pred, cls._canonical_link)

    def test_conditional(self):
        """Test ordinal regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('C'), self._mu[0], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('B'), self._mu[1], places = self._places)
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
    _categories = ['C','B','A']

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
    _categories = ['C','B','A']

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
class TestHierarchicalRegression(unittest.TestCase, AbstractTestCategoricalRegression):
    _alpha = linalg.Vector([1., 2.])
    _delta = linalg.Matrix([[-1.5, 2.], [-2., 2.5]])
    _x = [1, 1.6]
    _nb_param = 12
    _eta = linalg.Vector([2.7, 4.])

    _norm_root = [1+math.exp(_eta[0]), 1+math.exp(_eta[1])]
    _mu_root = linalg.Vector([math.exp(_eta[0])/_norm_root[0], math.exp(_eta[1])/_norm_root[1]-math.exp(_eta[0])/_norm_root[0], 1-math.exp(_eta[1])/_norm_root[1]])
    _categories_root = ['C','B','A']

    _norm_B = 1 + math.exp(_eta[0]) + math.exp(_eta[1])
    _mu_B = linalg.Vector([math.exp(_eta[0])/_norm_B, math.exp(_eta[1])/_norm_B, 1/_norm_B])
    _categories_B = {'Ba', 'Bb', 'Bc'}

    _places = 10


    @classmethod
    def hierarchical_sample_space_init(cls):
        ordinal_space = core.OrdinalSampleSpace(cls._categories_root)
        nominal_space = core.NominalSampleSpace(cls._categories_B)
        cls._hss = core.HierarchicalSampleSpace(ordinal_space)
        cls._hss.partition('B', nominal_space)       
           
    @classmethod
    def setUpClass(cls):
        """Test hierarchical regression construction"""
        cls.hierarchical_sample_space_init()
        cls.predictor_init()
        cls._model = glm.HierarchicalRegression(cls._hss, cls._vector_sample_spaces)

    @classmethod
    def test_get_set_regression(self):
        """Test hierarchical regression get and set regression model"""
        model_root = self._model.get_regression("")
        model_root.predictor = self._pred
        model_root.link = glm.OrdinalLink(ratio='cumulative')
        self._model.set_regression("", model_root)
        model_B = self._model.get_regression("B")
        model_B.predictor = self._pred
        model_B.link = glm.NominalLink(ratio='reference')
        self._model.set_regression("B", model_B)

    def test_get_nb_parameters(self):
        """Test hierarchical regression get number of parameters"""
        self.assertEqual(self._model.nb_parameters, self._nb_param) # Warning after issue #32 it must be equal to 0 and not 12

    def test_conditional(self):
        """Test hierarchical regression conditional operator"""
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('C'), float(1/3), places = self._places)
        self.assertAlmostEqual(response_distribution.internal_pdf('B'), float(1/3), places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Ba'), float(1/9), places = self._places)
        self.test_get_set_regression()
        response_distribution = self._model(*self._x)
        self.assertAlmostEqual(response_distribution.pdf('C'), self._mu_root[0], places = self._places)
        self.assertAlmostEqual(response_distribution.internal_pdf('B'), self._mu_root[1], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('A'), self._mu_root[2], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Ba'), self._mu_root[1]*self._mu_B[0], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Bb'), self._mu_root[1]*self._mu_B[1], places = self._places)
        self.assertAlmostEqual(response_distribution.pdf('Bc'), self._mu_root[1]*self._mu_B[2], places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test hierarchcical regression deletion"""
        del cls._model