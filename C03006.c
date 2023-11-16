#include <stdio.h>
#include <math.h>

int min(int a, int b) {
    return a >= b ? a : b;
}

void solve() {
    int N, value;
    scanf("%d", &N);
    value = N;
    for (int j = 2; j <= sqrt(value); j++) {
        int count = 0;
        if (value % j == 0) {
            while (value % j == 0) {
                count++;
                value /= j;
            }
            printf(" %d(%d)", j, count);
        }

    }
    if (value > 1) {
        printf(" %d(%d)", value, 1);
    }
    printf("\n");
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 1; i <= test_cases; i++) {
        printf("Test %d:", i);
        solve();
    }
    return 0;
}