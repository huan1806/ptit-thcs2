#include <stdio.h>
#include <math.h>

#define MAX 1000000
int seize[MAX];

void init() {
    for (int i = 2; i < MAX; i++) {
        seize[i] = 1;
    }
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (seize[i]) {
            for (int j = 2 * i; j < MAX; j += i) {
                seize[j] = 0;
            }
        }
    }
}

int areAllDigitsPrime(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 2 && digit != 3 && digit != 5  && digit != 7) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (seize[i] && areAllDigitsPrime(i)) {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    init();
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}