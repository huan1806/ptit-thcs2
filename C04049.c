#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

void solve() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d ", arr[0]);
    for (int i = 1; i < n; i++) {
        printf("%d ", lcm(arr[i], arr[i - 1]));
    }
    printf("%d \n", arr[n-1]);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}