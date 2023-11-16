#include <stdio.h>
#include <string.h>

int main() {
    char number[9];
    scanf("%s", number);
    printf("%c %c", number[0], number[strlen(number) - 1]);
    return 0;
}