#include <stdio.h>
#include <math.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
void Features     (void);
void Add_Book     (void);
void Available    (void);
void Highest_Price(void);
void List         (void);
u32 book[10000][10000],Publisher[10000][10000],choise,a=0;
f32 price[100],high=0;
u32 i,j;
void main ( void ){
	Features();
	 do{
	    printf("Press The Number of Your Choise Featre :\n");
		scanf("%d",&choise);
		switch(choise){
			case 1:
			    Add_Book();
		    break;
		    case 2:
				Available();
		    break;
		    case 3:
		        Highest_Price();
		    break;
			case 4:
		        List();
		    break;
		    case 5:
			    printf("System is Stoped.\n");
		        return; 
		    break;
			 }
			 }
			 while (1);
}
void Features (void){
		printf("Welcome In Librarry System Choose Featre :\n");
		printf("1-Add Book Info.\n");
		printf("2-Display All Book Available.\n");
		printf("3-Display Highest Price Cost.\n");
		printf("4-Display List of Publishers.\n");
		printf("5-Exit.\n");
	}
void Add_Book (void){
        printf("Add New Book Info.\n");
		printf("Add Book Name     : ");
		scanf("%s",&book[a]);
		printf("Add Publisher Name: ");
		scanf("%s",&Publisher[a]);
		printf("Add Book Price    : ");
		scanf("%f",&price[a]);
	    a++;
	}
void Available    (void){
	printf("Display All Book Available.\n");
	for (i=0;i<a;i++){
		printf("Book Name     : %s\n",book[i]);
		printf("Publisher Name: %s\n",Publisher[i]);
		printf("Add Book Price: %f\n",price[i]);
		printf("\n");
	}	
	}
void Highest_Price(void){
	printf("Display Highest Price Cost.\n");
	high=price[0];
	for (i=0;i<a;i++){
		for (j=0;j<a;j++){
			if ( price[i]> high){
				high = price[i];
			}
		}
	}
	printf("The Highest Price is : %f\n",high);
}
void List    (void){
	printf("Display List of Publishers.\n");
	for (i=0;i<a;i++){
		printf("Publisher Name: %s for Book %d\n",Publisher[i],i+1);
	}	
	}