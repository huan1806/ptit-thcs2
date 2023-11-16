#include <stdio.h>
#include <limits.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp < min1) {
            min2 = min1;
            min1 = temp;
        } else if (temp > min1 && temp < min2) {
            min2 = temp;
        }
    }
    printf("%d %d", min1, min2);
    return 0;
}