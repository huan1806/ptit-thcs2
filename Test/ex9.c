#include <stdio.h>
#include <string.h>

void solve() {
	char num[501];
	unsigned long long product = 1;
	int sum = 0;
	scanf("%s", num);
	for (int i = 0; i < strlen(num); i++) {
		int digit = num[i] - '0';
		if (i % 2 == 0) {
			if (digit != 0) {
				product = product * digit;
			}
		} else {
			sum += digit;
		}
	}
	printf("%llu %d\n", product, sum);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
