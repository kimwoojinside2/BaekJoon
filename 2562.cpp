#include<stdio.h>
int main() {
	int number2[9];
	int number[9];
	int temp = 0;
	for (int a = 0; a < 9; a++) {
		scanf("%d", &number2[a]);
	}
	for (int b = 0; b < 9; b++) {
		 number[b]=number2[b];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (number[j] > number[j + 1]) {
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	int count = 1;
	for (int c = 0; c < 9; c++) {
		if (number[8] == number2[c]) {
			break;
		}
		count++;
	}
	printf("%d\n", number[8]);
	printf("%d", count);
	return 0;
}