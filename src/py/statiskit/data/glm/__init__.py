import os
from statiskit.core import OrdinalSampleSpace, read_csv, controls

def load(*args):
    """Load data used in the statiskit.glm package"""

    if len(args) == 0:
        args = [arg for arg in os.listdir(os.path.join(os.path.dirname(__file__))) if arg.endswith('.csv')]
    else:
        args = [arg + '.csv' if not arg.endswith('.csv') else arg for arg in args]
    kwargs = {arg : None for arg in args}

    if 'retinopathy.csv' in kwargs:
        sample_spaces = []
        ordinal_sample_space = OrdinalSampleSpace(['0','1','2'])
        sample_spaces.append(ordinal_sample_space)
        sample_spaces.append(controls.ZZ)
        for i in [0,1,2]:
            sample_spaces.append(controls.RR)
        filepath = os.path.join(os.path.dirname(__file__), "retinopathy.csv")
        kwargs['retinopathy.csv'] = read_csv(filepath,
                                         header=True,
                                         sep=' ',
                                         sample_spaces=sample_spaces)   
    if 'cars.csv' in kwargs:
        filepath = os.path.join(os.path.dirname(__file__), "cars.csv")
        kwargs['cars.csv'] = read_csv(filepath,
                                         header=True,
                                         sep=',',
                                         outcomes=["CATEGORICAL", "CATEGORICAL", "CATEGORICAL"])

    for arg in kwargs.keys():
        if kwargs[arg] is None:
            kwargs[arg] = read_csv(os.path.join(os.path.dirname(__file__), arg),
                                   header=True,
                                   sep=',')

    if len(kwargs) == 1:
        return kwargs.popitem()[-1]
    else:
        return kwargs