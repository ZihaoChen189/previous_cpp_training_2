#include<stdio.h>

enum week_days {
	mon=3, tue, wed, thu, fri=4, sat, sun
};

int main() {
	enum week_days workday;
	printf("mon=%d\n", mon);
	printf("tue=%d\n", tue);
	return 0;
}