#include <stdio.h>
#include <stdbool.h>
#define MAX 1300*1000
int main() {
    bool seize[MAX];

    for (int i = 2; i < MAX; i++) {
        seize[i] = true;
    }

    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 2; i < MAX; i++) {
        if (seize[i]) {
            printf("%d\n", i);
            if (++count == n) {
                break;
                break;
            }
            for (int j = 2 * i; j < MAX; j += i) {
                seize[j] = false;
            }
        }
    }
    return 0;
}