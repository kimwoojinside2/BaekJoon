#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main() {
    int n, input[1000001] = { 0, };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &input[i]);
    qsort(input, n, sizeof(int), compare);
    for (int i = 0; i < n; i++)
        printf("%d\n", input[i]);
    return 0;
}