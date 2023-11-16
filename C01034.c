#include <stdio.h>
#include <math.h>

void solve() {
    int m, n, start, end;

    scanf("%d %d", &m, &n);

    start = (int) sqrt(m);

    if (start * start != m) {
        start++;
    }

    end = (int) sqrt(n);

    printf("%d\n", end - start + 1);

    for (int i = start; i <= end; i++) {
        printf("%d\n", i * i);
    }
}

int main() {
    solve();

    return 0;
}