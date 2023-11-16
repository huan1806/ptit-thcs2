#include <stdio.h>
#include <string.h>

void check(char number[]) {
    int sum = 0;
    for (int i = 0; i < strlen(number); i++) {
        sum += number[i] - '0';
    }
    if (sum % 10  == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while(test_cases--) {
        char number[9];
        scanf("%s", number);
        check(number);
    }
    return 0;
}