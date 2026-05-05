#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viết app nhập vào năm sinh của bạn
// và nhập thêm kí tự đầu tiên trong tên bạn
//sau đó in ra: năm sinh, tuổi, kí tự tên
int main(int argc, char *argv[]) {
	int yob, age ;
	char fL;
	 
	 printf("You are required to input your profile\n");
	 
	 printf("1st, input your yob: ");
	 scanf("%d", &yob);
	 
	 age = 2025 - yob;
	 //trước khi nhập chuỗi phải xóa bộ đệm
	 fflush(stdin); //flush:dọn
	                //std in : standard input
	                //vùng ram chuẩn dành cho việc nhập data
	 printf("2nd, input your 1st letter in your first name: ");
	 scanf(" %c", &fL);
	 
	 
	 printf("Your profile is:\n");
	 printf("Your yob: %d\n", yob);
	 printf("Your age: %d\n", age);
	 printf("Your name (brief): %c\n", fL);
	 
	 //nhập vào từ bàn phím 2 con số nguyên x, y. Sau đó in ra tổng của chúng
	 int x, y;
	 printf("You are required to input two integers:");
	 scanf("%d", &x);
	 scanf("%d", &y);
	 
	 printf("The sum of %d and %d is %d\n", x, y, (x+y));
	 
	 
	return 0;
}
