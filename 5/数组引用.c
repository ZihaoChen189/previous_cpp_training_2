#include <stdio.h>

int main() {
	int a[5] = {1, 2, 3, 4, 5};
	int *p;
	p = a;
	//printf("a[2] = %d\n", a[2]);
	//printf("p[2] = %d\n", p[2]);
	//printf("*(p+2) = %d\n", *(p+2));
	//printf("*(a+2) = %d\n", *(a+2));
	printf("p = %p\n", &p);
    printf("p+2 = %p\n", p);





	return 0;
}