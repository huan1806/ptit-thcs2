#include <stdio.h>

int getChar(int n) {
    if (n == 0) {
        return '@';
    }
    return 'A' + n - 1;
}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            int value = i + j > col - 1 ? col - 1: i + j;
            printf("%c", getChar(value));
        }
        printf("\n");
    }
    return 0;
}