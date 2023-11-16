#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void sort(int *arr, int size) {
	int steps = 1;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf("Buoc %d: ", steps++);
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
