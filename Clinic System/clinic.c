#include <stdio.h>
#include <math.h>
#include <F:\IMT SC\cots\Librarry\standard data types _lib\STD_TYPES.h>
#include <stdlib.h>
#define Right_Password  1234
u8 mode,i=0,count=0,choise , age_n , gender_n , check ;
u16 name_n;
u32 password,ID[10000],x=0,j,a=0,id,k,y,z1=0,z2=0,z3=0,z4=0,z5=0;
void Features    (void);
void Add_new     (void);
void Edit        (void);
void Slot        (void);
void cancel      (void);
void user        (void);
void Record      (void);
void Reservation (void);
typedef  struct  Information {
	u16 name[100][100];
	u8  age;
	u8  gender[100];
	u16 id;
	u8 slot;
}info;
info new_patient[10000];
void main ( void ){
	mode :
	printf ("Choose Mode A) Admin Press '1' B) User Press '2': ");
	scanf("%d",&mode);
	
	switch (mode){
		case 1:
			printf("Enter The Admin Password : ");
		    scanf("%d",&password);
			if (password == Right_Password){
			Features();
		            }
		else {
			for (i=1;i<=2;i++){
				printf(" Try again: ");
				scanf("%d",&password);
				if (password == Right_Password){
			         Features();
					 break;
		    }
			else
				count++;
			}
			if(count==2){
			printf("No More Tries The System Shall Stop\n");
		    return ;
		     }
			 
		}
			 do{
			 printf("Press The Number of Your Choise Featre :\n");
			 scanf("%d",&choise);
			 switch(choise){
				 case 1:
				  Add_new();
		         break;
		         case 2:
				  Edit();
		         break;
		         case 3:
		          Slot();
		         break;
		         case 4:
		          cancel();
		         break;
				 case 5:
				 goto mode; 
				 break;
			 }
			 }
			 while (1);
		break;
		case 2:
		  user();
		  do{
			 printf("Press The Number of Your Choise Featre :\n");
			 scanf("%d",&check);
			 switch(check){
				 case 1:
				 Record();
				 break;
				 case 2:
				 Reservation();
				 break;
				 case 3:
				 goto mode; 
				 break;
			 }
		  }
		  while(1);
		break;
	}
	return ;
	}
	void Features (void){
		printf("Welcome Admin Choose Featre :\n");
		printf("1-Add New Patient Record.\n");
		printf("2-Edit Patient Record.\n");
		printf("3-Reserve a Slot With a Doctor.\n");
	    printf("4-Cancel Reservation.\n");
		printf("5-Exit.\n");
	}
	void Add_new (void){
		printf("Add New Patient Record.\n");
		printf("Add Patient Name: ");
		scanf("%s",&new_patient[a].name);
		printf("Add Patient Age: ");
		scanf("%d",&new_patient[a].age);
		printf("Add Patient Gender: ");
		scanf("%s",&new_patient[a].gender);
		printf("Add Patient ID: ");
		scanf("%d",&new_patient[a].id);
			for (j=0;j<=a;j++){
		        if ( new_patient[a].id == ID[j]){
				    printf("This ID is Rejected Please Enter another ID.\n");
					break;
					x=1;
		                }
	                    }
		    if (x==0){
			    ID[a]= new_patient[a].id;
			         }
				  a++;
	}
	void Edit (void){
		printf("2-Edit Patient Record.\n");
		printf("Enter Patient ID: ");
		scanf("%d",&id);
		for (k=0;k<=a;k++){
		    if ( id == ID[k]){
				printf("Enter Edit Information : \n");
		        printf("Name : ");
		        scanf("%s",&new_patient[k].name);
		        printf("Age : ");
		        scanf("%d",&new_patient[k].age);
		        printf("Gender : ");
		        scanf("%s",&new_patient[k].gender);
				y=1;
			    break;
		        }
		}
			if (y==0){
				printf("This ID is Not Found.\n");
			}
	            }
	void Slot (void){
		printf("Reserve a Slot With a Doctor.\n");
		printf("Available Slots is : \n");
		if (z1==0)
		printf("From 2:00 to 2:30\n");
	    if (z2==0)
		printf("From 2:30 to 3:00\n");
	    if (z3==0)
		printf("From 3:00 to 3:30\n");
	    if (z4==0)
		printf("From 3:30 to 4:00\n");
	    if (z5==0)
		printf("From 4:00 to 4:30\n");
	
		printf("Enter Patient ID:");
		scanf("%d",&id);
		for (k=0;k<=a;k++){
		    if ( id == ID[k]){
				printf("Enter Num of Your Desird Slot :");
				scanf("%d",&new_patient[k].slot);
				if (new_patient[k].slot==1){
					printf("Your Slot From 2:00 to 2:30\n");
			        z1++;
				}
		        if (new_patient[k].slot==2){
					printf("Your Slot From 2:30 to 3:00\n");
			        z2++;
				}
		        if (new_patient[k].slot==3){
					printf("Your Slot From 3:00 to 3:30\n");
			        z3++;
				}
		        if (new_patient[k].slot==4){
					printf("Your Slot From 3:30 to 4:00\n");
			        z4++;
				}
		        if (new_patient[k].slot==5){
					printf("Your Slot From 4:00 to 4:30\n");
			        z5++;
				}
				y=1;
			    break;
		        }
		}
			if (y==0){
				printf("This ID is Not Found.\n");
			}
	            }
	void cancel (void){
		printf("Cancel Reservation.\n");
		printf("Enter Patient ID:");
		scanf("%d",&id);
		for (k=0;k<=a;k++){
		    if ( id == ID[k]){
				if (new_patient[k].slot==1){
					new_patient[k].slot=0;
			        z1=0;
				}
		        if (new_patient[k].slot==2){
					new_patient[k].slot=0;
			        z2=0;
				}
		        if (new_patient[k].slot==3){
					new_patient[k].slot=0;
			        z3=0;
				}
		        if (new_patient[k].slot==4){
					new_patient[k].slot=0;
			        z4=0;
				}
		        if (new_patient[k].slot==5){
					new_patient[k].slot=0;
			        z5=0;
				}
				y=1;
			    break;
		        }
		}
			if (y==0){
				printf("This ID is Not Found.\n");
			}
	}
	void user  (void){
		printf("Welcome User Choose Featre :\n");
		printf("1-Veiw Patient Record.\n");
		printf("2-View Today's Reservations.\n");
        printf("3-Exit.\n");		
	}
	void Record (void){
		printf("Veiw Patient Record.\n");
		printf("Enter Patient ID:");
		scanf("%d",&id);
		for (k=0;k<=a;k++){
		    if ( id == ID[k]){
				printf("Name   : %s\n",new_patient[k].name);
				printf("Age    : %d\n",new_patient[k].age);
				printf("Gender : %s\n",new_patient[k].gender);
				printf("Slot   : ");
				if (new_patient[k].slot==1){
					printf("Your Slot From 2:00 to 2:30\n");
				}
		        if (new_patient[k].slot==2){
					printf("Your Slot From 2:30 to 3:00\n");
				}
		        if (new_patient[k].slot==3){
					printf("Your Slot From 3:00 to 3:30\n");
				}
		        if (new_patient[k].slot==4){
					printf("Your Slot From 3:30 to 4:00\n");
				}
		        if (new_patient[k].slot==5){
					printf("Your Slot From 4:00 to 4:30\n");
				}
				y=1;
			    break;
		        }
		}
			if (y==0){
				printf("This ID is Not Found.\n");
			}
	}
	void Reservation (void){
		printf("View Today's Reservations.\n");
        for (k=0;k<=a;k++){
            if (new_patient[k].slot>0){
			    if (new_patient[k].slot==1){
					printf("2:00 to 2:30\n");
					printf("ID Is : %d \n",new_patient[k].id);
				}
		        if (new_patient[k].slot==2){
					printf("2:30 to 3:00\n");
					printf("ID Is : %d \n",new_patient[k].id);
				}
		        if (new_patient[k].slot==3){
					printf("3:00 to 3:30\n");
					printf("ID Is : %d \n",new_patient[k].id);
				}
		        if (new_patient[k].slot==4){
					printf("3:30 to 4:00\n");
					printf("ID Is : %d \n",new_patient[k].id);
				}
		        if (new_patient[k].slot==5){
					printf("4:00 to 4:30\n");
					printf("ID Is : %d \n",new_patient[k].id);
				}	
			}			
	}
	}