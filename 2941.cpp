#include<stdio.h>
#include<string.h>
int main() {
	int i = 0;
	int cnt = 0;
	char input[101];
	scanf("%s", input);
	while (i < strlen(input)) {
		if (input[i] == 'c' && (input[i + 1] == '-' || input[i + 1] == '='))
			i++;
		else if (input[i] == 'd') {
			if (input[i + 1] == '-')
				i++;
			else if (input[i + 1] == 'z' && input[i + 2] == '=')
				i += 2;
		}
		else if ((input[i] == 'l' || input[i] == 'n') && input[i + 1] == 'j')
			i++;
		else if ((input[i] == 's' || input[i] == 'z') && input[i + 1] == '=')
			i++;
		i++;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}