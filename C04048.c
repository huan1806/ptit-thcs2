#include <stdio.h>
#include <stdlib.h>

int compare(const void *e1, const void *e2) {
    return *(int *) e1 - *(int *) e2;
}

void solve() {
    int n, m, k, result = 0;
    scanf("%d %d %d", &n, &m, &k);
    int pos[m + 2];
    for (int i = 1; i <= m; i++) {
        scanf("%d", &pos[i]);
    }

    pos[0] = -k;
    pos[m + 1] = n + k + 1;

    qsort(pos, m + 2, sizeof(int), compare);

    for (int i = 1; i <= m + 1; i++) {
        int remaining = pos[i] - pos[i - 1] - 2 * k - 1;
        if (remaining > 0) {
            result += remaining / (2 * k + 1);
            if (remaining % (2 * k + 1) != 0) {
                result++;
            }
        }
    }

    printf("%d", result);
}

int main() {
    solve();
    return 0;
}
