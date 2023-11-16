#include <stdio.h>
#include <string.h>

#define DELIMITERS " \r\n"

void solve() {
    char line[1200];
    fgets(line, 1199, stdin);
    char *token = strtok(line, DELIMITERS);
    int count_odd = 0, count_even = 0;
    while (token != NULL) {
        if ((token[strlen(token) - 1] - '0') % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
        token = strtok(NULL, DELIMITERS);
    }
    if (count_even > count_odd && (count_even + count_odd) % 2 == 0
        || count_odd > count_even && (count_even + count_odd) % 2 != 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_num;
    scanf("%d\n", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}