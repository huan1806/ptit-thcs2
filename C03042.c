#include <stdio.h>

int values[2000], len = 0, arr[8];

void generate(int target, int start, int current) {
    if (target == start) {
        int value = 0;
        for (int i = 0; i < start; i++) {
            value = value * 10 + arr[i];
        }
        values[len++] = value;
    } else {
        for (int i = current - 1; i >= 0; i--) {
            arr[start] = i;
            generate(target, start + 1, i);
        }
    }
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (values[i] >= a && values[i] <= b) {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    for (int i = 1; i <= 8; i++) {
        generate(i, 0, 10);
    }
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}