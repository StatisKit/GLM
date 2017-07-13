from functools import wraps
from statiskit.core.event import (MultivariateEvent,
                                    VectorEvent)
from statiskit.core.distribution import (DiscreteUnivariateDistribution,
                                         UnivariateConditionalDistribution,
                                             DiscreteUnivariateConditionalDistribution)

import _glm
from __glm.statiskit.glm import (_GeneralizedLinearModel,
                                    PoissonRegression,
                                    BinomialRegression,
                                    NegativeBinomialRegression,
                                    NominalRegression,
                                    OrdinalRegression,
                                    _SplittingRegressionI,
                                    _SplittingRegressionII,
                                    _SplittingRegressionIII,
                                    MultinomialSplittingRegressionI,
                                    MultinomialSplittingRegressionII,
                                    MultinomialSplittingRegressionIII)

__all__ = ['PoissonRegression',
           'BinomialRegression',
           'NegativeBinomialRegression',
           'NominalRegression',
           'OrdinalRegression',
           'MultinomialSplittingRegression']

def GeneralizedLinearModel_decorator(cls):
    cls.predictor = property(cls.get_predictor)
    cls.link = property(cls.get_link, cls.set_link)
    del cls.get_predictor, cls.get_link, cls.set_link

for cls in _GeneralizedLinearModel:
    GeneralizedLinearModel_decorator(cls)

BinomialRegression.kappa = property(BinomialRegression.get_kappa, BinomialRegression.set_kappa)
del BinomialRegression.get_kappa, BinomialRegression.set_kappa

NegativeBinomialRegression.kappa = property(NegativeBinomialRegression.get_kappa, NegativeBinomialRegression.set_kappa)
del NegativeBinomialRegression.get_kappa, NegativeBinomialRegression.set_kappa

def MultinomialSplittingRegression(sum, *args):
    if isinstance(sum, DiscreteUnivariateConditionalDistribution):
        if len(args) == 1:
            return MultinomialSplittingRegressionIII(sum, *args)
        elif len(args) == 2:
            return MultinomialSplittingRegressionI(sum, *args)
        else:
            raise ValueError()
    elif isinstance(sum, DiscreteUnivariateDistribution):
        if len(args) == 2:
            return MultinomialSplittingRegressionII(sum, *args)
    else:
        raise TypeError("'sum' parameter must be a '" + DiscreteUnivariateConditionalDistribution.__name__ + "' or a '" + DiscreteUnivariateDistribution.__name__ + "' instance")
