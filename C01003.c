#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        printf("%ld\n", (long) num * num);
    }

    return 0;
}