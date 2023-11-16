#include <stdio.h>
#include <math.h>

long long findMaxPrimeFactor(long long number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			while (number % i == 0) {
				number /= i;
			}
			if (number == 1) {
				number = i;
			}
		}
	}
	return number;
}

void solve() {
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", findMaxPrimeFactor(n));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
        solve();
	}
	return 0;
	
}
