#include <stdio.h>
#include <string.h>

int main() {
    char n[9];
    scanf("%s", n);
    int even = 0;
    for (int i = 0; i < strlen(n); i++) {
        if((n[i] - '0') % 2 == 1) {
            even++;
        }
    }
    printf("%d %lld", even, strlen(n) - even);
    return 0;
}