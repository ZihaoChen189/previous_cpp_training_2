#include<stdio.h>

int int main()
{
	int year, month, day;
	int sum;
	scanf("%d %d %d", &year, &month, &day);
	switch(month) {
		case 1:
			sum = day;
			break;
		case 2:
			sum = day + 31;
			break;
		case 3:
			sum = day + 31 + 28;
			break;
		case 4:
			sum = day + 31 + 28 +31;
			break;
		default:
			printf("输入有误\n");
	}

	return 0;
}