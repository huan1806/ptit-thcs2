#include <stdio.h>

void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void sort(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[min_idx] > arr[j]) {
				min_idx = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;

		printArray(arr, size);
		printf("\n");
	}
}

void solve() {
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
}

int main () {
    solve();

    return 0 ;
}
