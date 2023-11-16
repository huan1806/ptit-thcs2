#include <stdio.h>
#include <math.h>

int sumOfFactors(int n) {
    int sum = 1, temp = n;
    for (int i = 2; i <= sqrt(temp); i++) {
        int count = 0;
        while (temp % i == 0) {
            count++;
            temp /= i;
        }
        sum *= (int) (pow(i, count + 1) - 1) / (i - 1);
    }
    if (temp > 1) {
        sum *= temp + 1;
    }
    return sum > 1 ? sum - n : 1;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int start = a > b ? b : a;
    int end = a + b - start;
    for (int i = start; i <= end; i++) {
        if (sumOfFactors(i) == i) {
            printf("%d ", i);
        }
    }
}

int main() {
    solve();
    return 0;
}