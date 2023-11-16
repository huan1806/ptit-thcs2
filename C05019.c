#include <stdio.h>

#define R 0
#define D 1
#define L 2
#define U 3

int n;
unsigned long long fibs[81], arr[22][22];

void initPrimes() {
	fibs[0] = 0;
	fibs[1] = 1;
	for (int i = 2; i <= 80; i++) {
		fibs[i] = fibs[i - 1] + fibs[i - 2];
	}
}

void init() {
	for (int i = 0; i <= n + 1; i++) {
		arr[0][i] = -2;
		arr[n + 1][i] = -2;
	}
	for (int i = 1; i <= n; i++) {
		arr[i][0] = -2;
		arr[i][n + 1] = -2;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = -1;
		}
	}
}

void fill(int row, int col, int val, int direction) {
	arr[row][col] = fibs[val++];
	if (val == n * n) {
		return;
	}
	switch (direction) {
		case R:
			if (arr[row][col + 1] == -1) {
				fill(row, col + 1, val, R);
			} else {
				fill(row + 1, col, val, D);
			}
			break;
		case D:
			if (arr[row + 1][col] == -1) {
				fill(row + 1, col, val, D);
			} else {
				fill(row, col - 1, val, L);
			}
			break;
		case L:
			if (arr[row][col - 1] == -1) {
				fill(row, col - 1, val, L);
			} else {
				fill(row - 1, col, val, U);
			}
			break;
		case U:
			if (arr[row - 1][col] == -1) {
				fill(row - 1, col, val, U);
			} else {
				fill(row, col + 1, val, R);
			}
			break;
        default:
            break;
	}
}

void printResult() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%lld ", arr[i][j]);
		}
		printf("\n");
	}
}

void solve() {
	scanf("%d", &n);
	init();
	initPrimes();
	fill(1, 1, 0, R);
	printResult();
}

int main() {
	solve();
	return 0;
}
