#include <stdio.h>
#include <string.h>

void solve() {
    char string[100001];
    fgets(string, 100001, stdin);
    printf("%llu", strlen(string) - 2);
}

int main() {
    solve();
    return 0;
}