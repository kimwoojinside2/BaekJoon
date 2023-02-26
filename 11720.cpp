#include<stdio.h>
int main() {
	int n = 0;
	char input[100] = { 0, };
	int sum = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &input[i]);
		sum += (input[i] - 48);
	}
	printf("%d", sum);
	return 0;
}