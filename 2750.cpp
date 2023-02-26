#include<stdio.h>
int main(void) {
	int n;
	int arr[1000] = { 0, };
	int temp = 0;
	int x = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		temp = arr[i];
		x = i - 1;
		while (x >= 0 && temp < arr[x]) {
			arr[x + 1] = arr[x];
			x--;
		}
		arr[x + 1] = temp;
	}
	
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}