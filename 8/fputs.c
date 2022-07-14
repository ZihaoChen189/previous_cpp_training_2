#include<stdio.h>

int main() {
	FILE *file_pointer_read, *file_pointer_write;
	char str[100];
	file_pointer_read = fopen("file.txt", "r");
	if (file_pointer_read == NULL) {
		perror("fopen");
		return 0;
	}
	file_pointer_write = fopen("final.txt", "w");
	if (file_pointer_write == NULL) {
		perror("fopen");
		return 0;
	}
	fgets(str, 20, file_pointer_read);
	printf("str = %s\n", str);
	fputs(str, file_pointer_write);


	return 0;
}