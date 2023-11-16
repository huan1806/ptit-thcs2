#include <stdio.h>
#include <stdlib.h>

struct Number {
    int val;
    int count;
};

int isNonDecreasing(int n) {
    int previous = 9;
    while (n > 0) {
        int current = n % 10;
        if (previous < current) {
            return 0;
        }
        previous = current;
        n /= 10;
    }
    return 1;
}

int index_of(int val, struct Number numbers[], int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i].val == val) {
            return i;
        }
    }
    return - 1;
}

int compare(const void *e1, const void *e2) {
    struct Number *n1 = (struct Number *) e1;
    struct Number *n2 = (struct Number *) e2;
    return n2->count - n1->count;
}

void printResult(struct Number numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d %d\n", numbers[i].val, numbers[i].count);
    }
}

void solve() {
    int val, size = 0;
    struct Number numbers[100000];
    while (scanf("%d", &val) != EOF) {
        if (isNonDecreasing(val)) {
            int idx = index_of(val, numbers, size);
            if (idx == -1) {
                numbers[size].val = val;
                numbers[size++].count = 1;
            } else {
                numbers[idx].count++;
            }
        }
    }
    qsort(numbers, size, sizeof(struct Number), compare);
    printResult(numbers, size);
}

int main() {
    solve();
    return 0;
}