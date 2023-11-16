#include <stdio.h>

void solve() {
    int n, arr[100], len = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        arr[len++] = value;
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] == value) {
                len--;
                break;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    solve();
    return 0;
}