#include <stdio.h>
#include <math.h>

void checkPerfectSquare(int n) {
    if (pow((int) sqrt((double) n), 2) == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int n, num;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        checkPerfectSquare(num);
    }

    return 0;
}