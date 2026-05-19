#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Write a program that will calculate 1+2+3+…+n.
int main(int argc, char *argv[]) {
	
	int n, i, sum = 0;
	printf("n=");
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++){
			sum= sum +i;
	}
	printf ("Sum = %d\n", sum);
	
	system ("pause");
	return 0;
}
