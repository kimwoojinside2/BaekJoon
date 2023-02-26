#include<stdio.h>
#include<iostream>
using namespace std;
int cnt, i, n, m, a, b;
bool visited[101], map[101][101];
void dfs(int v) {
	visited[v] = 1;
	for (int i = 2; i <= n; i++) {
		if (map[v][i] && !visited[i])
			dfs(i);
	}
	cnt++;
}
int main(void) {
	cin >> n;
	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		map[a][b] = true;
		map[b][a] = true;
	}
	dfs(1);
	printf("%d", cnt - 1);
	return 0;
}