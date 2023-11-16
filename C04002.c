#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void solve() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int number;
        scanf("%d", &number);
        if (isPrime(number)) {
            printf("%d ", number);
        }
    }
    printf("\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}