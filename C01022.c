#include <stdio.h>
#include <string.h>

void printSum(char number[]) {
    int sum = 0;
    for (int i = 0; i < strlen(number); i++) {
        sum += number[i] - '0';
    }
    printf("%d\n", sum);
}

int main() {
    int n;

    scanf("%d", &n);

    char number[9];

    for (int i = 0; i < n; i++) {
        scanf("%s", number);
        printSum(number);
    }

    return 0;
}