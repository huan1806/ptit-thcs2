#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        int temp = i > col ? col : i;
        for (int j = temp; j <= col; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        for (int j = 1; j < temp; j++)
        {
            printf("%c", 'A' + temp - j - 1);
        }
        printf("\n");
    }
    return 0;
}