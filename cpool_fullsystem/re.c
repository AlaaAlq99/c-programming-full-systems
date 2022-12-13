#include <stdio.h>
int power (int base , int exponant);
void main (void){
	int m ,a,b;
	scanf("%d%d",&a,&b);
	m=power (a,b);
	printf(" power is %d",m);
}
int power (int base , int exponant){
	if (exponant <=0)
		return 1;
	return base * power (base ,exponant-1);
}