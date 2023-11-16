#include <stdio.h>
#include <string.h>

#define MAX 100001

void largestSubStr(char string[]) {
    int idx = -1;
    while (idx + 1 < strlen(string)) {
        char max = 'a' - 1;
        int repetition = 0;
        for (int i = idx + 1; i < strlen(string); i++) {
            if (string[i] > max) {
                max = string[i];
                repetition = 1;
                idx = i;
            } else if (string[i] == max) {
                repetition++;
                idx = i;
            }
        }
        for (int i = 0; i < repetition; i++) {
            printf("%c", max);
        }
    }
}

void solve() {
    char string[MAX];
    scanf("%s", string);
    largestSubStr(string);
}

int main() {
    solve();
    return 0;
}