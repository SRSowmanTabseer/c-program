#include<stdio.h>
int main()
{
int c;
char nb[20];
char an[20];
char ca[10];
int p;
int e;
int id;
char s[20];
char is[20];
char r[20];
char up[20];
char nb2[20];
int id2;
int p2;
int di;
int z;
do
 {
printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
printf("1.ADD NEW BOOK\n");
printf("2.DISPLAY ALL BOOKS\n");
printf("3.SEARCH BOOK BY NAME\n");
printf("4.SEARCH BOOK BY ID\n");
printf("5.ISSUE BOOK\n");
printf("6.RETURN BOOK\n");
printf("7.UPTADE BOOK DETAILS\n");
printf("8.COUNT TOTAL BOOKS\n");
printf("9.DISPLAY AVAILABLE BOOKS\n");
printf("EXIT(!!!ENTER 0 TO EXIT!!!)\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&c);
if(c==0)
{break;}
switch(c)
  {
    case 1:
      printf("\n=======BOOKS AVAILABLE=======\n");
      printf("1.WINGS OF FIRE\n");
      printf("2.GOD OF WAR\n");
      printf("3.RICH DAD\n");
      printf("======ADD NEW BOOK======\n");
      printf("\nENTER THE BOOK NAME:");scanf("%c",&nb);
      printf("ENTER THE BOOK ID:");scanf("%d",&id);
      printf("ENTER THE AUTHOR NAME:");scanf("%s",&an);
      printf("ENTER THE CATEGORY:");scanf("%s",&ca);
      printf("ENTER THE PRICE:");scanf("%d",&p);
      printf("BOOK ADDED SUCCESSFULLY!!!!");
      printf("\nCLICK 1 TO BACK TO MENU!!!!\n!");
      scanf("%d",&e);
      break;

    case 2:
     printf("\n=======BOOKS AVAILABLE=======\n");
     printf("1.WINGS OF FIRE\n");
     printf("2.GOD OF WAR\n");
     printf("3.RICH DAD\n");
     printf("4.","%s",nb);
     printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
     scanf("%d",&e);
     break;

   case 3:
    printf("\nENTER THE BOOK NAME TO SEARCH");
    scanf("%s",&s);
    if(strcmp(s,nb)==0)
     {
       printf("THE SEARCHED BOOK IS AVAILABLE");
       }
    else
     {
      printf("BOOK IS NOT FOUND");
      }
     printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
     scanf("%d",&e);
     break;

    case 4:
     printf("\nENTER THE BOOK ID TO SEARCH");
     scanf("%d",di);
     if(id==di)
      {
       printf("THE SEARCHED BOOK IS AVAILABLE");
      }
     else
      {
       printf("THE SEARCHED BOOK IS NOT FOUND");
      }
     printf("\nCLICK 1 TO BACK TO MENU!!!!!\m");
     scanf("%d",&e);
     break;

    case 5:
     printf("\nENTER THE BOOK NAME TO ISSUE:");scanf("%s",&is);
     printf("\n!!!!THE","%s",is,"BOOK IS SUCCESSFULLY ISSUED!!!!!\n");
     printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
     scanf("%d",&e);
     break;

    case 6:
     printf("\nENTER THE RETURNED BOOK NAME");scanf("%s",&r);
     printf("\n!!!!","%s",r,"BOOK IS RETURNED SUCCESSFULLY!!!");
     printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
     scanf("%d",&e);
     break;

    case 7:
     printf("\n=======UPTADING SECTION=======\n");
     printf("ENTER THE NAME TO CHANGE:");scanf("%d",nb2);
     printf("\nENTER THE ID TO CHANGE:");scanf("%d",id2);
     printf("\nENTER THE PRICE:");scanf("%d",p2);
     printf("ENTER 1 TO SEE THE PREVIEW");
     scanf("%d",z);
     if(z==1)
      printf("==========PREVIEW==========");
      printf("NEW BOOK NAME:","%s",nb2);
      printf("ID NO:","%d",id2);
      printf("PRICE:","%d",p2);
      printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
      scanf("%d",&e);
     break;

     case 8:
      printf("TOTAL 10 BOOKS RE AVAILABLE");
      printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
      scanf("%d",&e);
      break;

     case 9:
      printf("TOTAL 10 BOOKS RE AVAILABLE");
      printf("\nCLICK 1 TO BACK TO MENU!!!!!\n");
      scanf("%d",&e);
      break;
    }
  }while(c!=10);
return 0;
}