#include<stdio.h>

int main() {
	int ret;
	FILE* file_pointer;
	file_pointer = fopen("file.txt", "w+");
	if (file_pointer == NULL) {
		printf("fail to open\n");
		perror("fopen");
		return 0;
	}
	printf("successfully open file.txt\n");
	ret = fclose(file_pointer);
	if (ret == 0) {
		printf("successfully close\n");
	} else {
		printf("failly close\n");
	}
	return 0;
}