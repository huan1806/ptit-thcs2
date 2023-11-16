#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 101
#define DELIMITERS " \n"

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

void printResult(char *str[], int count) {
	if (count == 0) {
		return;
	}
	printf("%s ", str[0]);
	for (int i = 1; i < count; i++) {
		if (strcmp(str[i], str[i - 1]) != 0) {
			printf("%s ", str[i]);
		}
	}
}

void solve() {
	char str1[MAX], str2[MAX], *result[MAX / 2], count = 0;
	fgets(str1, MAX - 1, stdin);
	fgets(str2, MAX - 1, stdin);

	char *token = strtok(str1, DELIMITERS);
	while (token != NULL) {
		char *substr = strstr(str2, token);
		if (substr == NULL) {
			result[count] = malloc(MAX * sizeof(char));
			strcpy(result[count++], token);
		}
		token = strtok(NULL, DELIMITERS);
	}
	qsort(result, count, sizeof(char *), compare);
	printResult(result, count);
}

int main() {
	solve();
	return 0;
}
