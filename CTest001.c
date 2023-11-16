#include <stdio.h>

int main() {
	long long n, max = 0;
	while (scanf("%lld", &n) != EOF) {
		if (n > max) {
			max = n;
		}
	}
	printf("%lld", max);
	return 0;
}
