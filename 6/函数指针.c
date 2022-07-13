#include<stdio.h>
int max(int x, int y) {
	int temp;
	if (x>y)
		temp = x;
	 else 
		temp = y;
	return temp;
}


int main() {
	int(*p)(int,int);
	// int number;
	// number = max(10, 20);
	// printf("numebr = %d\n", number);
	p = max;
	int number;
	number = (*p)(10, 20);
	printf("numebr = %d\n", number);

	return 0;
}