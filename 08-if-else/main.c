#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Example 1: 
//Buying  N T-shirts with promotion: 
//N<=3:     120000$/item
//From 4th to 6th:       90000$/item
//From 7th to 10th:     85000$/item
//From 11th :	       70000$/item
//Describe the expression that will compute the paid value.
int N,t;// N: number of T-shirts bought, t: money must be paid
printf("N=");
scanf("%d",&N);
if (N<=3) t= N*120000;
else if (N<=6) t= 3*120000+(N-3)*90000;
else if (N<=10)
t=3*120000+3*90000+(N-6)*85000;
else
t=3*120000+3*90000+4*85000+(N-10)*70000;
printf("t=%d", t);


	return 0;
}
