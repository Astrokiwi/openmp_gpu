#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double square(double x) {
    return x*x;
}

int main( int argc, const char* argv[] )
{
    int L = 50;
    
    double *r = (double *)malloc(sizeof(double)*L*L);
    double x,y;
    
    for ( int ix=0 ; ix<L ; ix++ ) {
        for ( int iy=0 ; iy<L ; iy++ ) {
            x = (ix-L/2.)/L;
            y = (iy-L/2.)/L;
            r[ix*L+iy] = 1./(square(x)+square(y)+1.);
        }
    }
    
    printf("%f %f %f %g\n",r[(L/2)*(L+1)],r[(L/2)*(L)],r[L/2],r[0]);
	
	free(r);
}
