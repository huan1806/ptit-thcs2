#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 51
#define DELIMITERS " \n"

void capitalizeFirstLetter(char *str) {
	putchar(toupper(str[0]));
	int i = 1;
	while (str[i]) {
		char ch = str[i++];
		putchar(tolower(ch));
	}
}

void toUpper(const char *str) {
	int i = 0;
	while (str[i]) {
		char ch = str[i++];
		putchar(toupper(ch));
	}
}

void solve() {
	char full_name[51], count = 0;
	fgets(full_name, MAX - 1, stdin);

	char *token = strtok(full_name, DELIMITERS);
	char *family_name = (char *) malloc(strlen(token) * sizeof(char));
	strcpy(family_name, token);
	token = strtok(NULL, DELIMITERS);
	while (token != NULL) {
		if (count++ > 0) {
			printf(" ");
		}
		capitalizeFirstLetter(token);
		token = strtok(NULL, DELIMITERS);
	}
	printf(", ");
	toUpper(family_name);
	printf("\n");
}

int main() {
	int test_num;
	scanf("%d\n", &test_num);
	while (test_num--) {
		solve();
	}
	return 0;
}
