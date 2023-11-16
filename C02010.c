#include <stdio.h>

void solve() {
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++) {
        if (i > col) {
            printf("%d", i);
            for (int j = col - 1; j >= 1; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = i; j <= col; j++) {
                printf("%d", j);
            }
            for (int j = i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}