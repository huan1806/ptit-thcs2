#include <stdio.h>
#include <math.h>

#define MAX 100000

int seize[MAX] = {0, 0};

void init() {
    for (int i = 2; i < MAX; i++) {
        seize[i] = 1;
    }
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (seize[i]) {
            for (int j = 2 * i; j < MAX; j += i) {
                seize[j] = 0;
            }
        }
    }
}

void solve() {
    int n, count[MAX];
    for (int i = 0; i < MAX; i++) {
        count[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        if (seize[value]) {
            count[value]++;
        }
    }
    for (int i = 0; i < MAX; i++) {
        if (count[i] > 0) {
            printf("%d xuat hien %d lan\n", i, count[i]);
        }
    }
}

int main() {
    init();
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 1; i <= test_cases; i++) {
        printf("Test %d:\n", i);
        solve();
    }
    
    return 0;
}