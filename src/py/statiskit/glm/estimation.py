from functools import wraps
from statiskit.core import estimation

from link import NominalLink, OrdinalLink
from predictor import ConstrainedVectorPredictor

import _glm
from __glm.statiskit.glm import (_CategoricalFisherEstimation,
                                        NominalCompleteFisherEstimation,
                                        NominalProportionalFisherEstimation,
                                        OrdinalCompleteFisherEstimation,
                                        OrdinalProportionalFisherEstimation,
                                        CumulativeCompleteFisherEstimation,
                                        CumulativeProportionalFisherEstimation,                                                                                                                        
                                    _ConstrainedFisherEstimation,
                                        NominalConstrainedFisherEstimation,
                                        OrdinalConstrainedFisherEstimation,
                                        CumulativeConstrainedFisherEstimation)

__all__ = ['nominal_regression_estimation',
            'ordinal_regression_estimation']

for cls in _CategoricalFisherEstimation:
    cls.Estimator.link = property(cls.Estimator.get_link, cls.Estimator.set_link)
    cls.loglikelihood = property(cls.get_loglikelihood)
    cls.loglikelihood_sequence = property(cls.get_loglikelihood_sequence)
    del cls.Estimator.get_link, cls.Estimator.set_link, cls.get_loglikelihood, cls.get_loglikelihood_sequence

for cls in _ConstrainedFisherEstimation:
    cls.Estimator.intercept_constraint = property(cls.Estimator.get_intercept_constraint, cls.Estimator.set_intercept_constraint) 
    cls.Estimator.slope_constraint = property(cls.Estimator.get_slope_constraint, cls.Estimator.set_slope_constraint)
#    cls.PartialProportionalEstimator.proportional = property(cls.PartialProportionalEstimator.get_proportional, cls.PartialProportionalEstimator.set_proportional)
    del cls.Estimator.get_intercept_constraint, cls.Estimator.set_intercept_constraint, cls.Estimator.get_slope_constraint, cls.Estimator.set_slope_constraint#, cls.PartialProportionalEstimator.get_proportional, cls.PartialProportionalEstimator.set_proportional

for cls in (CumulativeCompleteFisherEstimation, CumulativeProportionalFisherEstimation, CumulativeConstrainedFisherEstimation):
    cls.Estimator.beta_init = property(cls.Estimator.get_beta_init, cls.Estimator.set_beta_init)
    del cls.Estimator.get_beta_init, cls.Estimator.set_beta_init

def _estimation(algo, data, response, explanatories, mapping, **kwargs):
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.iterkeys()))
    except:
        raise
    if data:
        lazy = kwargs.pop('lazy', False)
    for attr in kwargs.keys():
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + algo.__class__.__name__ + "' object has no attribute '" + attr + "'")
    if data:
        return algo(data, response, explanatories, lazy)
    else:
        return algo


def nominal_regression_estimation(Z='complete', algo='Fisher', data=None, response=None, explanatories=None, **kwargs):
    """
    """
    algo = algo + '_' + Z
    if 'distribution' in kwargs:
        kwargs['link'] = NominalLink(ratio='reference', distribution=kwargs.pop('distribution'))
    if 'partial_proportional' in kwargs:
        kwargs['slope_constraint'] = ConstrainedVectorPredictor.partial_proportional_constraint(data, response, explanatories, kwargs.pop('partial_proportional'))
    return _estimation(algo, 
                       data,
                       response,
                       explanatories,
                       dict(Fisher_complete = NominalCompleteFisherEstimation.Estimator,
                            Fisher_proportional = NominalProportionalFisherEstimation.Estimator,
                            Fisher_constrained = NominalConstrainedFisherEstimation.Estimator),
                       **kwargs)

def ordinal_regression_estimation(Z='complete', algo='Fisher', data=None, response=None, explanatories=None, **kwargs):
    """
    """
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
        kwargs['slope_constraint'] = ConstrainedVectorPredictor.partial_proportional_constraint(data, response, explanatories, kwargs.pop('partial_proportional'))
    return _estimation(algo, 
                       data,
                       response,
                       explanatories,
                       dict(Fisher_complete = OrdinalCompleteFisherEstimation.Estimator,
                            Fisher_proportional = OrdinalProportionalFisherEstimation.Estimator,
                            Fisher_constrained = OrdinalConstrainedFisherEstimation.Estimator,
                            Fisher_complete_cumulative = CumulativeCompleteFisherEstimation.Estimator,
                            Fisher_proportional_cumulative = CumulativeProportionalFisherEstimation.Estimator,
                            Fisher_constrained_cumulative = CumulativeConstrainedFisherEstimation.Estimator),
                       **kwargs)