#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//char firstChar = 'V'; // cặp nháy đơn lưu một kí tự
	char firstChar = 'A'; 
	
	printf("The 1st letter in your name is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);// chỗ %d là mã số nguyên nên chấp nhận %d 
	
	firstChar += 32; //đổi sang thường
	
	printf("After converting to lower case...\n");
	printf("The 1st letter in your name now is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	return 0;
}
