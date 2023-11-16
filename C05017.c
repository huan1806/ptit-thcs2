#include <stdio.h>

#define f(i, a, b) for (int i = a; i <= b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)

void enterArr(int arr[][100], int n, int m) {
    f(i, 0, n - 1) {
        f(j, 0, m - 1) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printResult(int arr[][100], int n, int m) {
    int up = 0, down = n - 1, left = 0, right = m - 1, count = 0;
    while (count != n * m) {
        count += 2 * (right - left + down - up);
        f(i, left, right) {
            printf("%d ", arr[up][i]);
        }
        up++;
        f(i, up, down) {
            printf("%d ", arr[i][right]);
        }
        right--;
        if (up > down) {
            break;
        }
        fr(i, right, left) {
            printf("%d ", arr[down][i]);
        }
        down--;
        if (left > right) {
            break;
        }
        fr(i, down, up) {
            printf("%d ", arr[i][left]);
        }
        left++;
    }
    printf("\n");
}

void solve() {
    int n, m, arr[100][100];
    scanf("%d %d", &n, &m);
    enterArr(arr, n, m);
    printResult(arr, n, m);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}
