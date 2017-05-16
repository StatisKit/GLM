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

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('iris_Fisher')

    def test_Fisher_complete(self):
        """Test Fisher scoring estimation for complete design"""
        mle = glm.nominal_regression_estimation(Z='complete', algo='Fisher', data=self._data, response = 4, explanatories = {0,1,2,3})
        # self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))        

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data