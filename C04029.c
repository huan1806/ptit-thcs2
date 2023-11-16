#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
}

void sort(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int sorted = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				sorted = 1;				
			}
		}
		if (sorted == 0) {
			break;
		}
		printf("Buoc %d:", i + 1);
		printArr(arr, n);
	}
}

void solve() {
	int n, arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
}

int main() {
	solve();
	return 0;
}
