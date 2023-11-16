#include <stdio.h>
#include <math.h>

long long replace(long long n, int source, int target) {
	long long result = 0;
	int exp = 0;
	while (n > 0) {
		long long digit = n % 10;
		result += (long long) pow(10, exp++) * (digit == source ? target : digit);
		n /= 10;
	}
	return result;
}

void solve() {
	long long a, b, count = 0;
	scanf("%lld %lld", &a, &b);
	printf("%lld", replace(a, 6, 5) + replace(b, 6, 5));
	printf(" %lld\n", replace(a, 5, 6) + replace(b, 5, 6));

}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--) {
		solve();	
	}
	return 0;
}

