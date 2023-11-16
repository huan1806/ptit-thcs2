#include <stdio.h>
#include <string.h>

void solve() {
    int count[2][8];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 8; j++) {
            count[i][j] = 0;
        }
    }
    
    int order = 1;
    char number[19];
    scanf("%s", number);

    for (int i = 0; i < strlen(number); i++) {
        int digit = number[i] - '0';
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            if (!count[0][digit]) {
                count[0][digit] = order++;
            }
            count[1][digit]++;
        }
    }

    for (int i = 1; i <= 4; i++) {
        for (int j = 2; j <= 7; j++) {
            if (count[0][j] == i) {
                printf("%d %d\n", j, count[1][j]);
            }
        }
    }

}

int main() {
    solve();
    return 0;
}