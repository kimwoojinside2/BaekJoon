#include<iostream>
using namespace std;
long long m[91] = {};
long long fibo(int n) {
    m[0] = 0;
    m[1] = 1;
    for (int i = 2; i <= n; i++) {
        m[i] = m[i - 1] + m[i - 2];
    }
    return m[n];
}
int main(void) {
    int n;
    cin >> n;
    printf("%lld", fibo(n));
    return 0;
}