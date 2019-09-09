# IRIDIS
# module add intel-compilers/19.0.3
CC=icc
OMPFLAGS=-qopenmp -qopenmp-offload=host
# CC=gcc
# OMPFLAGS=-fopenmp -foffload="-lm”

default:
	$(CC) $(OMPFLAGS) test.c -o gpu_test

noparallel:
	$(CC) test.c -o serial_test