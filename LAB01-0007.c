#include <stdio.h>

int main() {
	long long n, sum = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		long long temp;
		scanf("%lld", &temp);
		sum += temp;
	}
	printf("%.3f", (float) sum / n);
	return 0;
}
