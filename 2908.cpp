#include<stdio.h>
int main() {
	char a[3], b[3];
	scanf("%c%c%c %c%c%c", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
	char ra[3], rb[3];
	ra[0] = a[2];
	ra[1] = a[1];
	ra[2] = a[0];
	rb[0] = b[2];
	rb[1] = b[1];
	rb[2] = b[0];
	int ib[3], ia[3];
	int aa = 0;
	int bb = 0;
	for (int i = 0; i < 3; i++) {
		ib[i] = rb[i] - 48;
		ia[i] = ra[i] - 48;
	}
	aa = (100 * ia[0]) + (10 * ia[1]) + ia[2];
	bb = (100 * ib[0]) + (10 * ib[1]) + ib[2];
	if (aa == bb)
		printf("%d", aa);
	if (aa > bb)
		printf("%d", aa);
	if (aa < bb)
		printf("%d", bb);
	return 0;
}