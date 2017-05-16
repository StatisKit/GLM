from functools import wraps

import _glm
from __glm.statiskit.glm import (NominalFisherEstimation,
                                    ProportionalNominalFisherEstimation)

__all__ = ['nominal_regression_estimation']


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
                            Fisher_proportional = ProportionalNominalFisherEstimation.Estimator),
                       **kwargs)