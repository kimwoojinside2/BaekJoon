#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct meeting {
	int start, end;
}meeting;
bool cmp(meeting a, meeting b) {
	if (a.end == b.end)
		return a.start < b.start;
	else
		return a.end < b.end;
}
int main(void) {
	meeting meeting[100001];
	int n;
	int cnt = 0;
	int time = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &meeting[i].start, &meeting[i].end);
	sort(meeting, meeting + n, cmp);
	for (int i = 0; i < n; i++) {
		if (meeting[i].start >= time) {
			cnt++;
			time = meeting[i].end;
		}
	}
	printf("%d", cnt);
	return 0;
}