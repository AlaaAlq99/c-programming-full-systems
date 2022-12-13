#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
#define over_delivery  5
void main (void){
	u32 item[100];
	f32 price,over_shipping;
	s32 press;
	do{
	printf ("Enter the Item Name ");
	scanf ("%s",&item);
	printf ("Enter the Price ($) ");
	scanf ("%f",&price);
	if (price < 10)
		over_shipping = 2;
	else
		over_shipping = 3;
	printf("In Voice in ($)\n");
	printf("Prise is            %f\n",price);
	printf("over_shipping is    %f\n",over_shipping+over_delivery);
	printf("Total         is    %f\n",price+over_shipping+over_delivery);
	printf ("More Items press  -1 to stop , press any Num to Continue : ");
	scanf("%d",&press);
	}
	while (press != -1 );
}
