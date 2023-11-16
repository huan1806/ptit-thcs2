#include <stdio.h>
#include <math.h>

int check(int n) {
    int sum = 0;
    int digits[7], size = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4) {
            return 0;
        }
        sum += digit;
        digits[size++] = digit;
        n /= 10;
    }
    for (int i = 0; i <= (size - 2) / 2; i++) {
        if (digits[i] != digits[size - i - 1]) {
            return 0;
        }
    }
    return sum % 10 == 0;
}

void process(int test_case) {
    int n;
    scanf("%d", &n);
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        if (check(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        process(test_cases);
    }
    
    return 0;
}