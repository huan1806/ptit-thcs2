#include <stdio.h>
#include <math.h>

int pure_primes[9058], size = 0;
int number[9];
const int prime_digits[] = {2, 3, 5, 7};

int isPrimeNumber(int n) {
    if (n == 2 || n == 3) {
        return  1;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int sumOfDigits(int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += number[i];
    }
    return sum;
}

int toInt(int len) {
    int val = 0;
    for (int i = 0; i < len; i++) {
        val = 10 * val + number[i];
    }
    return val;
}

int isPurePrimeNumber(int len) {
    return isPrimeNumber(sumOfDigits(len)) && isPrimeNumber(toInt(len));
}

void backtrack(int pos, int len) {
    if (pos == len) {
        if (isPurePrimeNumber(len)) {
            pure_primes[size++] = toInt(len);
        }
    } else {
        for (int i = 0; i < 4; i++) {
            number[pos] = prime_digits[i];
            backtrack(pos + 1, len);
        }
    }
}

void solve() {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < size; i++) {
        if (pure_primes[i] > b) {
            break;
        } else if (pure_primes[i] >= a) {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    for (int i = 1; i <= 9; i++) {
        backtrack(0, i);
    }
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}