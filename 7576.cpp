#include <iostream>
#include<queue>
using namespace std;
typedef struct {
	int x, y;
}xy;
typedef struct {
	int x, y;
}Dir;
Dir moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0,-1} };

int m;
int n;
xy temp;
int map[1001][1001] = { 0, };
bool visited[1001][1001] = { 0, };
queue<xy> qu;
int bfs() {
	while (qu.empty() != true) {
		temp = qu.front();
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int nx = temp.x + moveDir[i].x;
			int ny = temp.y + moveDir[i].y;
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (map[nx][ny] == -1) continue;
			if (visited[nx][ny]) continue;

			qu.push({ nx, ny });
			visited[nx][ny] = true;
			map[nx][ny] = map[temp.x][temp.y] + 1;
		}
	}
		int max = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (map[i][j] == 0) return 0;
				if (max < map[i][j]) max = map[i][j];
			}
		}

		return max;

}


int main() {
	
	cin >> m >> n;
	for (int i = 0; i <n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];

			if (map[i][j] == 1) {
				visited[i][j] = true;
				qu.push({ i,j });
			}

		}
	}

	cout << bfs() -1 ;

}