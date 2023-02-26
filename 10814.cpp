#include<stdio.h>
struct an {
	char name[101];
	int age;
};
int main(void) {
	int min = 0, max = 0;
	struct an person[100001];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &person[i].age, person[i].name);
		if (min > person[i].age)
			min = person[i].age;
		if (max < person[i].age)
			max = person[i].age;
	}
	for (int i = min; i <= max; i++) {
		for (int j = 0; j < n; j++) {
			if (i == person[j].age)
				printf("%d %s\n", person[j].age, person[j].name);
		}
	}
	return 0;
}