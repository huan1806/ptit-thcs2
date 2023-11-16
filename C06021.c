#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *getResult(char *input) {
	if (input[0] == '0') {
		return "INVALID";
	}
	int odd = 0, even = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] < '0' || input[i] > '9') {
			return "INVALID";
		} else {
			if ((input[i] - '0') % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
	}
	if ((strlen(input) % 2 == 0 && even > odd) || (strlen(input) % 2 == 1 && odd > even)) {
		return "YES";
	}
	return "NO";
}

void solve() {
	char input[1001];
	scanf("%s", input);
	printf("%s", getResult(input));
	printf("\n");
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--){
		solve();
	}
	return 0;
}
