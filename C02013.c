#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int start = row >= col ? row : col;
    for (int i = start; i > start - row; i--) {
        if (i > col) {
            for (int j = i; j >= i - col + 1; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = i; j >= 1; j--) {
                printf("%d", j);
            }
            for (int j = 2; j <= col - i + 1; j++) {
                printf("%d", j);
            }
        }
        printf("\n"); 
    }
    return 0;
}