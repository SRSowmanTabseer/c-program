#include <stdio.h>
int main()
{

int pin=4321;
int pin1;
int attempt=0;
int maxattempt=3;
while(attempt<maxattempt)
{
 printf("enter number");
 scanf("%d",&pin1);
 if (pin==pin1)
 {
 printf("pin verified");
 break;
 }
 else
 {
 attempt++;
 printf("wrong pin",maxattempt - attempt);
 }

 }
 if (attempt==maxattempt)
 {
 printf("try again later");
 }
 return 0;
}

