#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *e1, const void *e2) {
    long long num1 = *(long long *) e1;
    long long num2 = *(long long *) e2;
    return num1 == num2 ? 0 : num1 > num2 ? 1 : -1;
}

int is_square_number(long long n) {
    long long square_root = (long long) sqrt((double) n);
    return square_root * square_root == n ? 1 : 0;
}

void solve() {
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            for (int j = i + 1; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    }
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            long long sum = arr[i] * arr[i] + arr[j] * arr[j];
            if (is_square_number(sum)) {
                long long key = (long long) sqrt((double) sum);
                int *idx = bsearch(&key, arr, n, sizeof(long long), compare);
                if (idx != NULL) {
                    printf("YES\n");
                    return;
                }
            }
        }
    }

    printf("NO\n");
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while(test_num--) {
        solve();
    }
    return 0;
}