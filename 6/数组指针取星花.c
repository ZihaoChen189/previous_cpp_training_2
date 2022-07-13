#include<stdio.h>
// 求导操作
int main() {
    int a[3][5];
    int (*p)[5];
    p = a;
    // a是数组的名字，是数组中第0个一维数组的首地址，一维数组指针变量
    printf("a = %p\n", a);
    printf("a + 1 = %p\n", a + 1);
    printf("*a = %p\n", *a);//*a是第[0][0]元素的地址，&a[0][0]
    printf("*a +1 = %p\n", *a +1);//*a +1 是 &a[0][1]

    // ORDER
    printf("p = %p\n", p);
    printf("p+1 = %p\n", p+1);
    printf("*p = %p\n", *p);
    printf("*p+1 = %p\n", *p+1);


	return 0;
}