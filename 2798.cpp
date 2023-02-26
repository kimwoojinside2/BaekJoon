#include<stdio.h>
int main() {
	int n, m;
	int sum = 0;
	int temp = 0;
	int card[100] = { 0, };
	int dif = 0;
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				dif = m - sum;
				if (dif >= 0 && temp <= sum) {
					temp = sum;
				}
			}
		}
	}
	printf("%d", temp);
	return 0;
}