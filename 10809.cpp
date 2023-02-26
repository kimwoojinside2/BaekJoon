#include<stdio.h>
#include<string.h>

int main() {
	char input[100];	

	scanf("%s", &input);

	for (char abc = 'a'; abc <= 'z'; abc++) {
		int idx = 0;
		for (int i = 0; i < strlen(input); i++) {
			if (input[i] == abc) {
				idx = i;
				break;
			}
			else {
				idx = -1;
			}
		}
		printf("%d ", idx);
	}
	return 0;
}