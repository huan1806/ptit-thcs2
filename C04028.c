#include <stdio.h>

void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void shift(int *arr, int index, int size) {
	for (int i = size - 1; i > index; i--) {
		arr[i] = arr[i - 1];
	}
}

void sort(int *arr, int size) {
	int result[100];
	for (int i = 0; i < size; i++) {
		result[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] < result[j]) {
				shift(result, j, i + 1);
				result[j] = arr[i];
				break;
			}
		}
		printf("Buoc %d: ", i);
		printArray(result, i + 1);
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
