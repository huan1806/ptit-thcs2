#include <stdio.h>

void solve() {
	int m, n, arr[50][50], a, b;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &a, &b);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int col = j == a - 1 ? b - 1 : j == b - 1 ? a - 1 : j;
			printf("%d ", arr[i][col]);
		}
		printf("\n");
	}
}

int main() {
	solve();
	return 0;
}
