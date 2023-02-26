#include<stdio.h>
int f(int n) {
	int result = 0;
	if (n <= 1)
		return n;
	return f(n - 1) + f(n - 2);
}
int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d", f(num));
	return 0;
}