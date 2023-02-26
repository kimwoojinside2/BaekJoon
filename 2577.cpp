#include<stdio.h>
int main() {
	int a[3];
	int b = 0;
	scanf("%d\n%d\n%d", &a[0], &a[1], &a[2]);
	int abc = a[0] * a[1] * a[2];
	int count[10] = { 0, };
	while (abc > 0) {
		b = abc % 10;
		count[b]++;
		abc /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);
	return 0;
}