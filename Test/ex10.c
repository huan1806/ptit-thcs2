#include <stdio.h>
#include <limits.h>

void solve() {
	int min = INT_MAX, max = INT_MIN;
	int number;
	while (scanf("%d", &number) != EOF) {
		if (number > max) {
			max = number;
		}
		if (number < min) {
			min = number;
		}
	}
	printf("%d %d", max, min);
}

int main() {
	solve();
	return 0;
}
