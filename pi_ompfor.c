#include<omp.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ITERATIONS 1000000000
#define NUM_THREADS 2

int main() {
 long i;
 double pi;

 #pragma omp parallel for num_threads(NUM_THREADS) reduction(+:pi)
 for(i=0;i<ITERATIONS;i++){
  if ( i%2 == 0 )
  {
   pi += 1 * ( 1.0 / ( 2 * i + 1 ) );
  } else {
   pi += -1 * ( 1.0 / ( 2 * i + 1 ) );

 }

 printf("Pi: %f",4*pi);

}
