#include <stdio.h>

void solve() {
	int n;
	scanf("%d", &n);
	double sum = 0;
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i += 2) {
			sum += 1.0 / i;
		}
	} else {
		for (int i = 1; i <= n; i += 2) {
			sum += 1.0 / i;
		}
	}
	printf("%.6f\n", sum);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
