#include <stdio.h>

int arr[8];

void print(int value, int start, int end) {
    if (start > end) {
        for (int i = 1; i <= end; i++) {
            printf("%d", arr[i]);
        }
        printf(" ");
    } else {
        for (int i = value; i <= 9; i++) {
            arr[start] = i;
            print(i, start + 1, end);
        }
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        int n;
        scanf("%d", &n);
        print(1, 1, n);
        printf("\n");
    }
    return 0;
}