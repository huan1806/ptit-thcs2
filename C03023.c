#include <stdio.h>

int isPalindromicAndNotContains9(int number) {
	int digits[4], len = 0;
	do {
		int digit = number % 10;
		if (digit == 9) {
			return 0;
		}
		digits[len++] = digit;
		number /= 10;
	} while (number > 0);
	for (int i = 0; i < len / 2; i++) {
		if (digits[i] != digits[len - i - 1]) {
			return 0;
		}
	}
	return 1;
}


void solve() {
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 2; i < n; i++) {
		if (isPalindromicAndNotContains9(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
}

int main() {
    solve();
	return 0;
}
