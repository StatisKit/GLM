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


    def test_evaluate(self):
        self.assertEqual(self._link.evaluate(self._mu), self._eta)

    def test_inverse(self):
        self.assertEqual(self._link.inverse(self._eta), self._mu)
        self.assertEqual(self._link.inverse(self._link.evaluate(self._mu)), self._mu)

    def test_link_inverse_derivative(self):
        self.assertEqual(self._link.inverse(self._link.evaluate(self._mu)), self._mu)

    def test_link_inverse(self):
        """Test Link inverse"""
        self.assertEqual(self._link.inverse(self._eta), self._mu)
        self.assertEqual(self._link.inverse(self._eta), self._link.inverse(self._eta))  

    def test_link_inverse_derivative(self):
        """Test Link inverse derivative"""
        self.assertEqual(self._link.inverse_derivative(self._eta), self._mu_prime)
        self.assertAlmostEqual(self._link.inverse_derivative(self._eta), self._link.inverse_derivative(self._eta))    