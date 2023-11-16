#include <stdio.h>
#include <limits.h>

int main() {
	int n, max = INT_MIN, min = INT_MAX;
	while (scanf("%d", &n) != EOF) {
		if (n > max) {
			max = n;
		} else if (n < min) {
			min = n;
		}
	}
	printf("%d %d", max, min);
	return 0;
}
