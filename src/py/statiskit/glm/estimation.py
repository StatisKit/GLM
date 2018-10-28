from functools import wraps
from statiskit.core import estimation
from statiskit.core.data import UnivariateConditionalData
from statiskit.core.estimation import (active_estimation_decorator,
                                       optimization_estimation_decorator)
from statiskit.core.distribution import (NormalDistribution,
                                         LogisticDistribution,
                                         LaplaceDistribution,
                                         CauchyDistribution)
from .link import NominalLink, OrdinalLink, BinaryLink
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
                                     BinaryRegressionFisherEstimation,
                                  _CategoricalRegressionFisherEstimation,
                                         NominalRegressionFisherEstimation,
                                         OrdinalRegressionFisherEstimation,
                                  HierarchicalRegressionEstimation,
                                  Design,
                                         CompleteDesign,
                                         ProportionalDesign,
                                         ConstrainedDesign,
                                 CategoricalFisherInitialization,
                                         CategoricalFisherObservedInitialization,
                                         CategoricalFisherUniformInitialization,
                                         CategoricalFisherCustomInitialization)

__all__ = ['poisson_estimation',
           'binomial_estimation',
           'negative_binomial_estimation',
           'binary_estimation',
           'nominal_estimation',
           'ordinal_estimation',
           'hierarchical_estimation']

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

def vector_regression_fisher_estimator_decorator(cls):
    cls.Estimator.link = property(cls.Estimator.get_link, cls.Estimator.set_link)
    del cls.Estimator.get_link, cls.Estimator.set_link

    cls.Estimator.design = property(cls.Estimator.get_design, cls.Estimator.set_design)
    del cls.Estimator.get_design, cls.Estimator.set_design

    cls.Estimator.initialization = property(cls.Estimator.get_initialization, cls.Estimator.set_initialization)
    del cls.Estimator.get_initialization, cls.Estimator.set_initialization

    cls.loglikelihood = property(cls.get_loglikelihood)
    del cls.get_loglikelihood

    cls.loglikelihood_sequence = property(cls.get_loglikelihood_sequence)
    del cls.get_loglikelihood_sequence

    # cls.information_inverse = property(cls.get_information_inverse)
    # del cls.get_information_inverse

    cls.converged = property(cls.get_converged)
    del cls.get_converged

for cls in _CategoricalRegressionFisherEstimation:
    vector_regression_fisher_estimator_decorator(cls)


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

def binary_estimation(algo='Fisher', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    if 'distribution' in kwargs:
        kwargs['link'] = BinaryLink(link = "F", distribution=kwargs.pop('distribution'))
    return _estimation(algo, 
                       __data,
                       dict(Fisher = BinaryRegressionFisherEstimation.Estimator),
                       **kwargs)

ConstrainedDesign.intercept_constraint = property(ConstrainedDesign.get_intercept_constraint, ConstrainedDesign.set_intercept_constraint)
del ConstrainedDesign.get_intercept_constraint, ConstrainedDesign.set_intercept_constraint
ConstrainedDesign.slope_constraint = property(ConstrainedDesign.get_slope_constraint, ConstrainedDesign.set_slope_constraint)
del ConstrainedDesign.get_slope_constraint, ConstrainedDesign.set_slope_constraint

CategoricalFisherCustomInitialization.beta = property(CategoricalFisherCustomInitialization.get_beta, CategoricalFisherCustomInitialization.set_beta)
del CategoricalFisherCustomInitialization.get_beta, CategoricalFisherCustomInitialization.set_beta

def _categorical_estimation(Z, init, cdata, **kwargs):
    if Z == 'complete':
        kwargs['design'] = CompleteDesign()
    elif Z == 'proportional':
        kwargs['design'] = ProportionalDesign()
    elif Z == 'constrained':
        design = ConstrainedDesign()
        if 'partial_proportional' in kwargs:
            design.slope_constraint = ConstrainedVectorPredictor.partial_proportional_constraint(cdata, kwargs.pop('partial_proportional'))
        if 'slope_constraint' in kwargs:
            design.slope_constraint = kwargs.pop('slope_constraint')
        if 'intercept_constraint' in kwargs:
            design.intercept_constraint = kwargs.pop('intercept_constraint')
        kwargs['design'] = design
    if init == 'observed':
        kwargs['initialization'] = CategoricalFisherObservedInitialization()
    elif init == 'uniform':
        kwargs['initialization'] = CategoricalFisherUniformInitialization()
    elif init == 'custom':
        if 'beta' in kwargs:
            kwargs['initialization'] = CategoricalFisherCustomInitialization(kwargs.pop('beta'))
        else:
            assert("beta parameter is missing")
    return kwargs


def nominal_estimation(Z='complete', algo='Fisher', init='observed', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    kwargs = _categorical_estimation(Z, init, __data, **kwargs)
    if 'distribution' in kwargs:
        kwargs['link'] = NominalLink(ratio='reference', distribution=kwargs.pop('distribution'))
    else:
        kwargs['link'] = NominalLink()
    return _estimation(algo, 
                       __data,
                       dict(Fisher = NominalRegressionFisherEstimation.Estimator),
                       **kwargs)

def ordinal_estimation(Z='complete', algo='Fisher', init='observed', data=None, **kwargs):
    """
    """
    __data, kwargs = _data(data, False, **kwargs)
    kwargs = _categorical_estimation(Z, init, __data, **kwargs)
    if 'ratio' in kwargs:      
        if 'distribution' in kwargs:
            kwargs['link'] = OrdinalLink(ratio=kwargs.pop('ratio'), distribution=kwargs.pop('distribution'))
        else:
            kwargs['link'] = OrdinalLink(ratio=kwargs.pop('ratio'))
    else:
        if 'distribution' in kwargs:
            kwargs['link'] = OrdinalLink(ratio='adjacent', distribution=kwargs.pop('distribution'))        
        else:
            kwargs['link'] = OrdinalLink()
    return _estimation(algo, 
                       __data,
                       dict(Fisher = OrdinalRegressionFisherEstimation.Estimator),
                       **kwargs)

HierarchicalRegressionEstimation.Estimator.default_estimator = property(HierarchicalRegressionEstimation.Estimator.get_default_estimator, HierarchicalRegressionEstimation.Estimator.set_default_estimator)
del HierarchicalRegressionEstimation.Estimator.get_default_estimator, HierarchicalRegressionEstimation.Estimator.set_default_estimator

def wrapper__getitem__(f):
    @wraps(f)
    def __getitem__(self, value):
        if isinstance(value, str):
            return f(self, value)
        else:
            raise TypeError('\'value\' parameter')
    return __getitem__

HierarchicalRegressionEstimation.Estimator.__getitem__ = wrapper__getitem__(HierarchicalRegressionEstimation.Estimator.get_estimator)
del HierarchicalRegressionEstimation.Estimator.get_estimator

def wrapper__setitem__(f):
    @wraps(f)
    def __setitem__(self, value, estimator):
        if isinstance(value, str):
            return f(self, value, estimator)
        else:
            raise TypeError('\'value\' parameter')
    return __setitem__

HierarchicalRegressionEstimation.Estimator.__setitem__ = wrapper__setitem__(HierarchicalRegressionEstimation.Estimator.set_estimator)
del HierarchicalRegressionEstimation.Estimator.set_estimator

def wrapper__getitem__(f):
    @wraps(f)
    def __getitem__(self, value):
        if isinstance(value, str):
            return f(self, value)
        else:
            raise TypeError('\'value\' parameter')
    return __getitem__

HierarchicalRegressionEstimation.__getitem__ = wrapper__getitem__(HierarchicalRegressionEstimation.get_estimation)
del HierarchicalRegressionEstimation.get_estimation

def hierarchical_estimation(default = None, data = None, **kwargs):
    lazy = kwargs.pop('lazy', False)
    __data, kwargs = _data(data, False, **kwargs)
    estimator = HierarchicalRegressionEstimation.Estimator()
    if default is not None:
        estimator.default_estimator = default
    for arg in list(kwargs.keys()):
        estimator[arg] = kwargs.pop(arg)
    if __data:
        return estimator(__data, lazy)
    else:
        return estimator