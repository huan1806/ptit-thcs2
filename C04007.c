#include <stdio.h>

void solve() {
    int n, m, p, a[100], b[100];
    scanf("%d %d", &n, &m);
    int value;
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        a[i] = value;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &value);
        b[i] = value;
    }
    scanf("%d", &p);
    for (int i = 0; i < n + m; i++) {
        if (i < p) {
            printf("%d ", a[i]);
        } else if (i >= p + m) {
            printf("%d ", a[i - m]);
        } else {
            printf("%d ", b[i - p]);
        }
    }
}

int main() {
    solve();
    return 0;
}