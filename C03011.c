#include <stdio.h>

#define MAX 7*fact[9]
int fact[10];

void init() {
    fact[0] = 1;
    for (int i = 1; i < 10; i++) {
        fact[i] = i * fact[i - 1];
    }
}

int sumOfFactorialOfDigits(int n) {
    int sum = 0;
    while (n > 0)
    {
        sum += fact[n % 10];
        n /= 10;
    }
    return sum;
}

void solve() {
    init();
    int a, b;
    scanf("%d %d", &a, &b);
    int start = a > b ? b : a;
    int end = a + b - start;
    for (int i = start; i <= (end > MAX ? MAX : end); i++) {
        if (sumOfFactorialOfDigits(i) == i) {
            printf("%d ", i);
        }
    }
}

int main() {
    solve();
    return 0;
}