#include <stdio.h>

int valueAt(int n, int k) {
    if (k > n) {
        return 0;
    }
    if (k == 1 || k == n) {
        return 1;
    }
    return valueAt(n - 1, k) + valueAt(n - 1, k  - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", valueAt(i, j));
        }
        printf("\n");
    }
    return 0;
}