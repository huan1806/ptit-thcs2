#include <stdio.h>
#include <string.h>

int indexOf(char strings[][1001], int size, char word[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(word, strings[i]) == 0) {
            return i;
        }
    }
    return -1;
}


void solve() {
    int len_max = 0, count = 0, freq[1000] = {0};
    char word[1001], res[1000][1001];

    while (scanf("%s", word) != EOF) {
        int len = (int) strlen(word);
        if (len > len_max) {
            len_max = len;
            count = 1;
            freq[0] = 1;
            strcpy(res[0], word);
        } else if (strlen(word) == len_max) {
            int idx = indexOf(res, count, word);
            if (idx != -1) {
                freq[idx]++;
            } else {
                freq[count] = 1;
                strcpy(res[count++], word);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s %llu %d\n", res[i], strlen(res[i]), freq[i]);
    }
}

int main() {
    solve();
    return 0;
}
