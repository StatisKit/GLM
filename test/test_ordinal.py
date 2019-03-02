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
        mle = glm.ordinal_estimation(data=self._data, response = 0, explanatories = {1, 2})
        alpha = mle.estimated.predictor.alpha
        delta = mle.estimated.predictor.delta
        self.assertAlmostEqual(mle.loglikelihood, self._loglikelihood, places=2)
        self._data.AirConditioning.sample_space = self._data.AirConditioning.sample_space.as_nominal()
        mle = glm.nominal_estimation(data=self._data, response = 0, explanatories = {1, 2})
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
        mle = glm.ordinal_estimation(ratio='cumulative', Z='proportional', data=self._data, response = 0, explanatories = {1, 2})
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


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestHierarchicalRegressionEstimation(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data_ordinal = data.load('retinopathy')
        cls._data_hierarchical = data.load('retinopathy')
        sample_spaces = []
        ss1 = core.NominalSampleSpace('0', '12')
        ss2 = core.NominalSampleSpace('1', '2')
        hss = core.HierarchicalSampleSpace(ss1)
        hss.partition('12', ss2)
        sample_spaces.append(hss)
        sample_spaces.append(core.controls.ZZ)
        for i in [0,1,2]:
            sample_spaces.append(core.controls.RR)
        cls._data_hierarchical.RET.sample_space = hss

    def test_Fisher(self):
        """Test Fisher scoring estimation for hierarchical regression"""
        #mle_sequential = glm.ordinal_estimation(ratio='sequential', distribution = core.NormalDistribution(), data = self._data_ordinal, response = 0, explanatories = {1,2,3,4})
        mle = glm.ordinal_estimation(ratio='sequential', data = self._data_ordinal, response = 0, explanatories = {1,2,3,4})  
        a = mle.estimated.predictor.alpha
        mle = glm.hierarchical_estimation(data = self._data_hierarchical, response = 0, explanatories = {1,2,3,4})
        A0 = mle[""].estimated.predictor.alpha[0]
        A1 = mle["12"].estimated.predictor.alpha[0]
        self.assertAlmostEqual(a[0], A0, places=3)
        self.assertAlmostEqual(a[1], A1, places=2)
        mle_sequential_cauchy = glm.ordinal_estimation(ratio='sequential', distribution = core.CauchyDistribution(), data = self._data_ordinal, response = 0, explanatories = {1,2,3,4})  
        estimator = glm.nominal_estimation(distribution = core.CauchyDistribution())      
        mle_hierarchical = glm.hierarchical_estimation(default = estimator, data = self._data_hierarchical, response = 0, explanatories = {1,2,3,4})
        alpha_sequential_cauchy = mle_sequential_cauchy.estimated.predictor.alpha
        alpha_hierarchical_root = mle_hierarchical[""].estimated.predictor.alpha[0]
        alpha_hierarchical_12 = mle_hierarchical["12"].estimated.predictor.alpha[0]
        self.assertAlmostEqual(alpha_sequential_cauchy[0], alpha_hierarchical_root, places=2)
        self.assertAlmostEqual(alpha_sequential_cauchy[1], alpha_hierarchical_12, places=2)
        mle_sequential_laplace = glm.ordinal_estimation(ratio='sequential', distribution = core.LaplaceDistribution(), data = self._data_ordinal, response = 0, explanatories = {1,2,3,4})               
        estimator_12 = glm.nominal_estimation(distribution = core.LaplaceDistribution())
        mle_hierarchical = glm.hierarchical_estimation(default = estimator, **{"12" : estimator_12}, data = self._data_hierarchical, response = 0, explanatories = {1,2,3,4})
        alpha_sequential_laplace = mle_sequential_laplace.estimated.predictor.alpha        
        alpha_hierarchical_root = mle_hierarchical[""].estimated.predictor.alpha[0]
        alpha_hierarchical_12 = mle_hierarchical["12"].estimated.predictor.alpha[0]
        self.assertAlmostEqual(alpha_sequential_cauchy[0], alpha_hierarchical_root, places=2)
        self.assertAlmostEqual(alpha_sequential_laplace[1], alpha_hierarchical_12, places=1)
        binary_estimator_cauchy = glm.binary_estimation(distribution = core.CauchyDistribution())
        binary_estimator_laplace = glm.binary_estimation(distribution = core.LaplaceDistribution())
        mle_hierarchical = glm.hierarchical_estimation(default = binary_estimator_cauchy, **{"12" : binary_estimator_laplace}, data = self._data_hierarchical, response = 0, explanatories = {1,2,3,4})
        alpha_hierarchical_root = mle_hierarchical[""].estimated.predictor.alpha
        alpha_hierarchical_12 = mle_hierarchical["12"].estimated.predictor.alpha       
        self.assertAlmostEqual(alpha_sequential_cauchy[0], alpha_hierarchical_root, places=3)
        #self.assertAlmostEqual(alpha_sequential_laplace[1], alpha_hierarchical_12, places=5)
