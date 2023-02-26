#include<stdio.h>
int main() {
	int cnt = 1;
	int input;
	int one = 0;
	int sum = 0;
	int x = 0;
	scanf("%d", &input);
	one = input % 10;
	sum = (input - one) / 10 + one;
	x = (one * 10) + (sum % 10);
	while (x != input) {
		one = x % 10;
		sum = (x - one) / 10 + one;
		x = (one * 10) + (sum % 10);
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}