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

int isPalindromic(int n) {
    int digits[9], size = 0;
    while (n > 0) {
        digits[size++] = n % 10;
        n /= 10;
    }
    for (int i = 0; i <= (size - 2) / 2; i++) {
        if (digits[i] != digits[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int isPrimeAndPalindromic(int n) {
    return isPalindromic(n) && isPrime(n);
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrimeAndPalindromic(i)) {
            if (count++ == 0) {
                printf("%d", i);
            } else if (count % 10 == 1) {
                printf("\n%d", i);
            } else {
                printf(" %d", i);
            }
        }
    }

    printf("\n\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    
    return 0;
}