#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *e1, const void *e2) {
    return *(int *) e1 - *(int *) e2;
}

void solve() {
    int n, min = INT_MAX, count = 0;
    scanf("%d", &n);
    int pos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pos[i]);
    }
    qsort(pos, n, sizeof(int), compare);
    for (int i = 0; i < n - 1; i++) {
        int diff = pos[i + 1] - pos[i];
        if (diff == min) {
            count++;
        } else if (diff < min) {
            min = diff;
            count = 1;
        }
    }
    printf("%d %d\n", min, count);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}