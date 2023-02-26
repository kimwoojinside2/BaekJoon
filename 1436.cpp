#include<stdio.h>
#include<string.h>
int main(void){
	int n = 0;
	int cnt = 0;
	int i = 0;
	char temp[100];
	scanf("%d", &n);
	while (1) {
		sprintf(temp, "%d", i);
		if (strstr(temp, "666") != NULL)
			cnt++;
		if (cnt == n)
			break;
		i++;
	}
	printf("%d", i);
	return 0;
}