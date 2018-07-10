import math

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
class TestCanonicalBinaryRegressionEstimation(unittest.TestCase):
    _alpha = -60.72
    _delta =  34.27# (Dosbson, 2008) page ?
    #_loglikelihood = ?

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('beetles')
        cls._data.data.State.sample_space.reference = 'alive'

    def test_Fisher(self):
        """Test Fisher scoring estimation for binary regression"""
        mle = glm.binary_estimation(data=self._data, response = 0, explanatories = {1})
        #print(mle.loglikelihood)
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta[0]
        self.assertAlmostEqual(alpha, self._alpha, places=2)
        self.assertAlmostEqual(delta, self._delta, places=2)

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data


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
class TestConstrainedRegressionEstimation(TestCanonicalNominalRegressionEstimation):
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