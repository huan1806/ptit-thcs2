#include <stdio.h>
#include <string.h>

void solve() {
	char string[201];
	int count = 0, word = 0;
	
	fgets(string, 201, stdin);
	for (int i = 0; i < strlen(string) - 1; i++) {
		if (string[i] == ' ') {
			if (word) {
				count++;
				word = 0;
			}
		} else {
			word = 1;
		}
	}
	if (word) {
		count++;
	}
	printf("%d\n", count);
}

int main() {
	int test_cases;
	scanf("%d\n", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
