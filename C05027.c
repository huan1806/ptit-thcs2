#include <stdio.h>

#define MAX 1000000

int main() {
	int n, min1 = MAX, min2 = MAX;
	scanf("%d", &n);
	while (n--) {
		int a, b;
		scanf("%d %d", &a, &b);
		if(a < min1) {
			min1 = a;
		}
		if(b < min2) {
			min2 = b;
		}
	}
	printf("%lld\n", (long long) min1 * min2);
	return 0;
}
