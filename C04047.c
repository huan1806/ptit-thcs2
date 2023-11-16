#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int *arr1, int *arr2, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr1[i] > arr1[j]) {
				swap(&arr1[i], &arr1[j]);
				swap(&arr2[i], &arr2[j]);
			}
		}
	}
}

void solve() {
	int n, a[100], b[100], surplus = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	sort(a, b, n);
	for (int i = 0; i < n - 1; i++) {
		surplus += b[i] - (a[i + 1] - a[i]);
		if (surplus < 0) {
			surplus = 0;
		}
	}
	printf("%d", a[n - 1] + b[n - 1] + surplus);
}

int main() {
	solve();
	return 0;
}
