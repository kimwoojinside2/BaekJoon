#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	int n = 1;
	cin >> n;
	int pm[9] = { 0, };
	for (int i = 1; i <= n; i++) {
		pm[i - 1] = i;
		printf("%d ", i);
	}
	cout << "\n";
	while (next_permutation(pm, pm + n)) {
		for (int i = 0; i < n; i++)
			printf("%d ", pm[i]);
		cout << "\n";
	}
	return 0;
}