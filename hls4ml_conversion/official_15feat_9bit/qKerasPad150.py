import numpy as np
from numpy import loadtxt, expand_dims
import h5py
import tensorflow as tf
from keras.models import load_model
import matplotlib.pyplot as plt
import sys
import random

with h5py.File('data/trainingDataTT_PUP_Pad150.h5', 'r') as hf:
    dataset = hf["Training Data"][:]

#Import jet data used to pT based sample weights
with h5py.File('data/sampleDataTT_PUP_Pad150.h5', 'r') as hf:
    sampleData = hf["Sample Data"][:]

#Split datasets into inputs & outputs
X = dataset[:,0:len(dataset[0])-1]
y = dataset[:,len(dataset[0])-1]

#Expand to be usable for Conv1D
X = expand_dims(X,axis=2)

#Establish bins and peform pT based sample weights
thebins = np.linspace(0, 360, 180)

bkgPts = []
sigPts = []
for i in range(len(sampleData)):
    if y[i]==1:
        sigPts.append(sampleData[i][0])
    if y[i]==0:
        bkgPts.append(sampleData[i][0])

bkg_counts, binsbkg = np.histogram(bkgPts, bins=thebins)
sig_counts, binssig = np.histogram(sigPts, bins=thebins)

a = []
for i in range(len(bkg_counts)):
    tempSig = float(sig_counts[i])
    tempBkg = float(bkg_counts[i])
    if tempBkg!=0:
        a.append(tempSig/tempBkg)
    if tempBkg==0:
        a.append(0)

#Normalize sample weights at higher pTs
for i in range(50,len(a)):
    a[i]=0.6

#Create weights in 1-to-1 ratio with training data
weights = []
for i in range(len(sampleData)):
    if y[i]==1:
        weights.append(1)
    if y[i]==0:
        jetPt = sampleData[i][0]
        tempPt = int(jetPt/2)
        if tempPt>178:
            tempPt = 178
        weights.append(a[tempPt])

import qkeras
from qkeras.utils import model_save_quantized_weights
from qkeras import QConv1D
from qkeras.qlayers import QDense, QActivation
from qkeras.quantizers import quantized_bits, quantized_relu
from tensorflow.keras.regularizers import l1

bits = 9
bits_int = 0
alpha_val = 1

bits_conv = 9

model = tf.keras.Sequential()
model.add(QConv1D(filters=20, kernel_size=15, strides=15,name='Conv1D_1',
    kernel_quantizer=quantized_bits(bits_conv,bits_int,alpha=alpha_val),
    bias_quantizer=quantized_bits(bits_conv,bits_int,alpha=alpha_val),
    kernel_initializer='lecun_uniform',# kernel_regularizer=l1(0.0001),
    input_shape=(len(dataset[0])-1,1)))
model.add(QActivation(activation=quantized_relu(bits), name='relu_1'))
model.add(QConv1D(filters=5, kernel_size=1,name='Conv1D_2',
    kernel_quantizer=quantized_bits(bits_conv,bits_int,alpha=alpha_val),
    bias_quantizer=quantized_bits(bits_conv,bits_int,alpha=alpha_val),
    kernel_initializer='lecun_uniform'))#, kernel_regularizer=l1(0.0001)))
model.add(QActivation(activation=quantized_relu(bits), name='relu_2'))
model.add(tf.keras.layers.Flatten())
model.add(QDense(20, name='Dense_1',
    kernel_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    bias_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    kernel_initializer='lecun_uniform'))#, kernel_regularizer=l1(0.0001)))
model.add(QActivation(activation=quantized_relu(bits), name='relu_3'))
model.add(QDense(10, name='Dense_2',
    kernel_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    bias_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    kernel_initializer='lecun_uniform'))#, kernel_regularizer=l1(0.0001)))
model.add(QActivation(activation=quantized_relu(bits), name='relu_4'))
model.add(QDense(1, name='output',
    kernel_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    bias_quantizer=quantized_bits(bits,bits_int,alpha=alpha_val),
    kernel_initializer='lecun_uniform'))#, kernel_regularizer=l1(0.0001)))
model.add(tf.keras.layers.Activation(activation='sigmoid', name='sigmoid'))

model.compile(loss='binary_crossentropy',optimizer='adam', metrics=['binary_accuracy'])
print(model.summary())
callback = tf.keras.callbacks.EarlyStopping(monitor='val_loss',verbose=2,patience=5)

model.fit(X,y,epochs=100,batch_size=len(X[0]),verbose=2,sample_weight=np.asarray(weights),validation_split=0.20,callbacks=[callback])


#Save model
model.save('qModel_9_0_1_Pad150.h5')


