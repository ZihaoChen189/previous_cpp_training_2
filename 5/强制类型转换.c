#include<stdio.h>

int main() {
	int a = 0x12345678, b = 0xabcdef66;
	char *p1, *p2;
	int *p;
	printf("%0x %0x\n", a, b);
	p = &a;
	p1 = (char*)&a;
	p2 = (char*)&b;
	p1++;p2++;
	printf("*p = %0x\n", *p);
	printf("%0x %0x\n", *p1, *p2);




	return 0;
}