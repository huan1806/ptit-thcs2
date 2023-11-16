#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *toLower(char *str) {
	char *result = (char *) malloc(strlen(str) * sizeof(char));
	strcpy(result, str);
	for (char *p = result; *p; p++) {
		*p = tolower(*p);
	}
	return result;
}

void solve() {
	char str1[201], str2[21];
	fgets(str1, 200, stdin);
	scanf("%s\n", str2);
	char *token = strtok(str1, " \n\r");
	char *str2_lowercase = toLower(str2);
	while (token != NULL) {
		if (strcmp(str2_lowercase, toLower(token))) {
			printf(" %s", token);
		}
		token = strtok(NULL, " \n\r");
	}
	printf("\n");
}

int main() {
	int test_num;
	scanf("%d\n", &test_num);
	for (int i = 1; i <= test_num; i++) {
		printf("Test %d:", i);
		solve();
	}
	return 0;
}
