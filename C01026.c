#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isAPrimeNumber(int n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n, temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (isAPrimeNumber(temp)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}