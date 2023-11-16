#include <stdio.h>

void solve() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d ", i + j * (2 * n - j - 1) / 2);
		}
		printf("\n");
	}
}

int main() {
    solve();
	return 0;
}
