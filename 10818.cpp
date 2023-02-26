#include<stdio.h>
int main() {
	int n, input;
	int min = 0;
	int max = 0;
	scanf("%d", &n);
	scanf("%d", &input);
	min = input;
	max = input;
	for (int i = 1; i < n; i++) {
		scanf("%d", &input);
		if (min > input) {
			min = input;
		}
		else if (max < input) {
			max = input;
		}
		else {
			continue;
		}
	}
	printf("%d %d", min, max);
	return 0;
}