#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

void solve() {
    int n;
    scanf("%d", &n);
    int sum_U = 0, sum_D = 0, min_U = 50000, min_D = 50000;
    for (int i = 0; i < n; i++) {
        int up, down;
        scanf("%d %d", &up, &down);
        sum_U += up;
        sum_D += down;
        min_U = min(min_U, up);
        min_D = min(min_D, down);
    }
    printf("%d", max(sum_D + min_U, sum_U + min_D));
}

int main() {
    solve();
    return 0;
}