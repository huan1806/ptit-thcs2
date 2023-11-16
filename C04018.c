#include <stdio.h>

void solve() {
    int n, count = 0;
    scanf("%d", &n);
    int previous = 101;
    while (n--) {
        int current;
        scanf("%d", &current);
        if (current == previous) {
            count++;
        }
        previous = current;
    }
    printf("%d\n", count);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}