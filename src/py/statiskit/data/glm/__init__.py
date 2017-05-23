import os
from statiskit.core import OrdinalSampleSpace, read_csv

def load(*args):
    """Load data used in the statiskit.glm package"""

    kwargs = {arg : None for arg in args}
    
    if 'car_preferences(age_as_factor)' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "car_preferences(age_as_factor).csv")
        kwargs['car_preferences(age_as_factor)'] = read_csv(filepath, header=False, sep=',')

    if 'car_preferences(age_as_factor)_dispatch' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "car_preferences(age_as_factor)_dispatch.csv")
        kwargs['car_preferences(age_as_factor)_dispatch'] = read_csv(filepath, header=False, sep=';')

    if 'car_preferences_dispatch' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "car_preferences_dispatch.csv")
        kwargs['car_preferences_dispatch'] = read_csv(filepath, header=True, sep=';')

    if 'iris_Fisher' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "iris_Fisher.csv")
        kwargs['iris_Fisher'] = read_csv(filepath, header=False, sep=', ')  

    if 'travel_Hensher' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "travel_Hensher.csv")
        kwargs['travel_Hensher'] = read_csv(filepath, header=True, sep=',')              
        
    args = [kwargs[arg] for arg in args]

    if len(args) == 1:
        return args.pop()
    else:
        return args