from statiskit import core
from statiskit import glm
from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestPredictor(object):

    @classmethod
    def sample_space_init(cls):
        sample_spaces = []
        sample_spaces.append(core.controls.ZZ)
        sample_spaces.append(core.controls.RR)
        cls._vector_sample_spaces = core.VectorSampleSpace(sample_spaces)
       

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestCompleteScalarPredictor(unittest.TestCase, TestPredictor):

    _alpha = 1.
    _delta = linalg.Vector([0.5, 2.])
    #_x = [1, 1.6]
    _len = 3
    _eta = 4.7

    @classmethod
    def setUpClass(cls):
        """Test complete scalar predictor construction"""
        cls.sample_space_init()
        cls._pred = glm.CompleteScalarPredictor(cls._vector_sample_spaces)

    def test_predictor(self):
        """Test complete scalar predictor operator"""
        self._pred.alpha = self._alpha
        self._pred.delta = self._delta
        self.assertEqual(len(self._pred), self._len)
        self.assertEqual(self._pred(1, 1.6), self._eta)  

    @classmethod
    def tearDownClass(cls):
        """Test complete scalar predictor deletion"""
        del cls._pred 

       
@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestCompleteVectorPredictor(unittest.TestCase, TestPredictor):

    _alpha = linalg.Vector([1., 2.])
    _delta = linalg.Matrix([[0.5, 2.], [1., 4.]])
    _len = 6
    _eta = linalg.Vector([4.7, 9.4])

    @classmethod
    def setUpClass(cls):
        """Test complete vector predictor construction"""
        cls.sample_space_init()
        cls._pred = glm.CompleteVectorPredictor(cls._vector_sample_spaces, 2)

    def test_predictor(self):
        """Test vector predictor operator"""
        self._pred.alpha = self._alpha
        self._pred.delta = self._delta
        self.assertEqual(len(self._pred), self._len)
        eta = self._pred(1, 1.6)
        self.assertEqual(eta[0], self._eta[0]) 
        self.assertEqual(eta[1], self._eta[1]) 

    @classmethod
    def tearDownClass(cls):
        """Test complete vector predictor deletion"""
        del cls._pred

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestProportionalVectorPredictor(TestCompleteVectorPredictor):
    
    _alpha = linalg.Vector([1., 2.])
    _delta = linalg.Vector([0.5, 2.])
    _len = 4
    _eta = linalg.Vector([4.7, 5.7])

    @classmethod
    def setUpClass(cls):
        """Test proportional vector predictor construction"""
        cls.sample_space_init()
        cls._pred = glm.ProportionalVectorPredictor(cls._vector_sample_spaces, 2)

    @classmethod
    def tearDownClass(cls):
        """Test proportional vector predictor deletion"""
        del cls._pred