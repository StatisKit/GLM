from statiskit import core
from statiskit import glm
from statiskit import linalg

from statiskit.data import glm as data

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestCanonicalNominalRegressionEstimation(unittest.TestCase):
    _alpha = linalg.Vector([-0.591, -1.039])
    _delta = linalg.Matrix([[-0.388, 1.128, 1.588], [-0.813, 1.478, 2.917]]) # (Dosbson, 2008) page 155
    _loglikelihood = -290.35

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('cars')
        cls._data.AirConditioning.sample_space.reference = 'little_important'
        cls._data.Sex.sample_space.reference = 'women'
        cls._data.Age.sample_space.reference = '18_23'

    def test_Fisher(self):
        """Test Fisher scoring estimation for nominal regression with complete design"""
        mle = glm.nominal_estimation(data=self._data, response = 0, explanatories = {1,2})
        self.assertAlmostEqual(mle.loglikelihood, self._loglikelihood, places=2)
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        for i in range(len(self._alpha)):
            self.assertAlmostEqual(alpha[i], self._alpha[i], places=3)
            for j in range(self._delta.nb_cols):
                self.assertAlmostEqual(delta[i,j], self._delta[i,j], places=3)
        #mle = glm.nominal_estimation(design='proportional', data=self._data, response = 0, explanatories = {1,2})

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestReferenceConstrainedRegressionEstimation(TestCanonicalNominalRegressionEstimation):
    _alpha = linalg.Vector([7.3348, 3.5917, 4.3719])
    _delta = linalg.Vector([-0.0235, -0.1002, 0.0238, -1.1738]) # (Louviere et al., 2000) page 157
    _slope_constraint = linalg.Matrix([
        [1,0,0,0],
        [0,0,0,0],
        [-1,0,0,0],
        [0,0,0,0],

        [0,1,0,0],
        [0,0,0,0],
        [0,-1,0,0],
        [0,0,0,0],  

        [0,0,1,0],
        [0,0,0,1],

        [0,0,0,0],
        [1,0,0,0],
        [-1,0,0,0],
        [0,0,0,0],

        [0,0,0,0],
        [0,1,0,0],
        [0,-1,0,0],
        [0,0,0,0],
                              
        [0,0,0,0],
        [0,0,0,0],

        [0,0,0,0],
        [0,0,0,0],
        [-1,0,0,0],
        [1,0,0,0],

        [0,0,0,0],
        [0,0,0,0],
        [0,-1,0,0],
        [0,1,0,0], 

        [0,0,0,0],
        [0,0,0,0]
        ])

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('travel')
        cls._data.TravelMode.sample_space.reference = "car"

    def test_Fisher(self):
        """Test Fisher scoring estimation for nominal regression with constrained design"""
        mle = glm.nominal_estimation(Z='constrained', data=self._data, response=0, explanatories={1,2,3,4,5,6,7,8,9,10}, slope_constraint=self._slope_constraint)
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        for i in range(len(self._alpha)):
            self.assertAlmostEqual(alpha[i], self._alpha[i], places=4)
        for i in range(len(self._delta)):
            self.assertAlmostEqual(delta[i], self._delta[i], places=4)      
        #mle_normal = glm.nominal_estimation(distribution=core.NormalDistribution(), Z='constrained', algo='Fisher', data=self._data, response=0, explanatories={1,2,3,4,5,6,7,8,9,10}, slope_constraint=slope_constraint)

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data




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