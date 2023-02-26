#include<stdio.h>
#include<string.h>
int main(void) {
	char input[1000001] = { 0, };
	int cnt = 0;
	scanf("%[^\n]", input);
	char *a = strtok(input, " ");
	while (a!=NULL) {
		a = strtok(NULL, " ");
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}