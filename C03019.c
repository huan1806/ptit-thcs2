#include <stdio.h>
#include <math.h>

int cal(int n) {
	return n % 2 == 0 ? 9 * pow(10, n / 2 - 1) / 5 : 9 * pow(10, n / 2 - 1);
}

void solve() {
	int n;
	scanf("%d", &n);
	printf("%d\n", cal(n));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
