#include<iostream>
#include<queue>
using namespace std;
typedef struct {//자료형(좌표)
	int x, y, z;
}xyz;

xyz moveDir[6] = { {1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1} };
int m, n, h;
xyz temp;
int map[101][101][101] = { 0, };
bool visited[101][101][101] = { 0, };

queue<xyz> qu;

int bfs() {
	while (qu.empty() != true) {
		temp = qu.front();
		qu.pop();
		for (int i = 0; i < 6; i++) {
			int nx = temp.x + moveDir[i].x;
			int ny = temp.y + moveDir[i].y;
			int nz = temp.z + moveDir[i].z;
			if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h)
				continue;
			if (map[nz][ny][nx] == -1) continue;
			if (visited[nz][ny][nx]) continue;
			qu.push({ nx, ny ,nz });
			visited[nz][ny][nx] = true;
			map[nz][ny][nx] = map[temp.z][temp.y][temp.x] + 1;
		}
	}
		int max = 0;
		

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < m; k++) {
					if (map[i][j][k] == 0) return 0;
					if (max < map[i][j][k]) max = map[i][j][k];
				}
			}
		}
		return max;
}

int main() {
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> map[i][j][k];
				
				if (map[i][j][k] == 1) {
					visited[i][j][k] = true;
					qu.push({ k,j,i });
				}
			}
		}
	}
	cout << bfs() - 1;
	return 0;
}