#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	double max = 0;
	double score[1000];
	double sum = 0;
	double average = 0;
	for (int i = 0; i < n; i++)
		scanf("%lf", &score[i]);
	for (int i = 0; i < n; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	average = sum / n;
	printf("%0.2lf", average);
	return 0;
}