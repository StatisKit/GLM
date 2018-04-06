from functools import wraps
from statiskit.core import estimation
from statiskit.core.data import UnivariateConditionalData
from statiskit.core.estimation import (active_estimation_decorator,
                                       optimization_estimation_decorator)
from .link import NominalLink, OrdinalLink
from .predictor import ConstrainedVectorPredictor

from . import _glm
from .__glm.statiskit import (_ActiveEstimation,
                              _OptimizationEstimation)
from .__glm.statiskit.glm import (_ScalarRegressionFisherEstimation,
                                     PoissonRegressionFisherEstimation,
                                     BinomialRegressionFisherEstimation,
                                     BinomialRegressionSteepestAscentEstimation,
                                     NegativeBinomialRegressionFisherEstimation,
                                     NegativeBinomialRegressionX2Estimation,
                                  _CategoricalRegressionFisherEstimation, _ConstrainedRegressionFisherEstimation,
                                         NominalCompleteRegressionFisherEstimation,
                                         NominalProportionalRegressionFisherEstimation,
                                         OrdinalCompleteRegressionFisherEstimation,
                                         OrdinalProportionalRegressionFisherEstimation,
                                         CumulativeCompleteRegressionFisherEstimation,
                                         CumulativeProportionalRegressionFisherEstimation,                                                                                                                        
                                         NominalConstrainedRegressionFisherEstimation,
                                         OrdinalConstrainedRegressionFisherEstimation,
                                         CumulativeConstrainedRegressionFisherEstimation)

__all__ = ['poisson_estimation',
           'binomial_estimation',
           'negative_binomial_estimation',
           'nominal_estimation',
           'ordinal_estimation']

for cls in _ActiveEstimation:
    active_estimation_decorator(cls)

for cls in _OptimizationEstimation:
    optimization_estimation_decorator(cls)

def scalar_regression_fihser_estimator_decorator(cls):

    cls.link = property(cls.get_link, cls.set_link)
    del cls.get_link, cls.set_link

    cls.solver = property(cls.get_solver, cls.set_solver)
    del cls.get_solver, cls.set_solver

for cls in _ScalarRegressionFisherEstimation:
    scalar_regression_fihser_estimator_decorator(cls.Estimator)

for cls in _CategoricalRegressionFisherEstimation:
    cls.Estimator.link = property(cls.Estimator.get_link, cls.Estimator.set_link)
    cls.loglikelihood = property(cls.get_loglikelihood)
    cls.loglikelihood_sequence = property(cls.get_loglikelihood_sequence)
    del cls.Estimator.get_link, cls.Estimator.set_link, cls.get_loglikelihood, cls.get_loglikelihood_sequence

for cls in _ConstrainedRegressionFisherEstimation:
    cls.Estimator.intercept_constraint = property(cls.Estimator.get_intercept_constraint, cls.Estimator.set_intercept_constraint) 
    cls.Estimator.slope_constraint = property(cls.Estimator.get_slope_constraint, cls.Estimator.set_slope_constraint)
#    cls.PartialProportionalEstimator.proportional = property(cls.PartialProportionalEstimator.get_proportional, cls.PartialProportionalEstimator.set_proportional)
    del cls.Estimator.get_intercept_constraint, cls.Estimator.set_intercept_constraint, cls.Estimator.get_slope_constraint, cls.Estimator.set_slope_constraint#, cls.PartialProportionalEstimator.get_proportional, cls.PartialProportionalEstimator.set_proportional

for cls in (CumulativeCompleteRegressionFisherEstimation, CumulativeProportionalRegressionFisherEstimation, CumulativeConstrainedRegressionFisherEstimation):
    cls.Estimator.beta_init = property(cls.Estimator.get_beta_init, cls.Estimator.set_beta_init)
    del cls.Estimator.get_beta_init, cls.Estimator.set_beta_init

def _data(data, mult, **kwargs):
    if data is not None and not isinstance(data, UnivariateConditionalData):
        if "explanatories" not in kwargs:
            raise ValueError("'explanatories' parameter must be given when providing '" + data.__class__.__name__ + "' instances for 'data' parameter")
        if mult:
            if "responses" not in kwargs:
                raise ValueError("'responses' parameter must be given when providing '" + data.__class__.__name__ + "' instances for 'data' parameter")
            data = data.extract(responses=kwargs.pop("responses"),
                                explanatories=kwargs.pop("explanatories"))
        else:
            if "response" not in kwargs:
                raise ValueError("'response' parameter must be given when providing '" + data.__class__.__name__ + "' instances for 'data' parameter")
            data = data.extract(response=kwargs.pop("response"),
                                explanatories=kwargs.pop("explanatories"))
        return data, kwargs
    else:
        return data, kwargs

def _estimation(algo, data, mapping, **kwargs):
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.iterkeys()))
    except:
        raise
    if data:
        lazy = kwargs.pop('lazy', False)
    for attr in list(kwargs.keys()):
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + algo.__class__.__name__ + "' object has no attribute '" + attr + "'")
    if data:
        return algo(data, lazy)
    else:
        return algo

def poisson_estimation(algo='Fisher', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    if 'constraints' in kwargs:
        return NotImplemented()
    else:
        algos = dict(Fisher = PoissonRegressionFisherEstimation.Estimator)
    return _estimation(algo, 
                       __data,
                       algos,
                       **kwargs)

BinomialRegressionFisherEstimation.Estimator.kappa = property(BinomialRegressionFisherEstimation.Estimator.get_kappa, BinomialRegressionFisherEstimation.Estimator.set_kappa)
del BinomialRegressionFisherEstimation.Estimator.get_kappa, BinomialRegressionFisherEstimation.Estimator.set_kappa

def binomial_estimation(algo='SA', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    if 'constraints' in kwargs:
        return NotImplemented()
    else:
        algos = dict(Fisher = BinomialRegressionFisherEstimation.Estimator,
                     SA = BinomialRegressionSteepestAscentEstimation.Estimator)
    return _estimation(algo, 
                       __data,
                       algos,
                       **kwargs)
    
NegativeBinomialRegressionFisherEstimation.Estimator.kappa = property(NegativeBinomialRegressionFisherEstimation.Estimator.get_kappa, NegativeBinomialRegressionFisherEstimation.Estimator.set_kappa)
del NegativeBinomialRegressionFisherEstimation.Estimator.get_kappa, NegativeBinomialRegressionFisherEstimation.Estimator.set_kappa

def negative_binomial_estimation(algo='X2', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    if 'constraints' in kwargs:
        return NotImplemented()
    else:
        algos = dict(Fisher = NegativeBinomialRegressionFisherEstimation.Estimator,
                     X2 = NegativeBinomialRegressionX2Estimation.Estimator)
    return _estimation(algo, 
                       __data,
                       algos,
                       **kwargs)

def nominal_estimation(Z='complete', algo='Fisher', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    algo = algo + '_' + Z
    if 'distribution' in kwargs:
        kwargs['link'] = NominalLink(ratio='reference', distribution=kwargs.pop('distribution'))
    if 'partial_proportional' in kwargs:
        kwargs['slope_constraint'] = ConstrainedVectorPredictor.partial_proportional_constraint(data, kwargs.pop('partial_proportional'))
    return _estimation(algo, 
                       __data,
                       dict(Fisher_complete = NominalCompleteRegressionFisherEstimation.Estimator,
                            Fisher_proportional = NominalProportionalRegressionFisherEstimation.Estimator,
                            Fisher_constrained = NominalConstrainedRegressionFisherEstimation.Estimator),
                       **kwargs)

def ordinal_estimation(Z='complete', algo='Fisher', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    algo = algo + '_' + Z
    if 'ratio' in kwargs:
        if kwargs['ratio'] == 'cumulative':
            algo = algo + '_cumulative'
        if 'distribution' in kwargs:
            kwargs['link'] = OrdinalLink(ratio=kwargs.pop('ratio'), distribution=kwargs.pop('distribution'))
        else:
            kwargs['link'] = OrdinalLink(ratio=kwargs.pop('ratio'))
    else:
        if 'distribution' in kwargs:
            kwargs['link'] = OrdinalLink(ratio='adjacent', distribution=kwargs.pop('distribution'))        
        else:
            kwargs['link'] = OrdinalLink()
    if 'partial_proportional' in kwargs:
        kwargs['slope_constraint'] = ConstrainedVectorPredictor.partial_proportional_constraint(__data, kwargs.pop('partial_proportional'))
    return _estimation(algo, 
                       __data,
                       dict(Fisher_complete = OrdinalCompleteRegressionFisherEstimation.Estimator,
                            Fisher_proportional = OrdinalProportionalRegressionFisherEstimation.Estimator,
                            Fisher_constrained = OrdinalConstrainedRegressionFisherEstimation.Estimator,
                            Fisher_complete_cumulative = CumulativeCompleteRegressionFisherEstimation.Estimator,
                            Fisher_proportional_cumulative = CumulativeProportionalRegressionFisherEstimation.Estimator,
                            Fisher_constrained_cumulative = CumulativeConstrainedRegressionFisherEstimation.Estimator),
                       **kwargs)