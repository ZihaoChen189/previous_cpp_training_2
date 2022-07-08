#include<stdio.h>

int main() {
	int hundrend_position, ten_position, item_position;
	for (int i = 0; i <= 999; i++) {
		hundrend_position = i / 100;
		ten_position = i % 100 / 10;
		item_position = i % 10;
		if (i == hundrend_position*hundrend_position*hundrend_position + ten_position*ten_position*ten_position + item_position*item_position*item_position) {
			printf("i = %d\n", i);
		}
	}
	
	return 0;
}