#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* file_pointer;
	long int distance;
	char* str;

	file_pointer = fopen("test.txt", "rb");

	if (file_pointer == NULL) {
		perror("fopen");
		return 0;
	}

	fseek(file_pointer, 0, SEEK_END);
	distance = ftell(file_pointer);
	rewind(file_pointer);

	str = malloc(distance+1);
	if (str == NULL) {
		perror("malloc");
		return 0;
	}
	fread(str, distance, 1, file_pointer);
	printf("%s\n", str);
	fclose(file_pointer);
	free(str);

	return 0;
}