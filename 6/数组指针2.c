#include<stdio.h>

int main() {
	int a[5] = {0, 1, 2, 3, 4};
	int* p;
	p = a;

	printf("a = %p\n", a);
	printf("a = %p\n", &a);
	printf("&a+1 = %p\n", &a + 1);  // 为什么变了呢？？？？为啥？？
	//加了那个符号，变成了数组指针，又加了一，跳了五个元素


	return 0;
}