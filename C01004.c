#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double num;
        scanf("%lf", &num);
        printf("%.15lf\n", 1.0 / num);
    }
    
    return 0;
}