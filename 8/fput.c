#include<stdio.h>

int main() {
	FILE* file_pointer;
	char ch;
	file_pointer = fopen("file.txt", "r");
	// if (file_pointer == NULL) {
	// 	perror("fopen");
	// 	return 0;
	// }
	while ((ch=fgetc(file_pointer))!=EOF) {
		fputc(ch, stdout);
	}
	fclose(file_pointer);


	return 0;
}