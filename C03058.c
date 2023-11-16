#include <stdio.h>

#define MAX 101
#define ll long long

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

void solve() {
	ll n;
	scanf("%lld", &n);
	ll result = 1;
	for (ll i = 1; i <= n; i++) {
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
