#include <stdio.h>

int getChar(int n) {
    return 'A' + n - 1;
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = row; i > 0; i--) {
        for (int j = 0; j < col; j++) {
            int value = i + j > col ? col: i + j;
            printf("%c", getChar(value));
        }
        printf("\n");
    }
    return 0;
}