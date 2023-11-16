#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char number[9];
    scanf("%s", number);
    int len = strlen(number);
    char temp = number[len - 1];
    number[len - 1] = number[0];
    number[0] = temp;

    bool eliminate_0 = true;
    for (int i = 0; i < len; i++) {
        if (eliminate_0 && number[i] == '0') {
            continue;
        } else {
            eliminate_0 = false;
            printf("%c", number[i]);
        }
    }
    return 0;
}