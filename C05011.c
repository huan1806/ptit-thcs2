#include <stdio.h>
#include <stdlib.h>

int *createMatrix(int n, int m) {
	return (int *) malloc(n * m * sizeof(int));
}

void enterMatrix(int *matrix, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrix[n * i + j]);
		}
	}
}

int *transpose(const int *matrix, int m, int n) {
	int *result = createMatrix(n, m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			result[j * m + i] = matrix[i * n + j];
		}
	}
	return result;
}

int *multiply(const int *matrixA, const int *matrixB, int m, int n, int p) {
	int *result = createMatrix(m, p);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			int sum = 0;
			for (int k = 0; k < n; k++) {
				sum += matrixA[i * n + k] * matrixB[k * p + j];
			}
			result[i * p + j] = sum;
		}	
	}
	return result;
}

void printResult(int *matrix, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matrix[n * i + j]);
		}
		printf("\n");
	}
}

void solve() {
	int m, n;
	scanf("%d %d", &m, &n);
	int *matrix = createMatrix(n, m);
	enterMatrix(matrix, m, n);
	int *transposed_matrix = transpose(matrix, m, n);
	int *result = multiply(matrix, transposed_matrix, m, n, m);
	printResult(result, m, m);
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

