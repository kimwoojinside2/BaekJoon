#include<iostream>
#include<stdlib.h>
#include <queue>
using namespace std;
#define MAX 101
int n, m;
typedef struct {
    int y, x;
}Dir;
Dir moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0,-1} };
int map[MAX][MAX];
bool visited[MAX][MAX];

void print() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

void dfs(int y, int x) {
    if (visited[y][x])
        return;
    print();
    cout << endl;
    visited[y][x] = true;
    for (int i = 0; i < 4; i++) {
        int ny = y + moveDir[i].y;
        int nx = x + moveDir[i].x;
        if (0 <= ny && ny < n && 0 <= nx && nx < m) {
            if (map[ny][nx]) {
                if(visited[ny][nx] == false) map[ny][nx] = map[y][x] + 1;
                dfs(ny, nx);
            }
        }
    }
}

void bfs(int x, int y) {
    queue<Dir> q;
    q.push({ y, x });
    visited[y][x] = true;

    while (!q.empty()) {
        Dir loc = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = loc.y + moveDir[i].y;
            int nx = loc.x + moveDir[i].x;

            if (0 <= ny && ny < n && 0 <= nx && nx < m && visited[ny][nx] == false) {
                if (map[ny][nx]) {
                    map[ny][nx] = map[loc.y][loc.x] + 1;
                    visited[ny][nx] = true;
                    q.push({ ny, nx });
                }
            }
        }
    }


}

int main(void) {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%1d", &map[i][j]);
    }
    bfs(0,0);
    //print();
    cout << map[n - 1][m - 1];
    return 0;
}