#include <stdio.h>

void solve() {
    int n, arr[200], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr[n + i] = arr[i];
    }
    scanf("%d", &k);
    for (int i = k % n; i < k % n + n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    solve();
    return 0;
}