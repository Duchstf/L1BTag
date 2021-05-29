import hls4ml

#Data Processing
import numpy as np
from numpy import loadtxt, expand_dims
import h5py
import sys

#ML model
import tensorflow.keras as keras
import tensorflow as tf
from tensorflow.keras.models import load_model

keras_model = load_model('../saved_model/L1BTagModel_Flatten.h5')

# Create conversion config
yaml_config = {}
yaml_config['KerasModel'] = keras_model
yaml_config['OutputDir'] = 'L1B_stream_parallel'
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
'ConvImplementation': 'linebuffer'
}}


hls_model = hls4ml.converters.keras_to_hls(yaml_config)
hls_model.compile()
hls_model.build(csim=False, reset = True)
hls4ml.report.read_vivado_report('L1B_stream_parallel')