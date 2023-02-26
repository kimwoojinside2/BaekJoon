#include<stdio.h>
int main(void) {
	int n;
	long int pay;
	int coin[11];
	int cnt = 0;
	scanf("%d %d", &n, &pay);
	for (int i = 0; i < n; i++)
		scanf("%d", &coin[i]);
	for (int i = n - 1; i >= 0; i--) {
		if (pay / coin[i] != 0) {
			cnt += pay / coin[i];
			pay = pay % coin[i];
		}
	}
	printf("%d", cnt);
	return 0;
}