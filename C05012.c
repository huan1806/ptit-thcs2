#include <stdio.h>
#include <stdlib.h>

int *createMatrix(int n) {
	int *matrix = (int *) malloc(n * n * sizeof(int));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j <= i) {
				matrix[n * i + j] = j + 1;
			} else {
				matrix[n * i + j] = 0;
			}
		}
	}
	return matrix;
}

int *transpose(const int *matrix, int n) {
	int *result = createMatrix(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			result[j * n + i] = matrix[i * n + j];
		}
	}
	return result;
}

int *multiply(const int *matrixA, const int *matrixB, int n) {
	int *result = createMatrix(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int sum = 0;
			for (int k = 0; k < n; k++) {
				sum += matrixA[i * n + k] * matrixB[k * n + j];
			}
			result[i * n + j] = sum;
		}	
	}
	return result;
}

void printResult(int *matrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matrix[n * i + j]);
		}
		printf("\n");
	}
}

void solve() {
	int n;
	scanf("%d", &n);
	int *matrix = createMatrix(n);
	int *transposed_matrix = transpose(matrix, n);
	int *result = multiply(matrix, transposed_matrix, n);
	printResult(result, n);
    free(matrix);
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
