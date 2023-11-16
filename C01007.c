#include <stdio.h>


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if (num2 == 0) {
        printf("0");
        return 0;
    }

    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%ld\n", (long) num1 * num2);
    printf("%d\n", num1 / num2);
    printf("%d\n", num1 % num2);
    printf("%.2f", 1.0 * num1 / num2);

    return 0;
}