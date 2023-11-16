#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isANonDecreasingSequence(char value[]) {
    for (int i = 1; i < strlen(value); i++) {
        if (value[i] < value[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        char value[18];
        scanf("%s", value);
        if (isANonDecreasingSequence(value)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}