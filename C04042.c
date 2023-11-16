#include <stdio.h>
#include <stdlib.h>

int findFirstOverlookedNumber(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] == arr[i]) {
				return arr[i];
			}
		}
	}
	return -1;
}

void solve() {
	int n;
	scanf("%d", &n);
	int *arr = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int overlooked = findFirstOverlookedNumber(arr, n);
	if (overlooked == -1) {
		printf("NO\n");
	} else {
		printf("%d\n", overlooked);
	}
}

int main() {
	int num_test;
	scanf("%d", &num_test);
	while (num_test--) {
		solve();
	}
	return 0;
}
