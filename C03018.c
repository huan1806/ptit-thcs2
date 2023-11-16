#include <stdio.h>
#include <math.h>

int fi[10];

void init() {
    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i < 10; i++) {
        fi[i] = fi[i - 1] + fi[i - 2];
    }
}

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

int belongsToFibonacciSeq(int n) {
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (sum == fi[i]) {
            return 1;
        }
    }
    return 0;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int start = a <= b ? a : b;
    int end = a + b - start;
    for (int i = start; i <= end; i++) {
        if (isPrime(i) && belongsToFibonacciSeq(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    init();
    solve();

    return 0;
}