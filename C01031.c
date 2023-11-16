#include <stdio.h>
#include <math.h>

void solve() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			while (n % i == 0 && i <= sqrt(n)) {
				printf("%dx", i);
				n /= i;
			}
		}
	}
	printf("%d", n);
}

int main() {
	solve();
	return 0;
}
