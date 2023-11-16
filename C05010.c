#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int temp;
			scanf("%d", &temp);
			if (j >= i && isPrime(temp)) {
				sum += temp;
			}
		}
	}
	printf("%d", sum);
}

int main() {
	
	solve();
	return 0;
}
