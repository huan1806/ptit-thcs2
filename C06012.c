#include <stdio.h>
#include <string.h>

int isAPrimeDigit(char c) {
	return c == '2' || c == '3' || c == '5' || c == '7';
}

int isSatisfed(char *digits) {
	int len = strlen(digits); // eleminate '\n' character
	for (int i = 0; i < (len + 1) / 2; i++) {
		if (digits[i] != digits[len - i - 1] || !isAPrimeDigit(digits[i])) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	char digits[501];
	scanf("%s", digits);
	if (isSatisfed(digits)) {
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
