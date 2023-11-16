#include <stdio.h>

void solve() {
	int m, n, arr[50][50], sum_row_max = 0, sum_col_max = 0, row_max, col_max;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		if (sum > sum_row_max) {
			sum_row_max = sum;
			row_max = i;
		}
	}
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			if (j != row_max) {
				sum += arr[j][i];
			}
		}
		if (sum > sum_col_max) {
			sum_col_max = sum;
			col_max = i;
		}
	}
	for (int i = 0; i < m; i++) {
		if (i != row_max) {
			for (int j = 0; j < n; j++) {
				if (j != col_max) {
					printf("%d ", arr[i][j]);
				}
			}
			printf("\n");
		}
	}
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	for (int i = 1; i <= test_cases; i++) {
		printf("Test %d:\n", i);
		solve();
	}
	return 0;
}
