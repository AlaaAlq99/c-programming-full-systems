#include <stdio.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
#define over_delivery  5
void main (void){
	u32 name[50][50],count=0,i,highestscore;
	f32 score[100],average=0;
	s32 press;
	do{
	printf ("Enter Student Name : ");
	scanf ("%s",&name[count]);
	printf ("Enter the Score    : ");
	scanf ("%f",&score[count]);
	count++;
	printf ("More Items press  -1 to stop , press any Num to Continue : ");
	scanf("%d",&press);
	}
	while (press != -1 );
	highestscore= score[0];
	printf ("===============REPORT=============== \n");
	printf("Student Name\tScore\n");
    printf("------------\t-----\n");
	for (i=0 ; i<=count-1 ; i++){
    printf("%s\t\t%.2f\n",name[i],score[i]);
	average=average+score[i];
	if(highestscore < score[i])
       highestscore = score[i];
	}
    printf ("The Number Of Students is : %d\n",count);
	printf ("The Average of Scores  is : %f\n",average/2.00);
	printf ("======================================== \n");
    printf("Below The Average Students! Work Harder!\n");
    printf("========================================= \n");
	printf("Student Name\tScore\n");
    printf("------------\t-----\n");
	for (i=0 ; i<=count-1 ; i++){
		if (score[i]<average/2.00)
			printf("%s\t\t%.2f\n",name[i],score[i]);
}
    printf ("======================================== \n");
    printf("Top Scorer Student! Congratulation!\n");
    printf("========================================= \n");
	printf("Student Name\tScore\n");
    printf("------------\t-----\n");
    for (i=0 ; i<=count-1 ; i++){
    if(score[i]==highestscore)
	printf("%s\t\t%.2f\n",name[i],score[i]);
	}
}
