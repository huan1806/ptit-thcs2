#include <stdio.h>

int isBeautifulNumber(long long n) {
    int count_6 = 0;
    long long temp = n, reversed = 0, sum = 0;
    while (temp > 0) {
        long long digit = temp % 10;
        if (digit == 6) {
            count_6++;
        }
        reversed = 10 * reversed + digit;
        sum += digit;
        temp /= 10;
    }
    return count_6 > 0 && n == reversed && sum % 10 == 8;
}

long long max(long long a, long long b) {
    return a > b ? a : b;
}

long long min(long long a, long long b) {
    return a > b ? b : a;
}

void solve() {
    long long a, b, count = 0;
    scanf("%lld %lld", &a, &b);
    for (long long i = min(a, b); i <= max(a, b); i++) {
        if (isBeautifulNumber(i)) {
            printf("%lld ", i);
        }
    }
}

int main() {
    solve();
    return 0;
}