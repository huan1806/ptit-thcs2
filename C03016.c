#include <stdio.h>

unsigned long long fi[93];

void init() {
    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i <= 92; i++) {
        fi[i] = fi[i - 1] + fi[i - 2];
    }
}

int belongsToFibonacciSeq(unsigned long long n) {
    for (int i = 0; i <= 92; i++) {
        if (fi[i] == n) {
            return 1;
        }
    }
    return 0;
}


void solve() {
    unsigned long long n;
    scanf("%lld", &n);
    if (belongsToFibonacciSeq(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    init();

    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}
