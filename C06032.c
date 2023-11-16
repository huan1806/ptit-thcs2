#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *e1, const void *e2) {
    char str1[21], str2[21];
    strcpy(str1, *(char **) e1);
    strcat(str1, *(char **) e2);
    strcpy(str2, *(char **) e2);
    strcat(str2, *(char **) e1);
    return strcmp(str1, str2);
}

char **enterStrings(int m) {
    char **str = (char **) malloc(m * sizeof(char *));
    for (int i = 0; i < m; i++) {
        str[i] = (char *) malloc(11 * sizeof(char));
        scanf("%s", str[i]);
    }
    return str;
}

void freeMemory(char **str, int m) {
    for (int i = 0; i < m; i++) {
        free(str[i]);
    }
    free(str);
}

void solve() {
	int m;
	scanf("%d", &m);
    char **str = enterStrings(m);
	qsort(str, m, sizeof(char *), compare);
	for (int i = 0; i < m; i++) {
        printf("%s", str[i]);
    }
    freeMemory(str, m);
    printf("\n");
}

int main() {
	int num_test;
	scanf("%d", &num_test);
	while (num_test--) {
		solve();
	}
	return 0;
}
