#include <stdio.h>

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            printf("~");
        }
        for (int j = 0; j < b; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    solve();

    return 0;
}