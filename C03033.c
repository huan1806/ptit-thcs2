#include <stdio.h>
#include <math.h>

int min(int a, int b) {
    return a >= b ? a : b;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 1; i <= test_cases; i++)
    {
        int N, value;
        scanf("%d", &N);
        value = N;
        printf("%d = ", N);
        int index = 0;
        for (int j = 2; j <= sqrt(value); j++) {
            int count = 0;
            if (value % j == 0) {
                while (value % j == 0) {
                    count++;
                    value /= j;
                }
                if (index++ != 0) {
                    printf(" * ");
                }
                printf("%d^%d", j, count);
            }
            
        }
        if (value > 1) {
            printf(" * %d^%d", value, 1);
        }
        printf("\n");
    }
    return 0;
}