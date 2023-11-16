#include <stdio.h>
#include <string.h>

int calculateMax(int k, int m) {
    int res = 0;
    while (m >= k) {
        int q = m / k;
        res += q;
        m = m % k + 2 * q;
    }
    return res;
}

void solve() {
    int n, max = 0, sum = 0;
    scanf("%d\n", &n);

    char name[100];
    for (int i = 0; i < n; i++) {
        char type[100];
        int k, m;
        scanf("%s %d %d", type, &k, &m);
        int temp_max = calculateMax(k, m);
        sum += temp_max;
        if (temp_max > max) {
            max = temp_max;
            strcpy(name, type);
        }
    }

    printf("%d\n%s", sum, name);
}

int main() {
    solve();
    return 0;
}