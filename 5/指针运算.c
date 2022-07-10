#include<stdio.h>

int main() {
    // int a[5];
    // int *p;
    // p = a;
    // p+2
    char buffer[5];
    char* p;
    p = buffer;
    printf("p = %p\n", p);
    printf("p = %p\n", p+2);


	return 0;
}