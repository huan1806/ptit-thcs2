#include <stdio.h>
#include <math.h>

int calculateProductOfPrimeFactors(int number) {
	int product = 1;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			product *= i;
			while (number % i == 0) {
				number /= i;
			}
		}
	}
	return product * number;
}

void solve() {
	int number;
	scanf("%d", &number);
	printf("%d\n", calculateProductOfPrimeFactors(number));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--) {
        solve();
	}
	return 0;
}
