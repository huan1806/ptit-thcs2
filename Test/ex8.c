#include <stdio.h>

int reverse(int n) {
	int reversed = 0;
	while (n > 0) {
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

void solve() {
	int n;
	scanf("%d", &n);
	int reversed = reverse(n);
	if (gcd(n, reversed) > 1) {
		printf("NO\n");
	} else {
		printf("YES\n");
	}
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
