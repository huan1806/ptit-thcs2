#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int start = row >= col ? row : col;
    for (int i = 1; i <= row; i++)
    {
        int temp = i > col ? col : i;
        for (int j = 1; j <= temp; j++)
        {
            printf("%c", start - j + 'a');
        }
        for (int j = 1; j <= col - temp; j++)
        {
            printf("%c", start - i + 'a');
        }
        printf("\n");
    }
    return 0;
}