#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int years = N / 365;
    int weeks = N % 365 / 7;
    int days = N - 365 * years - 7 * weeks;

    printf("%d %d %d", years, weeks, days);

    return 0;
}