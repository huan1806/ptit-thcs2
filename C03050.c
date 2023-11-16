#include <stdio.h>

void solve() {
    int n, count[100001];
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 2; i++) {
        int a;
        scanf("%d", &a);
        count[a]++;
    }
    for (int i = 1; i <= n; i++) {
        if (count[i] == n - 1) {
            printf("Yes");
            return;
        }
    }
    printf("No");
}

int main() {
    solve();
    return 0;
}