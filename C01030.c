#include <stdio.h>
#include <math.h>

void parseToPrimeFactors(int n) {
    int temp = n;
    for (int i = 2; i <= sqrt(n); i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }
    if (temp > 1) {
        printf("%d ", temp);
    }
    printf("\n");
}

int main() {
    int n, value;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        parseToPrimeFactors(value);
    }
    return 0;
}