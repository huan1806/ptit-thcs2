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
		int row = i == a - 1 ? b - 1 : i == b - 1 ? a - 1 : i;
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[row][j]);
		}
		printf("\n");
	}
}

int main() {
	solve();
	return 0;
}
