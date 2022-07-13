#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
	int* p;
	int i, n;
	printf("Please input the size(number) of the int memory you want\n");
	scanf("%d", &n);
	p = (int *)malloc(n);
	if (p == NULL) {
		printf("mallor error\n");
		return 0;
	}
	for (i = 0; i < n; i++) {
		p[i] = i;
	}
	for (i = 0; i < n; i++) {
		printf("p[%d] = %d\n",i, p[i]);
	}
	free(p);
	return 0;
}