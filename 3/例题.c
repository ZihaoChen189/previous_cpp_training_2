#include<stdio.h>

int main() {
	int cm;
	scanf("%d", &cm);

	int foot = cm / 30.48;
	int inch = ((cm / 30.47) - foot) * 12;
	printf("foot = %d\n", foot);
	printf("inch = %d\n", inch);
	return 0;
}