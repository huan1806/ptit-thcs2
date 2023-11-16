#include <stdio.h>
#include <math.h>

void solve() {
	int n, p, previous = 0, sum = 0;
	scanf("%d %d", &n, &p);
	for (int i = log(n) / log(p); i >= 1; i--) {
		int current = n / pow(p, i);
		sum += i * (current - previous);
		previous = current;
	}
	printf("%d\n", sum);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--) {
        solve();
	}
	return 0;
}
