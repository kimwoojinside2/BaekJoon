#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int space = n - i;
		for (int j = 0; j < space; j++)
			cout << " ";
		for (int k = 0; k < i; k++)
			cout << "*";
		cout << endl;
	}
	return 0;
}