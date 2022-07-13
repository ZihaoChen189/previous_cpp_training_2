#include<stdio.h>
#include<string.h>
int main() {
	char str[100] = "aaaaaaaaaaaaaaaaaaaa";
	strcat(str, "hello");
	printf("str = %s\n", str);


	return 0;
}