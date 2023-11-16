#include <stdio.h>
#include <math.h>

#define MAX 10000
int seize[MAX] = {1};

void initSeize() {
    for (int i = 2; i < MAX; i++) {
        seize[i] = 1;
    }
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (seize[i]) {
            for (int j = 2 * i; j < MAX; j += i) {
                seize[j] = 0;
            }
        }
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n / 2; i++) {
        if (seize[i] && seize[n - i]) {
            printf("%d %d ", i, n - i);
        }
    }
    printf("\n");
}

int main() {
    initSeize();
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}