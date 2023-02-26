#include<stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	/*for (int j = 0; j < t; j++) {
		
	}*/
	return 0;
}