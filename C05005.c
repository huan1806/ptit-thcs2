#include <stdio.h>

void process(int test_case) {
    int a, b, arr[10][10];
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Test %d:\n", test_case);
    for (int i = 1; i < a; i++) {
        for (int j = 1; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 1; i <= test_cases; i++) {
        process(i);
    }
    return 0;
}
