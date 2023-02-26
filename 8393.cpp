#include<stdio.h>
int main() {
	int n, o = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		o += i;
	}
	printf("%d", o);
	return 0;
}