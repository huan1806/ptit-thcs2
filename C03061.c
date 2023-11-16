#include <stdio.h>
#include <string.h>

int check(char digits[]) {
    int len = strlen(digits);
    int first = digits[0] - '0';
    int last = digits[len - 1] - '0';

    if (first != 2 * last && last != 2 * first) {
        return 0;
    }

    for (int i = 1; i <= (len - 1) / 2; i++) {
        if (digits[i] != digits[len - i - 1]) {
            return 0;
        }
    }

    return  1;
}

void solve() {
    char digits[18];
    scanf("%s", digits);
    if (check(digits)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_case;
    scanf("%d", &test_case);
    while (test_case--) {
        solve();
    }
    
    return 0;
}