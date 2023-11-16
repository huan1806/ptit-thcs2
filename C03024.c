#include <stdio.h>
#include <string.h>

int sumOfDigits(char number[]) {
    int sum = 0;
    for (int i = 0; i < strlen(number); i++) {
        sum += number[i] - '0';
    }
    return sum;
}

void printNumber(char number[]) {
    for (int i = 0; i < strlen(number); i++) {
        printf("%c", number[i]);
    }
}

void printResult(char first[], char last[]) {
    printNumber(first);
    printf(" ");
    printNumber(last);
}

void solve() {
    char a[7], b[7];
    scanf("%s %s", a, b);
    if (sumOfDigits(a) <= sumOfDigits(b)) {
        printResult(a, b);
    } else {
        printResult(b, a);
    }
}

int main() {
    solve();
    return 0;
}