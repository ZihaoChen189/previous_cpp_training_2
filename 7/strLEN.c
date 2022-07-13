#include<stdio.h>
#include<string.h>
int main() {
	char str1[20] = "hello";
	char* str2 = "hello";
	printf("sizeof(str1) = %lu\n", sizeof(str1));
	printf("sizeof(str2) = %lu\n", sizeof(str2));
	printf("strlen(str1) = %lu\n", strlen(str1));
	printf("strlen(str2) = %lu\n", strlen(str2));
	return 0;
}