#include <stdio.h>

#define f(i, a, b) for(int i = a; i <= b; i++)

void enterArr(int arr[][100], int n, int m) {
    f(i, 0, n - 1) {
        f(j, 0, m - 1) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void swap(int *a, int *b) {
    int p = *a;
    *a = *b;
    *b = p;
}

void sort(int arr[][100], int n, int m) {
    f(i, 0, n - 1) {
        f(j, 0, m - 1) {
            f(k, i, n - 1) {
                f(l, j, m - 1) {
                    if (arr[i][j] > arr[k][l]) {
                        swap(&arr[i][j], &arr[k][l]);
                    }
                }
            }
        }
    }
}

void printArr(int arr[][100], int n, int m) {
    f(i, 0, n - 1) {
        f(j, 0, m - 1) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void solve() {
    int n, m, arr[100][100];
    scanf("%d %d", &n, &m);
    enterArr(arr, n, m);
    sort(arr, n, m);
    printArr(arr, n, m);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    f(i, 1, test_num) {
        printf("Test %d:\n", i);
        solve();
    }
    return 0;
}
