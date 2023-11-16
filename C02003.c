#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i < n - 1; i++) {
        printf("*");
        for (int j = 1; j < n - 1; j++) {
            printf(".");
        }
        printf("*\n");
    }

    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    solve();

    return 0;
}