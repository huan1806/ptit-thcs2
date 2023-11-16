#include <stdio.h>

void solve() {
    int n, arr[1000], result[1000], len = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_right = arr[n - 1];
    result[0] = max_right;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_right) {
            max_right = arr[i];
            result[len++] = max_right;
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}