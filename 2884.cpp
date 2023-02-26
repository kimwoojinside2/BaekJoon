#include<stdio.h>
int main() {
	int oh, om, h, m;
	scanf("%d %d", &oh, &om);
	m = om - 45;
	if (m < 0) {
		h = oh - 1;
		m = 60 + m;
		if (h < 0) {
			h = 24 + h;
		}
	}
	else
		h = oh;
	printf("%d %d", h, m);
	return 0;
}