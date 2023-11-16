#include <stdio.h>

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (c - a == d - b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}