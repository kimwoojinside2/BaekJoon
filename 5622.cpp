#include<stdio.h>
int main() {
	int time = 0;
	char input[15];
	scanf("%s", &input);
	for (int i = 0; input[i] != NULL; i++) {
		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C') {
			time += 3;
		}
		if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F') {
			time += 4;
		}
		if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I') {
			time += 5;
		}
		if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L') {
			time += 6;
		}//4
		if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O') {
			time += 7;
		}
		if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S') {
			time += 8;
		}
		if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V') {
			time += 9;
		}
		if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z') {
			time += 10;
		}
	}
	printf("%d", time);
	return 0;
}