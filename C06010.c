#include <stdio.h>
#include <string.h>

int isPalindromicAndHasAllEvenDigits(char *digits) {
	for (int i = 0; i < (strlen(digits) + 1) / 2; i++) {
		if (digits[i] != digits[strlen(digits) - i - 1] || (digits[i] - '0') % 2 != 0) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	char digits[501];
    scanf("%s", digits);
    if (isPalindromicAndHasAllEvenDigits(digits)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int test_cases;
	scanf("%d\n", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
