import hls4ml

import tensorflow as tf
import qkeras
from qkeras.utils import load_qmodel
import numpy as np

import os
os.environ['PATH'] += os.pathsep + '/opt/Xilinx/Vivado/2019.2/bin'

model = load_qmodel('qModel_9_0_1_Pad150.h5')

hls4ml.model.optimizer.get_optimizer('output_rounding_saturation_mode').configure(layers=['Activation'], rounding_mode='AP_RND', saturation_mode='AP_SAT')

config = hls4ml.utils.config_from_keras_model(model, granularity='name', clock_period=2.5)
config['LayerName']['sigmoid']['exp_table_t'] = 'ap_fixed<18,4>'
config['LayerName']['sigmoid']['inv_table_t'] = 'ap_fixed<18,4>'
config['LayerName']['Conv1D_1_input']['Precision'] = 'ap_fixed<10,2>'
config['LayerName']['Conv1D_1']['ParallelizationFactor'] = 5
config['LayerName']['Conv1D_2']['ParallelizationFactor'] = 5
config['IOType']     = 'io_parallel'


for Layer in config['LayerName'].keys():
    if "Conv1D" in Layer:
        config['LayerName'][Layer]['Strategy'] = 'Latency'
        config['LayerName'][Layer]['ReuseFactor'] = 5
    elif "Dense" in Layer:
        config['LayerName'][Layer]['Strategy'] = 'Resource'
        config['LayerName'][Layer]['ReuseFactor'] = 5
    else:
        config['LayerName'][Layer]['Strategy'] = 'Latency'
        config['LayerName'][Layer]['ReuseFactor'] = 5

#hls4ml.model.flow.get_flow('vivado:optimize')._remove_optimizer('vivado:optimize_pointwise_conv')
hls_model = hls4ml.converters.convert_from_keras_model(model,
                                                       hls_config=config,
                                                       output_dir='qModel9/hls4ml_prj',
                                                       part='xcvu9p-flga2104-2L-e')
hls4ml.model.optimizer.get_optimizer('output_rounding_saturation_mode').configure(layers=[])
hls_model.compile()

import matplotlib
import h5py
from numpy import expand_dims
matplotlib.use('Agg')
import numpy as np

with h5py.File('data/testingDataTT_PUP_Pad150.h5', 'r') as hf:
    dataset = hf["Testing Data"][:]

A = dataset[:,0:len(dataset[0])-1]
b = dataset[:,len(dataset[0])-1]

A = expand_dims(A,axis=2)

from sklearn.metrics import roc_curve
from sklearn.metrics import auc
import matplotlib.pyplot as plt
import mplhep as hep
from sklearn.metrics import accuracy_score

plt.figure(1)

Ab_pred_keras = model.predict(A).ravel()
fpr_Ab, tpr_Ab, thresholds_Ab = roc_curve(b,Ab_pred_keras)
auc_Ab = auc(fpr_Ab,tpr_Ab)

Bc_pred_keras = hls_model.predict(np.ascontiguousarray(A)).ravel()
fpr_Bc, tpr_Bc, thresholds_Bc = roc_curve(b,Bc_pred_keras)
auc_Bc = auc(fpr_Bc, tpr_Bc)

plt.tight_layout()
plt.style.use(hep.style.CMS)
plt.plot(tpr_Ab,fpr_Ab,label='9-bit QKeras (area={:.3f})'.format(auc_Ab))
plt.plot(tpr_Bc,fpr_Bc,label='9-bit HLS (area={:.3f})'.format(auc_Bc))
plt.tick_params(labelsize=15)
plt.xlabel('b jet efficiency', fontsize=12)
plt.ylabel('Misidentification Probability', fontsize=12)
plt.yscale('log')
plt.ylim([10**(-2),1])
plt.title('Quantized b-tag NNs ROC',fontsize=18)
plt.legend(loc='lower right', fontsize=12)
plt.savefig('9bitModels_ROC.png')

#hls_model.build(csim=False,vsynth=True)

hls4ml.report.read_vivado_report('qModel9/hls4ml_prj')