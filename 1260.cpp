#include<stdio.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;
bool connected[1001][1001];
bool visited[1001];
int n, m, v, a, b, i;
queue<int>q;
void dfs(int v) {
	cout << v << " ";
	visited[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (connected[v][i] && !visited[i])
			dfs(i);
	}
}
void bfs(int v) {
	visited[v] = 1;
	q.push(v);
	while (q.empty() != true) {
		v = q.front();
		q.pop();
		cout << v << " ";
		for (i = 1; i <= n; i++) {
			if (connected[v][i] && !visited[i]) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}
int main(void) {
	cin >> n >> m >> v;
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		connected[a][b] = true;
		connected[b][a] = true;
	}
	dfs(v);
	printf("\n");
	memset(&visited, false, sizeof(visited));
	bfs(v);
	return 0;
}