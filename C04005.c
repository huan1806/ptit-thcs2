#include <stdio.h>

void solve() {
    int n, arr[100], index_max[100], number_max = 0, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp > max) {
            max = temp;
            number_max = 1;
            index_max[0] = i;
        } else if (temp == max) {
            index_max[number_max++] = i;
        }
    }
    printf("%d\n", max);
    for (int i = 0; i < number_max; i++) {
        printf("%d ", index_max[i]);
    }
    printf("\n");
}

int main() {

    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}