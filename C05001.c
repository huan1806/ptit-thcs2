#include <stdio.h>

void solve() {
    int a, b, arr[10][10];
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr[j][i]);
        }
    }
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    solve();
    return 0;
}
