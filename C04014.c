#include <stdio.h>

void solve() {
    int n, arr[100], count[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = 1;
        for (int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count[j]++;
                count[i] = 0;
                break;
            }
        }

    }
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", arr[i], count[i]);
        }
    }
}

int main() {
    solve();
    return 0;
}