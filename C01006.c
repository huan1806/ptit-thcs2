#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num2 == 0) {
        printf("0");
        return 0;
    }

    printf(
        "%d %d %d %.2f %d",
        num1 + num2,
        num1 - num2,
        num1 * num2,
        1.0 * num1 / num2,
        num1 % num2
    );

    return 0;
}