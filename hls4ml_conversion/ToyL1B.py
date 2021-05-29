import hls4ml

#Data Processing
import numpy as np
from numpy import loadtxt, expand_dims
import h5py
import sys

#ML model
import tensorflow.keras as keras
import tensorflow as tf
from tensorflow.keras.layers import Input, Dense,Flatten, Dropout, Activation, concatenate, BatchNormalization, GRU, Add, Conv1D, Conv2D, Concatenate
from tensorflow.keras.models import Model, Sequential, load_model


from sklearn.metrics import roc_curve
from sklearn.metrics import auc

#Plot settings
import matplotlib.pyplot as plt
import mplhep as hep
plt.style.use(hep.style.ROOT)

import matplotlib.pylab as pylab
params = {'legend.fontsize': 'medium',
         'axes.labelsize': 'x-large',
         'axes.titlesize':'x-large',
         'xtick.labelsize':'medium',
         'ytick.labelsize':'medium'}
pylab.rcParams.update(params)

#line thickness
import matplotlib as mpl
mpl.rcParams['lines.linewidth'] = 5

#Just to efficiently save plots
plot_dir = "../plot/"
print("Saving plot to: ", plot_dir)
from datetime import datetime
now = datetime.now()
dt_string = now.strftime("%d-%m-%Y")
save_path = plot_dir + dt_string

X_dummy = np.random.rand(10,9,1)

model = Sequential()
model.add(Conv1D(filters=5, kernel_size=3, strides=3, activation='relu',input_shape=X_dummy.shape[1:]))
model.add(Conv1D(filters=5, kernel_size=1,activation='relu'))
model.add(Flatten())
model.add(Dense(10, activation = 'relu'))
model.add(Dense(5, activation = 'relu'))
model.add(Dense(1, activation='sigmoid'))
model.compile(loss='binary_crossentropy',optimizer='adam', metrics=['binary_accuracy'])

model.summary()


# Create conversion config
yaml_config = {}
yaml_config['KerasModel'] = model
yaml_config['OutputDir'] = 'L1B_toy'
yaml_config['ProjectName'] = 'myproject'
yaml_config['XilinxPart'] = 'xcvu9p-flgb2104-2-i'
yaml_config['ClockPeriod'] = 5
yaml_config['IOType'] = 'io_stream'
yaml_config['Backend'] = 'Vivado'

yaml_config['HLSConfig'] = {
'Model': {
'Precision': 'ap_fixed<16,8>',
'ReuseFactor': 10,
'Strategy': 'Resource',
'ConvImplementation': 'linebuffer'},

'LayerType':{
    'Dense':{
        'Strategy': 'Latency'}
    }
}


hls_model = hls4ml.converters.keras_to_hls(yaml_config)

hls_model.compile()
hls_model.build(csim=False, reset = True)
hls4ml.report.read_vivado_report('L1B_toy')
