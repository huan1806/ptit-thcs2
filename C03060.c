#include <stdio.h>

int count2(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        int temp = i;
        while (temp % 2 == 0)
        {
            count++;
            temp /= 2;
        }
    }
    return count;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    if (count2(n) >= k) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}