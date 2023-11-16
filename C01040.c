#include <stdio.h>
#include <math.h>

void solve() {
    int n;
    scanf("%d", &n);
    int sumOfFactors = 1;
    int squareRoot = (int) sqrt(n);
    for (int i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            sumOfFactors += i + n / i;
        }
    }
    if (squareRoot * squareRoot == n) {
        sumOfFactors -= squareRoot;
    }
    if (sumOfFactors == n) {
        printf("1");
    } else {
        printf("0");
    }
}

int main() {
    solve();
    return 0;
}