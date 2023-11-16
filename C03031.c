#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (gcd(a, b) == gcd(c, d)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}