#include <stdio.h>
#include <limits.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp > max1) {
            max2 = max1;
            max1 = temp;
        } else if (temp < max1 && temp > max2) {
            max2 = temp;
        }
    }
    printf("%d %d", max1, max2);
    return 0;
}