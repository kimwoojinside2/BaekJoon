#include<iostream>
using namespace std;
int main(void) {
	int i, j, n;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++)
			cout << " ";
		for (j = n; j > i; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}