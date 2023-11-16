#include <stdio.h>

void solve() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf("~");
		}
		for (int j = 1; j <= i; j++) {
			printf("%d", j * 2 - 1);
		}
		for (int j = 1; j <= i - 1; j++) {
			printf("%d", 2 * i - 2 * j - 1);
		}
		printf("\n");
	}
}

int main() {
    solve();
	return 0;
}
