#include <stdio.h>

int main() {
	int *p[5];
	int a = 1;
	p[0] = &a;
	int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	printf("p[0] = %p\n", p[0]);
	printf("p[0] = %d\n", *p[0]);
	p[1] = &b[2];
	printf("p[1] = %d\n", *p[1]);


	return 0;
}