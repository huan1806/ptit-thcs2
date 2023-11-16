#include <stdio.h>
#include <string.h>

int main() {
    char N[9];
    scanf("%s", N);
    int sum = 0;
    for (int i = 0; i < strlen(N); i++) {
        sum += N[i] - '0';
    }
    printf("%d", sum);
    return 0;
}