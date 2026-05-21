#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Write a program that will print out the ASCII table.
int main(int argc, char *argv[]) {
	int code = 0;
	while (code<256){
	
		printf ("%c, %3d, %3o, &3X\n", code, code, code, code);
		code++;
	}
	return 0;
}
