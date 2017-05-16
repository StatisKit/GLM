from functools import wraps
from statiskit.core.event import (MultivariateEvent,
                                    VectorEvent)
from statiskit.core.distribution import (UnivariateConditionalDistribution)

import _glm
from __glm.statiskit.glm import (_GeneralizedLinearModel,
                                    PoissonRegression,
                                    BinomialRegression,
                                    NegativeBinomialRegression,
                                    NominalRegression,
                                    OrdinalRegression)

__all__ = ['PoissonRegression',
            'BinomialRegression',
            'NegativeBinomialRegression',
            'NominalRegression',
            'OrdinalRegression']

def GeneralizedLinearModel_decorator(cls):
    cls.predictor = property(cls.get_predictor)
    cls.link = property(cls.get_link, cls.set_link)
    del cls.get_predictor, cls.get_link, cls.set_link

for cls in _GeneralizedLinearModel:
    GeneralizedLinearModel_decorator(cls)    