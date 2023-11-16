#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("1");
    } else {
        int fi[50];
        fi[0] = 0;
        fi[1] = 1;
        int current = 1;
        while (fi[current] < n) {
            current++;
            fi[current] = fi[current - 1] + fi[current - 2];
        }
        if (fi[current] == n) {
            printf("1");
        } else {
            printf("0");
        }
    }
    return 0;
}