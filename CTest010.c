#include <stdio.h>
#include <string.h>

void encode(char *string) {
	char current = string[0];
	int count = 1;
	for (int i = 1; i <= strlen(string); i++) {
		if (string[i] == current) {
			count++;
		} else {
			printf("%c%d", current, count);
			current = string[i];
			count = 1;
		}
	}
	printf("\n");
}

void solve() {
	char string[101];
	scanf("%s", string);
	encode(string);
}

int main() {
	int test_cases;
	scanf("%d\n", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
