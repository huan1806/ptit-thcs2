#include <stdio.h>
#include <string.h>

int isOddAdvantageNumber(char number[]) {
    int len = strlen(number);
    if ((number[len - 1] - '0') % 2 == 0) {
        return 0;
    }
    int oddCount = 1;
    for (int i = 0; i < len - 1; i++) {
        if ((number[i] - '0') % 2 == 1) {
            oddCount++;
        }
    }
    return 2 * oddCount > len;
}

void solve() {
    char number[19];
    scanf("%s", number);
    if (isOddAdvantageNumber(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}