#include <stdio.h>

void solve() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j * 2);
		}
		for (int j = 1; j <= i - 1; j++) {
			printf("%d", 2 * i - 2 * j);
		}
		printf("\n");
	}
}

int main() {
    solve();
	return 0;
}
