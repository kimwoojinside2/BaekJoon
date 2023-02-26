#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0, temp = 0, out = 0;
	string cmd = "";
	cin >> n;
	queue<long int>qu;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> temp;
			qu.push(temp);
		}
		else if (cmd == "pop") {
			if (qu.empty() != true) {
				cout << qu.front() << "\n";
				qu.pop();
			}
			else
				cout << "-1" << "\n";
		}
		else if (cmd == "size")
			cout << qu.size() << "\n";

		else if (cmd == "empty") {
			if (qu.empty() == true)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == "back") {
			if (qu.empty() != true)
				cout << qu.back() << "\n";	
			else
				cout << "-1" << "\n";
		}
		else if (cmd == "front") {
			if (qu.empty() != true)
				cout << qu.front() << "\n";
			else
				cout << "-1" << "\n";
		}
	}
}