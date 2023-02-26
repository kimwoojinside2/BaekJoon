#include<stdio.h>
#include<string.h>
int main() {
	char input[11] = { 0, };
	int a[11] = { 0, };
	int temp = 0;
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++) {
		a[i] = input[i] - 48;
	}
	for (int i = 0; i < strlen(input)-1; i++) {
		for (int j = i; j < strlen(input); j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < strlen(input); i++) {
		printf("%d", a[i]);
	}
	return 0;
}