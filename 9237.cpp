#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 > num2)
        return -1;

    if (num1 < num2)
        return 1;

    return 0;
}
int main() {
    int n, t[1000001], max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &t[i]);
    qsort(t, n, sizeof(int), compare);
    for (int j = 0; j < n; j++) {
        if (max < t[j] + j + 1)
            max = t[j] + j + 1;
    }
    printf("%d", max + 1);
    return 0;
}