#include <stdio.h>

char getChar(int n) {
    return 'A' + 2 * n;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", getChar(i + j));
        }
        printf("\n");
    }
    return 0;
}