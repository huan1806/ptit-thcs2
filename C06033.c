#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mix(const char s1[], const char s2[], int n) {
    char *res = (char *) calloc(2 * n + 1, sizeof(char));
    for (int i = 0; i < n; i++) {
        res[2 * i] = s2[i];
        res[2 * i +  1] = s1[i];
    }
    return res;
}

void separate(char s1[], char s2[], const char s[], int n) {
    for (int i = 0; i < n; i++) {
        s1[i] = s[i];
        s2[i] = s[n + i];
    }
}

int cal(char s1[], char s2[], char s[], int n) {
    for (int i = 1; i <= 2 * n; i++) {
        char *mixed = mix(s1, s2, n);
        separate(s1, s2, mixed, n);
        if (strcmp(s, mixed) == 0) {
            return i;
        }
    }
    return -1;
}

void solve() {
    int n;
    do {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        char s1[n + 1], s2[n + 1], s[2 * n + 1];
        scanf("%s %s %s", s1, s2, s);
        printf("%d\n", cal(s1, s2, s, n));
    } while (1);
}

int main() {
    solve();
    return 0;
}