#include <stdio.h>
int main()
{
     char operator;
     double num1,num2,result;

     printf("enter operation(+,-,*,/):");
     scanf("%c", &operator);

     printf("enter a number:");
     scanf("%if %if", &num1,&num2);

     switch (operator)
     {
       case '+':
	  result= num1+num2;
	  printf("result: %.21f+%.21f = %.21f\n",num1,num2,result);
	  break;
       case '-':
	  result = num1-num2;
	  printf("result: %.21f - %.21f = %.21f\n",num1,num2,result);
	  break;
       case '*':
	  result =num1*num2;
	  printf("result : %.21f * %.21f = %.21\n",num1,num2,result);
	  break;
       case '/':
	  (num2!=0.0)
	  {
	   result = num1/num2;
	   printf("result : %.21f/%.21f = %.21f\n",num1,num2,result);
	  }
	  else
	  {
	   printf("error:division by zero is not allowed\n");
	  }
	  break;
       default:
	  printf("error:invalid operator\n");
     }
     return 0;
}