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
    int n, primes[1000], count = 0;
    scanf("%d", &n);
    while (n--)
    {
        int number;
        scanf("%d", &number);
        if (isPrime(number)) {
            primes[count++] = number;
        }
    }
    printf("%d ", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
}

int main() {
    solve();
    return 0;
}