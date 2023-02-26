#include<stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);//385
	int b3 = b % 10;//5
	b -= b3;//380
	b /= 10;//38
	int b2 = b % 10;//8
	b -= b2;//30
	int b1 = b / 10;//3
	b = (b1 * 100) + (b2 * 10) + (b3);
	printf("%d\n%d\n%d\n%d", a * b3, a * b2, a * b1, a * b);
}