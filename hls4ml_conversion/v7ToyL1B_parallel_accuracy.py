import hls4ml

#Data Processing
import sys

#ML model
from tensorflow.keras.models import load_model


#Just to efficiently save plots
plot_dir = "../plot/"
print("Saving plot to: ", plot_dir)
from datetime import datetime
now = datetime.now()
dt_string = now.strftime("%d-%m-%Y")
save_path = plot_dir + dt_string

keras_model = load_model('../saved_model/L1BTagModel_Flatten_LargerTinyv2.h5')

# Create conversion config
yaml_config = {}
yaml_config['KerasModel'] = keras_model
yaml_config['OutputDir'] = 'L1B_toy_v7'
yaml_config['ProjectName'] = 'myproject'
yaml_config['XilinxPart'] = 'xcvu9p-flgb2104-2-i'
yaml_config['ClockPeriod'] = 5
yaml_config['IOType'] = 'io_parallel'
yaml_config['Backend'] = 'Vivado'

yaml_config['HLSConfig'] = {
'Model': {
'Precision': 'ap_fixed<16,8>',
'ReuseFactor': 1,
'Strategy': 'Latency'}}


hls_model = hls4ml.converters.keras_to_hls(yaml_config)

hls_model.compile()
hls_model.build(csim=False, reset = True)
hls4ml.report.read_vivado_report('L1B_toy_v7')
