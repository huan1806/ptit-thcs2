#include <stdio.h>

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void solve() {
    int n, odds[1000], evens[1000], odds_idx = 0, evens_idx = 0;
    scanf("%d", &n);
    while (n--)
    {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0) {
            evens[evens_idx++] = temp;
        } else {
            odds[odds_idx++] = temp;
        }
    }
    print_arr(evens, evens_idx);
    print_arr(odds, odds_idx);
}

int main() {
    solve();
    return 0;
}