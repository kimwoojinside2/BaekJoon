#include<stdio.h>
#include<string.h>
int main(void) {
	char input[1000001];
	int cnt = 0;
	int abc[26] = { 0, };
	int temp = 0;
	int idx = 0;
	int a = 0;
	scanf("%s", input);
	for (int j = 65; j < 91; j++) {
		cnt = 0;
		for (int i = 0; i < strlen(input); i++) {
			if (input[i] == j || input[i] == j + 32)
				cnt++;
		}
		abc[j - 65] = cnt;
	}
	for (int i = 0; i < 26; i++) {
		if (temp < abc[i])
			temp = abc[i];
	}
	for (int i = 0; i < 26; i++) {
		if (temp == abc[i]) {
			idx = i;
			a++;
		}
	}
	if (a == 1)
		printf("%c", 65 + idx);
	else if (a>1)
		printf("?");
	return 0;
}