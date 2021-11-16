#include <immintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myblas.h"


int main( void ) {

    const int N = 2000000;
    printf( "Running FAXPY operation of size %d \n", N );
    float *X = (float *) malloc( N *  sizeof(float) ); // First
    float *Y = (float *) malloc( N *  sizeof(float) ); // Second
    float *result = (float *) malloc( N * sizeof(float) ); // Third

    // Carry out operation
    faxpyo( N, 1.0, X, Y, result );

    // Free up the memory
    _mm_free( X );
    _mm_free( Y );
    _mm_free( result );

    return 1;
}
