#include <stdio.h>

int main() {
    long long fi[30];
    int n;
    scanf("%d", &n);
    fi[0] = 0;
    fi[1] = 1;

    for (int i = 2; i < n; i++) {
        fi[i] = fi[i - 1] + fi[i -2];
    }

    for (int i = 0; i < n; i++) {
        printf("%lld ", fi[i]);
    }

    return 0;
}