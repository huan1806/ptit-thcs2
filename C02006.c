#include <stdio.h>

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            printf("~");
        }

        printf("*");

        char innerChar = i == 0 || i == a - 1 ? '*' : '.';

        for (int j = 1; j < b - 1; j++) {
            printf("%c", innerChar);
        }

        printf("*\n");
    }
}

int main() {
    solve();

    return 0;
}