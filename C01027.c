#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
    int n, num1, num2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", gcd(num1, num2));
    }
    return 0;
}