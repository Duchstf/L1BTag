import hls4ml

#Data Processing
import sys

#ML model
from tensorflow.keras.models import load_model

keras_model = load_model('../saved_model/L1BTagModel_15_feat_TTdXYPup.h5')
model_tag = 'L1B_v10_15feat'

# Create conversion config
yaml_config = {}
yaml_config['KerasModel'] = keras_model
yaml_config['OutputDir'] = model_tag
yaml_config['ProjectName'] = 'myproject'
yaml_config['Part'] = 'xcvu9p-flgb2104-2-i'
yaml_config['ClockPeriod'] = 5
yaml_config['IOType'] = 'io_parallel'
yaml_config['Backend'] = 'Vivado'

yaml_config['HLSConfig'] = {
'Model': {
'Precision': 'ap_fixed<16,8>',
'ReuseFactor': 5,
'Strategy': 'Latency'}}


hls_model = hls4ml.converters.keras_to_hls(yaml_config)

hls_model.compile()
hls_model.build(csim=False, reset = True)
hls4ml.report.read_vivado_report(model_tag)
