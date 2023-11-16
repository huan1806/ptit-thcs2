#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a >= b ? a : b;
}

void solve() {
    char str[51];
    scanf("%s", str);
    int count[50] = {1}, _max = 1;
    for (int i = 1; i < strlen(str); i++) {
        count[i] = 1;
        for (int j = 0; j < i; j++) {
            if(str[j] < str[i]) {
                count[i] = max(count[i], count[j] + 1);
            }
        }
        _max = max(_max, count[i]);
    }
    printf("%d", 26 - _max);
}

int main() {
    solve();
    return 0;
}