#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    long result = b > a ? ((long) b + a) * (b - a + 1) / 2 : ((long) a + b) * (a - b + 1) / 2;
    printf("%ld", result);
    return 0;
}