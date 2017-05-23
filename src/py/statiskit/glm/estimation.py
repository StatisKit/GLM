from functools import wraps
from statiskit.core import estimation

import _glm
from __glm.statiskit.glm import (NominalFisherEstimation,
                                    ProportionalNominalFisherEstimation,
                                    ConstrainedNominalFisherEstimation)

__all__ = ['nominal_regression_estimation']


ConstrainedNominalFisherEstimation.Estimator.intercept_constraint = property(ConstrainedNominalFisherEstimation.Estimator.get_intercept_constraint, ConstrainedNominalFisherEstimation.Estimator.set_intercept_constraint)
del ConstrainedNominalFisherEstimation.Estimator.get_intercept_constraint, ConstrainedNominalFisherEstimation.Estimator.set_intercept_constraint

ConstrainedNominalFisherEstimation.Estimator.slope_constraint = property(ConstrainedNominalFisherEstimation.Estimator.get_slope_constraint, ConstrainedNominalFisherEstimation.Estimator.set_slope_constraint)
del ConstrainedNominalFisherEstimation.Estimator.get_slope_constraint, ConstrainedNominalFisherEstimation.Estimator.set_slope_constraint

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
    return _estimation(algo, 
                       data,
                       response,
                       explanatories,
                       dict(Fisher_complete = NominalFisherEstimation.Estimator,
                            Fisher_proportional = ProportionalNominalFisherEstimation.Estimator,
                            Fisher_constrained = ConstrainedNominalFisherEstimation.Estimator),
                       **kwargs)