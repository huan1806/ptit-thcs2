#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

void solve() {
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int number;
        scanf("%d", &number);
        if (isEven(number)) {
            printf("%d ", number);
        }
    }
    printf("\n");
    
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        solve();
    }
    return 0;
}