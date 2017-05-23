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
class TestReferenceRegressionEstimation(unittest.TestCase):
    _places = 3
    _alpha = linalg.Vector([-0.591, -1.039])
    _deltas = linalg.Matrix([[-0.388, 1.128, 1.588], [-0.813, 1.478, 2.917]]) # (Dosbson, 2008) page 155

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('car_preferences_dispatch')          
        cls._data.AirConditioning.sample_space.reference = 'little_important'
        cls._data.Sex.sample_space.reference = 'women'
        cls._data.Age.sample_space.reference = '18_23'
        cls._data2 = data.load('travel_Hensher')
        cls._data2.TravelMode.sample_space.reference = "car"

    def test_Fisher_complete(self):
        """Test Fisher scoring estimation for complete design"""
        # for event in self._data.events:
        #     print event, " : ", self._data.sample_space.encode(event)
        mle = glm.nominal_regression_estimation(Z='complete', algo='Fisher', data=self._data, response = 0, explanatories = {1,2})
        alpha = mle.estimated.predictor.alpha
        deltas = mle.estimated.predictor.delta
        for i in range(2):
            self.assertAlmostEqual(alpha[i], self._alpha[i], places = self._places)
            for j in range(3):
                self.assertAlmostEqual(deltas[i,j], self._deltas[i,j], places = self._places)

        slope_constraint = linalg.Matrix([
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
        mle = glm.nominal_regression_estimation(Z='constrained', algo='Fisher', data=self._data2, response=0, explanatories={1,2,3,4,5,6,7,8,9,10}, slope_constraint=slope_constraint)      

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data