#include <stdio.h>

void solve() {
	int n, arr[2][100], new_size = 0, max = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int value, added = 0;
		scanf("%d", &value);
		for (int j = 0; j < new_size; j++) {
			if (arr[0][j] == value) {
				if (++arr[1][j] > max) {
					max = arr[1][j];
				}
				added = 1;
				break;
			}
		}
		if (!added) {
			arr[0][new_size] = value;
			arr[1][new_size++] = 1;
		}
	}
	for (int i = 0; i < new_size; i++) {
		if (arr[1][i] == max) {
			printf("%d ", arr[0][i]);
		}
	}
	printf("\n");
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
        solve();
	}
	return 0;
}
