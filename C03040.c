#include <stdio.h>
#include <math.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int n;
    scanf("%d", &n);
    int digitSum = sumOfDigits(n);
    int sumOfDigitFactors = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0)
        {
            sumOfDigitFactors += sumOfDigits(i);
            n /= i;
        }
    }
    if (n > 1) {
        sumOfDigitFactors += sumOfDigits(n);
    }
    if (digitSum == sumOfDigitFactors) {
        printf("YES");
    } else {
        printf("NO");
    }
}

int main() {
    solve();
    return 0;
}