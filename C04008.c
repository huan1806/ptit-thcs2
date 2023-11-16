#include <stdio.h>

void solve() {
    int n, m, p, arr[2000];
    scanf("%d %d %d", &n, &m, &p);
    int value;
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        arr[i < p ? i : i + m] = value;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &value);
        arr[i + p] = value;
    }
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int test_case = 1; test_case <= test_cases; test_case++) {
        printf("Test %d:\n", test_case);
        solve();
    }
    return 0;
}