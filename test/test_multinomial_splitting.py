from statiskit import (linalg,
                       core,
                       glm)
from statiskit.data import glm as data

import unittest
from nose.plugins.attrib import attr

import math

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestMultinomialSplittingRegression(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test Multinomial splitting regression construction"""
        cls._data = data.load('KN03')

    # def test_Fisher_estimation(self):
    #     """Test negative binomial regression Fisher estimation"""
    #     data = self._data.extract(explanatories=range(len(self._data.components) - 1),
    #                                    response=-1)
    #     fe = glm.negative_binomial_estimation(algo='Fisher',
    #                                           data=data,
    #                                           kappa=1.274892646)
    #     self.assertAlmostEqual(2 * fe.estimated.loglikelihood(data), -1093.15, places=2)
    #     # self.assertAlmostEqual(2 * fe.estimated.loglikelihood(data), -1093.61, places=2)


    @classmethod
    def tearDownClass(cls):
        """Test Negative Binomial regression deletion"""
        del cls._data      