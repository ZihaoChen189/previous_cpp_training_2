#include <stdio.h>

int main() {
	int hour1, hour2, minute1, minute2;
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int hour_difference = hour2 - hour1;
	int minute_difference = minute2 - minute1;

	if (minute_difference < 0) {
		minute_difference += 60;
		hour_difference--;
	}
	printf("时间差是%d小时%d分钟\n", hour_difference, minute_difference);
	return 0;
}