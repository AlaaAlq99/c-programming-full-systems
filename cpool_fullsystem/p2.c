#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
void main (void){
	u8 test[26] ,student1[26], check1[26];
	u32 i,x,j=0,k,count1=0;
    printf("Enter Test Solution \n");
	for (i=0 ; i<25; i++)
		scanf("%c",&test[i]);
	    scanf("%c",&test[i]);
	    test[i] = '\0';
	for (k=1;k<=3;k++){
		printf("Enter The Response of Student-%d \n",k);
		count1=0;
	for (x=0 ; x<25; x++)
		scanf("%c",&student1[x]);
	    scanf("%c",&student1[x]);
	    student1[x]= '\0';
		for (i=0 ; i<25; i++){
		if (student1[i] == test[i]){
			count1++;
		}
		else {
			check1[j]=i+1;
			j++;
			}
}
	printf ("\n Score is %d  out of 25\n",count1);
	for (i=0 ; i<25-count1 ; i++){
		    printf("Response of Items below are Wrong : %d\n",check1[i]);
	}
	}
}

// a b c d a b c d c d a b a 