#include<stdio.h>
int main() {
	int input[10];
	scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);
	int count[42] = { 0, };
	int a;
	int answer = 0;
	for (int i = 0; i < 10; i++) {
		a = input[i] % 42;
		count[a]++;
	}
	for (int i = 0; i < 42; i++) {
		if (count[i] != 0) {
			answer++;
		}
		else {
			continue;
		}
	}
	printf("%d", answer);
	return 0;
}