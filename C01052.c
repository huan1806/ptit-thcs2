#include <stdio.h>
#include <math.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while(test_cases--) {
        int value;
        scanf("%d", &value);
        if (value % 2 == 1) {
            printf("0\n");
        } else {
            int count = value % 2 == 0 ? 1 : 0;
            double square_root = sqrt(value);
            for (int i = 2; i < square_root; i++) {
                if (value % i == 0) {
                    if (i % 2 == 0) {
                        count++;
                    }
                    if ((value / i) % 2 == 0) {
                        count++;
                    }
                }
            }
            if ((int) square_root == square_root && (int) square_root % 2 == 0) {
                count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}