

all: msApp

msSrc ?= $(abspath ../)

USE_MINIFOAMX3=1
OFCs=$(shell find | grep -F .C | sed s:./::)
OFincs =  finiteVolume 
OFlibs =  finiteVolume 

#msCFLAGS += -I../interFacePropsBCs -I../interFacePropsBCs/alphaContactAngle -I../upscale_grads
USE_ZLIB=1
USE_TIFF=1
USE_VXIMG=1
USE_OMP=1
USE_msMAKE=1
include  ../Makefile.in
