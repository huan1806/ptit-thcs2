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

void freeMemory(int *matrixA, int *matrixB, int *matrixC) {
    free(matrixA);
    free(matrixB);
    free(matrixC);
}

void solve() {
	int m, n, p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	int *matrixA = createMatrix(m, n);
	int *matrixB = createMatrix(n, p);
	int *matrixC = createMatrix(p, q);
	enterMatrix(matrixA, m, n);
	enterMatrix(matrixB, n, p);
	enterMatrix(matrixC, p, q);
	int *result = multiply(multiply(matrixA, matrixB, m, n, p), matrixC, m, p, q);
	printResult(result, m, q);
    freeMemory(matrixA, matrixB, matrixC);
}

int main() {
	solve();
	return 0;
}
