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
	int(*functionPointerArray[5])(int, int) = {max};
	int number;
	number = (*functionPointerArray[0])(10, 100);
	printf("nuumebr = %d\n", number);



	return 0;
}