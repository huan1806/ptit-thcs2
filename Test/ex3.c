#include <stdio.h>

unsigned long long fi[93];

void init() {
	fi[0] = 0;
	fi[1] = 1;
	for (int i = 2; i <= 92; i++) {
		fi[i] = fi[i - 1] + fi[i - 2];
	}
}

void solve() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", fi[n]);
}

int main() {
	init();
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
