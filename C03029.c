#include <stdio.h>
#include <string.h>

int checkAllDigitsEven(char number[]) {
    for (int i = 0; i < strlen(number); i++) {
        if ((number[i] - '0') % 2 != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases--)
    {
        char number[18];
        scanf("%s", number);
        if (checkAllDigitsEven(number)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}