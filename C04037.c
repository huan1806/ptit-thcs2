#include <stdio.h>

void solve() {
    int n, arr[100], count[100], size = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count[j]++;
                break;
            }
        }
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            size++;
        }
    }
    printf("%d\n", size);
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    solve();
    return 0;
}