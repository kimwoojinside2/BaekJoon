#include<stdio.h>

int main() {
	int temp;
	int burger[3];
	int drink[2];
	int cheapest;
	scanf("%d\n%d\n%d",&burger[0],&burger[1],&burger[2]);
	scanf("%d\n%d",&drink[0],&drink[1]);
	
	//햄버거 정렬
	for (int i = 0; i < 2; i++) {
		if (burger[i] < burger[i + 1]) {
			continue;
		}
		else {
			temp = burger[i + 1];
			burger[i + 1] = burger[i];
			burger[i] = temp;
		}
	}
	for (int i = 0; i < 2; i++) {
		if (burger[i] < burger[i + 1]) {
			continue;
		}
		else {
			temp = burger[i + 1];
			burger[i + 1] = burger[i];
			burger[i] = temp;
		}
	}

	//음료수정렬
	if (drink[0] > drink[1]) {
		temp = drink[1];
		drink[1] = drink[0];
		drink[0] = temp;
	}

	cheapest = (burger[0] + drink[0]) - 50;
	printf("%d", cheapest);
	return 0;
}