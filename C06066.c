#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ull unsigned long long

int digitAt(const char *number, ull index) {
    return index < strlen(number) ? number[index] - '0' : 0;
}

char *strrev(char *str) {
    if (!str || !*str) {
        return str;
    }
    ull len = strlen(str);
    for (ull i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

ull max(ull a, ull b) {
    return a > b ? a : b;
}

char *sum(const char *a, const char *b) {
    ull size = max(strlen(a), strlen(b));
    char *result = (char *) calloc(size + 1, sizeof(char));
    int carried = 0;
    for (ull i = 0; i < size; i++) {
        int temp = digitAt(a, strlen(a) - i - 1) + digitAt(b, strlen(b) - i - 1) + carried;
        if (temp >= 10) {
            carried = 1;
            temp %= 10;
        } else {
            carried = 0;
        }
        result[i] = (char) (temp + '0');
    }
    if (carried == 1) {
        result[size] = '1';
    }
    return strrev(result);
}

void solve() {
    char *s = (char *) malloc(201 * sizeof(char));
    scanf("%s", s);
    do {
        ull size = strlen(s);
        ull size_left = size / 2;
        ull size_right = size - size_left;
        char *left = (char *) calloc(size_left + 1, sizeof(char));
        char *right = (char *) calloc(size_right + 1, sizeof(char));
        strncpy(left, s + 0, size_left);
        strncpy(right, s + size_left, size_right);
        s = sum(left, right);
        printf("%s\n", s);
        free(left);
        free(right);
    } while (strlen(s) > 1);
    free(s);
}

int main() {
    solve();
    return 0;
}
