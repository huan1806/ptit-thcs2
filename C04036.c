#include <stdio.h>

int value[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int process(int n) {
	int count = 0;
	for (int i = 9; i >= 0; i--) {
		if (n >= value[i]) {
			count += n / value[i];
			n = n % value[i];
		}
	}
	return count;
}

void solve() {
	int n;
	scanf("%d", &n);
	printf("%d\n", process(n));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
