#include <stdio.h>
#include <string.h>

void cutInHalf(char number[]) {
    int enabled = 0;
    for (int i = 0; i < strlen(number); i++) {
        char digit = number[i];
        if (digit >= '2' && digit <= '7') {
            break;
        }
        if (number[i] == '1') {
            enabled = 1;
            printf("%c", number[i]);
        } else if (enabled) {
            printf("0");
        }
    }
    if (!enabled) {
        printf("INVALID");
    }
    printf("\n");
}

void solve() {
    char number[19];
    scanf("%s", number);
    cutInHalf(number);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}