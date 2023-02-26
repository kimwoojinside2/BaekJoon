#include<stdio.h>
#include<string.h>
int main() {
	int t = 0;
	char result[80]="";
	int count = 0;
	int score = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", &result);
		for (int j = 0; j < strlen(result); j++) {
			if (result[j] == 79) {
				count++;
				score += count;
			}
			else {
				count = 0;
				score += 0;
			}
		}
		printf("%d\n", score);
		score = 0;
		count = 0;
		result[0] = '\0';
	}
	return 0;
}