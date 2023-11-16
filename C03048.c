#include <stdio.h>
#include <string.h>

int isEvenAdvantageNumber(char number[]) {
    int len = strlen(number);
    if ((number[len - 1] - '0') % 2 != 0) {
        return 0;
    }
    int evenCount = 1;
    for (int i = 0; i < len - 1; i++) {
        if ((number[i] - '0') % 2 == 0) {
            evenCount++;
        }
    }
    return 2 * evenCount > len;
}

void solve() {
    char number[19];
    scanf("%s", number);
    if (isEvenAdvantageNumber(number)) {
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