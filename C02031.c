#include <stdio.h>

char getChar(int n) {
    if (n == 0) {
        return '@';
    }
    return 'A' + n - 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%c", getChar(i + j));
        }
        printf("\n");
    }
    return 0;
}