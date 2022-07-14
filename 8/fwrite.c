#include<stdio.h>

struct student {
	char name[10];
	int number;
	int age;
} boyA[2], boyB[2];

int main() {
	FILE* file_pointer;
	file_pointer = fopen("test.txt", "wb+");
	if (file_pointer == NULL) {
		perror("fopen");
		return 0;
	}
	for (int i = 0; i < 2; i++) {
		printf("请输入第%d个结构体的姓名,学号,年龄\n", i);
		scanf("%s %d %d", boyA[i].name, &(boyA[i].number), &(boyA[i].age));
	}
	fwrite(&boyA, sizeof(struct student), 2, file_pointer);
	rewind(file_pointer);
	fread(boyB, sizeof(struct student), 2, file_pointer);
	printf("%s %d %d\n", boyB[0].name, boyB[0].number, boyB[0].age);
	printf("%s %d %d\n", boyB[1].name, boyB[1].number, boyB[1].age);
	fclose(file_pointer);
	return 0;
}