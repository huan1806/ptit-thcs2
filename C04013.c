#include <stdio.h>

void solve() {
    int n, arr[100], count[100], number = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = 0;
        for (int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count[j]++;
                count[i] = count[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (count[i] == 0) {
            number++;
        }
    }
    printf("%d\n", number);
    for (int i = 0; i < n; i++) {
        if (count[i] == 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    solve();
    return 0;
}