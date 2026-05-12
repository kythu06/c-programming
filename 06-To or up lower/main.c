#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Nhập vào một chuỗi ký tự ngẫu nhiên và in ra màn hình chuỗi đó với các nguyên âm đc in hoa
int main() {
	char str[100];
	int i;
	printf("Enter a string character: ");
	fgets(str, sizeof(str), stdin);
	printf("The string after handle: ");
	for (i = 0; str[i] != '\0'; i++) {
		char ch = tolower(str[i]);
		if (ch == 'u' || ch == 'e' || ch == 'o' || ch == 'a' || ch == 'i')
			printf("%c", toupper(str[i]));
		else
			printf("%c", str[i]);
	}
	return 0;
}
