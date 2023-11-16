#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++) {
        for (int j = i; j <= col; j++) {
            printf("%d", j);
        }
        if (i <= col) {
            for (int j = col - 1; j > col - i; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = 1; j <= col; j++) {
                printf("%d", i - j + 1);
            }
        }
        printf("\n"); 
    }
    return 0;
}