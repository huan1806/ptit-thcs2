#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        int n, max, count = 1;
        scanf("%d %d", &n, &max);
        for (int i = 1; i < n; i++) {
            int value;
            scanf("%d", &value);
            if (value >= max) {
                max = value;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}