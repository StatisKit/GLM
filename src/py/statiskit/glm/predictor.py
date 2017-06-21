from functools import wraps
from statiskit.core.event import (MultivariateEvent,
                                    VectorEvent)

import _glm
from __glm.statiskit import (ScalarPredictor, 
                                CompleteScalarPredictor,
                            VectorPredictor,
                                CompleteVectorPredictor,
                                ProportionalVectorPredictor,
                                ConstrainedVectorPredictor)

__all__ = ['CompleteScalarPredictor',
            'CompleteVectorPredictor',
            'ProportionalVectorPredictor',
            'ConstrainedVectorPredictor']


ScalarPredictor.explanatory_space = property(ScalarPredictor.get_explanatory_space)
del ScalarPredictor.get_explanatory_space

#del ScalarPredictor.set_beta

CompleteScalarPredictor.delta = property(CompleteScalarPredictor.get_delta, CompleteScalarPredictor.set_delta)
del CompleteScalarPredictor.get_delta, CompleteScalarPredictor.set_delta


VectorPredictor.explanatory_space = property(VectorPredictor.get_explanatory_space)
del VectorPredictor.get_explanatory_space

#del VectorPredictor.set_beta

for cls in [CompleteVectorPredictor, ProportionalVectorPredictor]:
    cls.alpha = property(cls.get_alpha, cls.set_alpha)
    cls.delta = property(cls.get_delta, cls.set_delta)
    del cls.get_alpha, cls.set_alpha, cls.get_delta, cls.set_delta


def wrapper_call(f):
    @wraps(f)
    def __call__(self, *events):
        if len(events) == 1:
            event = events[-1]
        else:
            event = None
        if not isinstance(event, MultivariateEvent):
            event = VectorEvent(len(events))
            for index, component in enumerate(events):
                event[index] = self.explanatory_space[index](component)
        if not isinstance(event, MultivariateEvent):
            raise TypeError('\'event\' parameter')            
        return f(self, event)
    return __call__    

ScalarPredictor.__call__ = wrapper_call(ScalarPredictor.__call__)
VectorPredictor.__call__ = wrapper_call(VectorPredictor.__call__)