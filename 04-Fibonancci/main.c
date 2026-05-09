#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//A person saves money in a bank using a special method:
//In the first week, they deposit 0 units.
//In the second week, they deposit 1 unit.
//From the third week onward, each week they deposit an amount equal to the sum of the previous two weeks’ deposits, following the Fibonacci sequence.
//Write a C program to:
//Input the number of weeks n the person saves money.
//Calculate and display the total amount of money deposited after n weeks. ( chưa làm)
int main(int argc, char *argv[]) {
	int n1=0, n2=1, i, num, n3;
	printf("Enter the number of week:");
	scanf("%d",&num);
	printf("\n%d %d", n1, n2);
	for (i=2; i<num; ++i)
		{n3=n1+n2;
		printf(" %d", n3);
		n1=n2;
		n2=n3;
	

		}
	
	return 0;
}
