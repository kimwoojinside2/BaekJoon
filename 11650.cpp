#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct xy {
	int x, y;
}xy;
bool c(xy a,xy b) {
	if (a.x < b.x)
		return true;
	else if (a.x == b.x && a.y < b.y)
		return true;
	else
		return false;
}
int main() {
	int n;
	xy xy[100001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &xy[i].x, &xy[i].y);
	sort(xy, xy + n, c);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", xy[i].x, xy[i].y);
	return 0;
}