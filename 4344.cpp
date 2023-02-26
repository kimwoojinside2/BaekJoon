#include<stdio.h>
int main(void) {
	int c = 0;
	int n = 0;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		int score[1001] = { 0, };
		int sum = 0;
		double avg = .0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / n;
		int cnt = 0;
		for (int k = 0; k < n; k++) {
			if (avg < score[k]) {
				cnt++;
			}
		}
		printf("%.3f%%\n", (double)cnt * 100 / n);
	}
	return 0;
}