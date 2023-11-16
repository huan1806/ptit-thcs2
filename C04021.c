#include <stdio.h>

void solve() {
    int n, arr[200], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr[n + i] = arr[i];
    }
    scanf("%d", &k);
    int start = n - k % n;
    for (int i = start; i < start + n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    solve();
    return 0;
}