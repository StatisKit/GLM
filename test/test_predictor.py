from statiskit import core
from statiskit import glm
from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestScalarPredictor(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test scalar predictor construction"""
        sample_spaces = []
        sample_spaces.append(core.controls.ZZ)
        sample_spaces.append(core.controls.RR)
        vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
        cls._pred = glm.CompleteScalarPredictor(vector_sample_spaces)

    def test_complete_predictor(self):
        """Test complete predictor"""
        self._pred.set_beta(linalg.Vector([1., 0.5, 2.]))
        self.assertEqual(self._pred(1, 1.6), 4.7)

    @classmethod
    def tearDownClass(cls):
        """Test distribution deletion"""
        del cls._pred    