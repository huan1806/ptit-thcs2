#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printResult(int *a, int *b, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d %d ", a[i], b[size - i - 1]);
	}
	printf("\n");
}

void enter(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
}

void solve() {
	int n, a[100], b[100];
	scanf("%d", &n);
	
	enter(a, n);
	enter(b, n);
	
	sort(a, n);
	sort(b, n);
	
	printResult(a, b, n);
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
