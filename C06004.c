#include <stdio.h>
#include <string.h>

#define MAX 10000

int isLetter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int isNumeric(char c) {
	return c >= '0' && c <= '9';
}

void solve() {
	char string[MAX];
	int number_of_letters = 0, number_of_digits = 0;
	fgets(string, MAX, stdin);
	for (int i = 0; i < strlen(string) - 1; i++) {
		if (isLetter(string[i])) {
			number_of_letters++;
		} else if (isNumeric(string[i])) {
			number_of_digits++;
		}
	}
	printf(
		"%d %d %lld",
		number_of_letters,
		number_of_digits,
		strlen(string) - 1 - number_of_letters - number_of_digits
	);
}

int main() {
	solve();
	return 0;
}
