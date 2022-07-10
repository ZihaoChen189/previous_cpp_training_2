#include <stdio.h>

int main() {
    int a = 1;
    int *p = &a;
    int **ppoint;
    ppoint = &p;

    printf("ppoint = %p\n", ppoint);  
    //ppoint是一个二级指针，指向p指针的地址，这里打印的也是地址


    printf("p = %p\n", &p);  //打印p的地址
    printf("p = %d\n", *p);
    printf("a = %d\n", **ppoint);


    return 0;
}