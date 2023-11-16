#include <stdio.h>

void solve() {
	int m, n, p, arr[100][100];
	scanf("%d %d %d", &n, &m, &p);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	p--;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i][p] > arr[j][p]) {
				
				int temp = arr[i][p];
				arr[i][p] = arr[j][p];
				arr[j][p] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
