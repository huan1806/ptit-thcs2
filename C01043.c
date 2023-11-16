#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char number[6];
    scanf("%s", number);
    int sum = 0;
    for (int i = 0; i < strlen(number); i++) {
        sum += factorial(number[i] - '0');
    }
    if (sum == atoi(number)) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}