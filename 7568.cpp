#include<stdio.h>
int main(void) {
	int n = 0;
	int k[50] = { 0, };//key 키
	int m[50] = { 0, };//moommugae 몸무게
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &m[i], &k[i]);
	}
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < n; j++) {
			if (k[i] < k[j] && m[i] < m[j]) {
				cnt++;
			}
		}
		printf("%d ", cnt + 1);
	}

}