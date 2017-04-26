from functools import wraps
from statiskit.core.event import (MultivariateEvent,
                                      VectorEvent, 
                                  CategoricalElementaryEvent,
                                  DiscreteElementaryEvent,
                                  ContinuousElementaryEvent)

import _glm
from __glm.statiskit import (ScalarPredictor, 
                                CompleteScalarPredictor)

__all__ = ['CompleteScalarPredictor']

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
                if isinstance(component, basestring):
                    event[index] = CategoricalElementaryEvent(component)
                elif isinstance(component, int):
                    event[index] = DiscreteElementaryEvent(component)
                elif isinstance(component, float):
                    event[index] = ContinuousElementaryEvent(component)
                elif not isinstance(component, UnivariateEvent):
                    raise TypeError('\'events\' parameters')
            # event = VectorEvent(event)
        if not isinstance(event, MultivariateEvent):
            raise TypeError('\'event\' parameter')
        return f(self, event)
    return __call__
    
CompleteScalarPredictor.__call__ = wrapper_call(CompleteScalarPredictor.__call__)