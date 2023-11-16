#include <stdio.h>
#include <math.h>

int check(long long n) {
    int digits[19], size = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            return 0;
        }
        digits[size++] = digit;
        n /= 10;
    }
    if (size % 2 == 0) {
        return 0;
    }
    for (int i = 0; i <= (size - 2) / 2; i++) {
        if (digits[i] != digits[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void process(int test_case) {
    long long n;
    scanf("%lld", &n);
    if (check(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        process(test_cases);
    }
    
    return 0;
}