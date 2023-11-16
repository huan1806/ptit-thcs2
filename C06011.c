#include <stdio.h>
#include <string.h>

int isSatisfied(char *digits) {
	if (digits[0] - '0' != 8) {
		return 0;
	}
	
	int actual_len = strlen(digits) - 1; // eleminate '\n' character
	int sum = 0;
	for (int i = 0; i < (actual_len + 1) / 2; i++) {
		if (digits[i] != digits[actual_len - i - 1]) {
			return 0;
		}
		sum += digits[i] - '0';
	}
	sum *= 2;
	if (actual_len % 2 == 1) {
		sum -= digits[actual_len / 2] - '0';
	}
	return sum % 5 == 0;
}

void solve() {
	char digits[501];
	fgets(digits, 501, stdin);
	if (isSatisfied(digits)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    #endif
	int test_cases;
	scanf("%d\n", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
