#include <stdio.h>

#define R 0
#define D 1
#define L 2
#define U 3

int n, arr[102][102];

void init() {
	for (int i = 0; i <= n + 1; i++) {
		arr[0][i] = -1;
		arr[n + 1][i] = -1;
	}
	for (int i = 1; i <= n; i++) {
		arr[i][0] = -1;
		arr[i][n + 1] = -1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = 0;
		}
	}
}

void fill(int row, int col, int val, int direction) {
	arr[row][col] = val;
	if (val == 1) {
		return;
	}
	switch (direction) {
		case R:
			if (arr[row][col + 1] == 0) {
				fill(row, col + 1, val - 1, R);
			} else {
				fill(row + 1, col, val - 1, D);
			}
			break;
		case D:
			if (arr[row + 1][col] == 0) {
				fill(row + 1, col, val - 1, D);
			} else {
				fill(row, col - 1, val - 1, L);
			}
			break;
		case L:
			if (arr[row][col - 1] == 0) {
				fill(row, col - 1, val - 1, L);
			} else {
				fill(row - 1, col, val - 1, U);
			}
			break;
		case U:
			if (arr[row - 1][col] == 0) {
				fill(row - 1, col, val - 1, U);
			} else {
				fill(row, col + 1, val - 1, R);
			}
			break;
        default:
            break;
	}
}

void printResult() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void solve() {
	scanf("%d", &n);
	init();
	fill(1, 1, n * n, R);
	printResult();
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
