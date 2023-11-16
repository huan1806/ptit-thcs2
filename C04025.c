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

void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void solve() {
    int n, odd[100], even[100], odd_count = 0, even_count = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0) {
            even[even_count++] = temp;
        } else {
            odd[odd_count++] = temp;
        }
    }

    sort(even, even_count);
    sort(odd, odd_count);

    printArray(even, even_count);
    printArray(odd, odd_count);
}

int main () {
    solve();

    return 0 ;
}
