#include<stdio.h>

int main() {
	int* p;  // 定义了一个指针变量
	// 指针运算符 -> *取值; &取地址
	int a = 0x1234abcd;
	p = &a;
	int num;
	num = *p;  // 等驾驭p指向的变量
	num = a;
	printf("num = %d\n", num);
	return 0;
}