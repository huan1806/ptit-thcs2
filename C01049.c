#include <stdio.h>
#include <string.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while(test_cases--) {
        char number[9];
        scanf("%s", number);
        int even = 0;
        for (int i = 0; i < strlen(number); i++) {
            if ((number[i] - '0') % 2 == 1) {
                even++;
            }
        }
        printf("%d %lld\n", even, strlen(number) - even);
    }
    return 0;
}