#include<stdio.h>
int main() {
	int abc[3];
	int temp;
	scanf("%d %d %d", &abc[0], &abc[1], &abc[2]);
	for (int i = 0; i < 2; i++) {
		if (abc[i] < abc[i + 1]) {
			continue;
		}
		else {
			temp = abc[i + 1];
			abc[i + 1] = abc[i];
			abc[i] = temp;
		}
	}
	//한번더~
	for (int i = 0; i < 2; i++) {
		if (abc[i] < abc[i + 1]) {
			continue;
		}
		else {
			temp = abc[i + 1];
			abc[i + 1] = abc[i];
			abc[i] = temp;
		}
	}
	printf("%d", abc[1]);
	return 0;
}