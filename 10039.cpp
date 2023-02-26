#include<stdio.h>
int main() {
	int a, average = 0;
	for (int x = 0; x < 5; x++) {
		scanf("%d", &a);
		if (a < 40) {
			a = 40;
		}
		average += a;
	}
	average /= 5;
	printf("%d", average);
	return 0;
}