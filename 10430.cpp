#include<stdio.h>
int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int f = (A + B) % C;
	int s = ((A % C) + (B % C)) % C;
	int t = (A*B) % C;
	int f2 = ((A % C) *(B % C)) % C;
	printf("%d\n", f);
	printf("%d\n", s);
	printf("%d\n", t);
	printf("%d", f2);
	return 0;
}