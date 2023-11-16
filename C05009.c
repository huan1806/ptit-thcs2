#include <stdio.h>

void solve() {
	int m, arr[50][50];
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= m; j++) {
			int col = j == i ? m - i + 1 : j == m - i + 1 ? i : j;
			printf("%d ", arr[i - 1][col - 1]);
		}
		printf("\n");
	}
}

int main() {
	solve();
	return 0;
}
