#include <stdio.h>

void solve() {
	int n, arr[101] = {1001}, count[101], max = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > arr[i - 1]) {
			count[i] = count[i - 1] + 1;
			if (count[i] > max) {
				max = count[i];
			}
		} else {
			count[i] = 1;
		}
	}
	printf("%d\n", max);
	for (int i = 1; i <= n; i++) {
		if (count[i] == max) {
			for (int j = max - 1; j >= 0; j--) {
				printf("%d ", arr[i - j]);
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
