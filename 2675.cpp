#include<stdio.h>
#include<string.h>
int main() {
	int t;
	int r = 0;
	char input[20];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {//테스트케이스의 수만큼 반복
		scanf("%d %s", &r, &input);
		for (int j = 0; j < strlen(input); j++) {//input의 인덱스
			for (int k = 0; k < r; k++) {//주어진 반복횟수만큼 반복
				printf("%c", input[j]);
			}
		}
		printf("\n");//테스트케이스 하나마다 줄바꿈
	}
	return 0;
}