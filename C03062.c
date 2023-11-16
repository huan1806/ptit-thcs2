#include <stdio.h>

#define MAX 41
int primes[MAX];

long long gcd(long long a, long long b) {
	return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

void solve() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long result = 1;
	for (long long i = n; i <= m; i++) {
		result = lcm(result, i);
	}
	printf("%lld\n", result);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
