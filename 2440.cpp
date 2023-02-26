#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}