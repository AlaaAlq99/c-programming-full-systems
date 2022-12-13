#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
#define over_delivery  5
void main (void){
	f32 p,p1,cost,cost1;
    for (p = 0; p <= 10; p+=0.1){
    cost = 40 - (8 * p) + (p * p);
    if(p == 0){
    cost1 = cost;
    continue;
    }
    if (cost < cost1){
     cost1 = cost;
     p1 = p;
      }
    }
    printf("\nMINIMUM COST = %.2f AT p = %.1f\n",cost1, p1);
}
