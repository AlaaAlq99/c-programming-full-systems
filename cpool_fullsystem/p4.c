#include <stdio.h>
#include <math.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
u32 power (u32 num);
void main (void){
	u32 n,i,count=0,y=0,x;
	printf ("Enter The Size of Array : ");
	scanf("%d",&n);
	u32 arr[n];
	for(i=0;i<n;i++){
	    printf ("The Elements[%d] of Array : \n",i);
	    scanf ("%d",&arr[i]);
		if (arr[i]==1){
			count++;
			continue;
		}
		x = power (arr[i]);
		if (x)
			count++;
		else
			y++;
	}
	printf ("%d of Elements of Array     Result from 3 power n : \n",count);
	printf ("%d of Elements of Array Not Result from 3 power n : \n",y);
	}
	u32 power (u32 num){
		while(num%3 == 0){
		 num = num/3;
		 if (num/3 == 1){
			 return 1;
		 }
	     }
		 if (num/3 != 1){
			 return 0;
		 }
	}