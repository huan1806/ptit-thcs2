#include <stdio.h>
#include <string.h>

void printFirstLastIdentical(char number[]) {
    if (number[0] == number[strlen(number) - 1]) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);

    char number[9];

    for (int i = 0; i < n; i++) {
        scanf("%s", number);
        printFirstLastIdentical(number);
    }

    return 0;
}