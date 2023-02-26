#include<stdio.h>
void sort(int arr[], int cnt) {
    int temp;
    for (int i = 0; i < cnt; i++) {
        for (int j = 0; j < cnt - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int n;
    int time[1000];
    int sum = 0, sum2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &time[i]);
    sort(time, n);
    for (int i = 0; i < n; i++) {
        sum += time[i];
        sum2 += sum;
    }
    printf("%d", sum2);
    return 0;
}