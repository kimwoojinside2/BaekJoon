#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	int p = a + b;
	int m = a - b;
	int mul = a * b;
	int div = a / b;
	int asdf = a % b;
	printf("%d\n", p);
	printf("%d\n", m);
	printf("%d\n", mul);
	printf("%d\n", div);
	printf("%d", asdf);
	return 0;
}