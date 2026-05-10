#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Write a C program that takes a positive integer as input and checks whether it is a prime number or not.
int main(int argc, char *argv[]) {
	int num, i, a;
	printf("The value of number is :");
	scanf("%d", &num);
	
	if (num <2){

		printf("This is not the prime number");
		return 0;
	}
	for (i=2; i<=num/2; ++i){
	
		if (num%i==0){
		a=0;
		break;
	}
			}
			if (a)
				printf("%d is a prime number. \n",num);
			else
				printf ("%d is not a prime number.\n", num);	
	return 0;
	
}
