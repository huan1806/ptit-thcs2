#include <stdio.h>

int isSymmetrical(int arr[], int size) {
    for (int i = 0; i < (size - 1) / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isSymmetrical(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--) {
        solve();
    }
    return 0;
}