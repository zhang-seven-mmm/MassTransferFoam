

all: msApp

msSrc ?= $(abspath ../)

USE_MINIFOAMX3=1
OFCs=$(shell find | grep -F .C | sed s:./::)
srcs=${msSrc}/libvoxel/voxelImage.cpp
OFincs =   meshTools finiteVolume
OFlibs =   meshTools finiteVolume #interFacePropsBCs
msCFLAGS += -DNoRepository

USE_ZLIB=1
USE_TIFF=1
USE_VXIMG=1
USE_OMP=1
USE_msMAKE=1
include  ../Makefile.in
