#include <stdio.h>
#include <string.h>

int getBase10Val(char x) {
    if (x == 'I') {
        return 1;
    }
    if (x == 'V') {
        return 5;
    }
    if (x == 'X') {
        return 10;
    }
    if (x == 'L') {
        return 50;
    }
    if (x == 'C') {
        return 100;
    }
    if (x == 'D') {
        return 500;
    }
    return 1000;
}

void solve() {
    char input[100];
    scanf("%s", input);
    int value = 0, left = 0, current = 0;
    for (int i = (int) strlen(input) - 1; i >= 0; i--) {
        current = getBase10Val(input[i]);
        if (current >= left) {
            value += current;
        } else {
            value -= current;
        }
        left = current;
    }
    printf("%d\n", value);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        solve();
    }
    return 0;
}