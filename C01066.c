#include <stdio.h>

int main() {
    int min, b, c;
    scanf("%d %d %d", &min, &b, &c);
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("%d", min);
    return 0;
}