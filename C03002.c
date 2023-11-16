#include <stdio.h>
#include <stdbool.h>

int main() {
    bool seize[1000*1000];
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        seize[i] = true;
    }
    for (int i = 2; i < n; i++) {
        if (seize[i]) {
            printf("%d\n", i);
            for (int j = 2 * i; j < n; j += i) {
                seize[j] = false;
            }
        }
    }
    return 0;
}