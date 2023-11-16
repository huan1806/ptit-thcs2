#include <stdio.h>
#include <string.h>

int main() {
    char string[9];
    scanf("%s", string);
    int result = 1;
    for (int i = 0; i < strlen(string); i++) {
        result *= string[i] - '0';
    }
    printf("%d", result);
    return 0;
}