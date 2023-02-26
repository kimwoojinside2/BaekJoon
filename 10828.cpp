#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	string cmd;
	int n, temp, out;
	stack<long int>st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> temp;
			st.push(temp);
		}
		else if (cmd == "pop") {
			if (st.size() == 0) {
				cout << -1 << '\n';
			}
			else {
				out = st.top();
				st.pop();
				cout << out << '\n';

			}
		}
		else if (cmd == "size") {
			out = st.size();
			cout << out << '\n';
		}
		else if (cmd == "empty") {
			if (st.empty() == true)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == "top") {
			if (st.size() == 0)
				cout << -1 << '\n';
			else {
				out = st.top();
				cout << out << '\n';
			}
		}
	}
}