#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	// Module 1: Input Handling
int getInput() {
	int n;
	printf ("Enter a number: ");
	scanf("%d", &n);
	return n;
	
}
// Module 2: Summing Divisors
 int sumOfDivisors(int n) {
 	int sum = 0;
 	for (int i = 1; i<=n; i++) {
 		if (n%i ==0) {
 			sum+=i;
		 }
	 }
	 return sum;
 }
 
 //Module 3: Printing Divisors
 void printDivisors(int n) {
	printf("Divisors of %d are: ",n);
	for (int i = 1; i<=n; i++){
		if (n%i ==0){
			printf("%d ", i);
		}
	}
	printf ("\n");
 }
 // Main Program
 int main() {
 	//Input
 	int n = getInput();
 	
 	//Processing
 	int sum = sumOfDivisors(n);
 	
 	//Output
 	printf("The sum of divisors of %d is: %d\n", n, sum);
 	printDivisors(n);
 	
	 return 0;
}
	
