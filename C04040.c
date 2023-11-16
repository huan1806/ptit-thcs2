#include <stdio.h>
#include <limits.h>

void solve() {
	int n, value;
	long long sum = 0, max = INT_MIN;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &value);
		sum = sum > 0 ? sum + value : value;
		if (sum > max) {
			max = sum;
		}
	}
	printf("%lld\n", max);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
