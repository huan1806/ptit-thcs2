#include <stdio.h>
#include <string.h>

int findNextIdenticalChar(char *str, int index) {
	for (int i = index + 1; i < strlen(str); i++) {
		if (str[i] == str[index]) {
			return i;
		}
	}
	return - 1;
}

void solve() {
    int count = 0;
    char str[53];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        int lastIndex = findNextIdenticalChar(str, i);
        for (int j = i + 1; j < lastIndex; j++) {
            if (findNextIdenticalChar(str, j) > lastIndex) {
                count++;
            }
        }
    }
    printf("%d", count);
}

int main() {
    solve();
    return 0;
}
