#include <stdio.h>

#include <math.h>

#define MAX 1000000
int seize[MAX];

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
    long long l, r;
    scanf("%lld %lld", &l, &r);
    int count = 0;
    for (long long i = sqrt(l); i <= sqrt(r); i++) {
        if (seize[i]) {
            count++;
        }
    }
    printf("%d\n", count);
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