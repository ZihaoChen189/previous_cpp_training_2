#include<stdio.h>

int main() {
	int a = 200; int b = 100;
	int* p_1;
	int* p_2 = &b;
	p_1 = &a;

	printf("a = %d\n", a);
	printf("* p_1 = %d\n", * p_1);

	printf("b = %d\n", b);
	printf("* p_2 = %d\n", * p_2);
	return 0;
}