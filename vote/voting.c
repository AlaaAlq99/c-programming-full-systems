#include <stdio.h>
#include <math.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
void Features (void);
void Cast     (void);
void Count    (void);
void Leading  (void);

u8 choise,vote,a=0,o=0,h=0,z=0,s=0;
void main ( void ){
	Features();
	 do{
	    printf("Press The Number of Your Choise Featre :\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
			    Cast();
		    break;
		    case 2:
				Count();
		    break;
		    case 3:
		        Leading();
		    break;
		    case 4:
			    printf("System is Stoped.\n");
		        return; 
		    break;
			 }
			 }
			 while (1);
}
	void Features (void){
		printf("Welcome In Voting System Choose Featre :\n");
		printf("1-Cast The Vote.\n");
		printf("2-Find Vote Count.\n");
		printf("3-Find Leading Condidate.\n");
		printf("4-Exit.\n");
	}
	void Cast     (void){
		printf("Cast The Vote.\n");
		printf("1-Ahmed.\n");
		printf("2-Omar.\n");
		printf("3-Hassan.\n");
		printf("4-Zaki.\n");
		printf("5-Others.\n");
		printf("Input Your Choise : ");
		scanf("%d",&vote);
		if (vote == 1)
			a++;
		else if (vote == 2)
			o++;
		else if (vote == 3)
			h++;
		else if (vote == 4)
			z++;
		else if (vote > 4)
			s++;
		printf("Thank You For Vote !!.\n");
	}
	void Count    (void){
		printf("Find Vote Count.\n");
		printf("Ahmed        : %d\n",a);
		printf("Omar         : %d\n",o);
		printf("Hassan       : %d\n",h);
		printf("Zaki         : %d\n",z);
		printf("Spolid Votes : %d\n",s);
	}
	void Leading  (void){
		printf("Find Leading Condidate.\n");
		if (a>o && a>h && a>z )
			printf("The Winner Is Ahmed.\n");
		else if (o>a && o>h && o>z )
			printf("The Winner Is Omar.\n");
		else if (h>a && h>o && h>z )
			printf("The Winner Is Hassan.\n");
		else if (z>a && z>o && z>h )
			printf("The Winner Is Zaki.\n");
	}