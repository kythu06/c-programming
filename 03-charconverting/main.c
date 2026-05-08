#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//  Viết app nho nhỏ nhập chữ cái đầu trong tên bạn - nhập chữ Hoa
//Sau đó in ra chữ thường
int main(int argc, char *argv[]) {
	
	char fL;
	printf("Input the 1st letter of your first name:");
	scanf("%c", &fL);
	printf("You have just input the character: %c\n", fL); // \n : LF kí hiệu cho xuống hang
	// \r: CR kí hiệu cho việc về đầu hàng
	// \b: backspace, xóa kí tự
	// \t: kí hiệu tab
	fL+=32;
	printf("And it is converted to lower case as \t \t \t: %c\n",fL);
	return 0;
}
