import os
from statiskit.core import OrdinalSampleSpace, read_csv, controls

def load(*args):
    """Load data used in the statiskit.glm package"""

    kwargs = {arg : None for arg in args}
    
    if 'car_preferences' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "car_preferences.csv")
        kwargs['car_preferences'] = read_csv(filepath, header=False, sep=',')

    if 'car_preferences_dispatch' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "car_preferences_dispatch.csv")
        kwargs['car_preferences_dispatch'] = read_csv(filepath, header=True, sep=';')

    if 'iris_Fisher' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "iris_Fisher.csv")
        kwargs['iris_Fisher'] = read_csv(filepath, header=False, sep=', ')  

    if 'travel_Melbourne_Sydney' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "travel_Melbourne_Sydney.csv")
        kwargs['travel_Melbourne_Sydney'] = read_csv(filepath, header=True, sep=',')    

    if 'retinopathy' in kwargs or len(args) == 0:
        sample_spaces = []
        ordinal_sample_space = OrdinalSampleSpace(['0','1','2'])
        sample_spaces.append(ordinal_sample_space)
        sample_spaces.append(controls.ZZ)
        for i in [0,1,2]:
            sample_spaces.append(controls.RR)
        filepath = os.path.join(os.path.dirname(__file__), "retinopathy.csv")
        kwargs['retinopathy'] = read_csv(filepath, header=True, sep=' ', sample_spaces=sample_spaces)                  

    args = [kwargs[arg] for arg in args]

    if len(args) == 1:
        return args.pop()
    else:
        return args