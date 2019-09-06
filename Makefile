default:
	clang -fopenmp test.c -o test

noparallel:
	clang test.c -o test