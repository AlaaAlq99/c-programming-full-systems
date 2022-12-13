#include <stdio.h>
int main(){
double studentscore[50];
char   studentname[50][50];
double studentavg = 0.0, sumscore = 0.0, averagescore = 0.0,highestscore =0.0;
int i = 0, stop = 0, k = 0;
do{
printf("Enter student name: ");
scanf("%s", &studentname[i]);
printf("Enter student score: ");
scanf("%lf", &studentscore[i]);
i++;
printf("More data? -1 to stop, others to continue: ");
scanf("%d", &stop);
} while(stop != -1);
printf("\n=================REPORT====================\n");
printf("Student Name\tScore\n");
printf("------------\t-----\n");
highestscore = studentscore[0];
for(k=0;k<=i-1;k++){
printf("%s\t\t%.2f\n",studentname[k],studentscore[k]);
sumscore = sumscore + studentscore[k];
if(highestscore < studentscore[k])
highestscore = studentscore[k];
}
printf("\nThe number of student is %d\n",i);
averagescore = sumscore / i;
printf("The average score for this class is %.2f\n", averagescore);
printf("\n================================================\n");
printf("Below The Average Students! Work Harder!\n");
printf("================================================\n");
printf("\nStudent Name\tScore\n");
printf("------------\t-----\n");
for(k=0;k<=i-1;k++){
if(studentscore[k] < averagescore)
printf("%s\t\t%.2f\n", studentname[k], studentscore[k]);
}
printf("\n================================================\n");
printf("Top Scorer Student! Congratulation!\n");
printf("================================================\n");
printf("\nStudent Name\tScore\n");
printf("------------\t-----\n");
for(k=0;k<=i-1;k++){
if(studentscore[k] == highestscore)
printf("%s\t\t%.2f\n", studentname[k], studentscore[k]);}
}