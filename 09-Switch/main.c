#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	Write a program that allows user inputting a simple expression 
//containing one of four operators +, -, *, / 
//then the result is printed out to the monitor. Input format:  
//num1 operator num2,
//Example: 4*5
double num1, num2, result;
char op;
printf("The operator is:");
scanf("%c", &op);
printf("The value of number 1 is:");
scanf("%lf", &num1);

printf("The value of number 2 is:");
scanf("%lf", &num2);


switch (op)

{case '+': result= num1+num2;
     printf("result=%lf", result);
     break;
case'-': result=num1-num2;
     printf("result=%lf", result);
     break;
case '/': if (num2==0)
    	printf("Divide by 0");
		else
		{result= num1/num2;
		printf("result=%lf", result);
		}
	break;
default: printf("Op is not supported");
}
	return 0;
}
