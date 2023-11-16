#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *getResult(char *input) {
	if (input[0] == '0') {
		return "INVALID";
	}
	int *digits = (int *) calloc(10, sizeof(int));
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] < '0' || input[i] > '9') {
            free(digits);
			return "INVALID";
		} else {
			digits[input[i] - '0']++;
		}
	}
	for (int i = 0; i <= 9; i++) {
		if (digits[i] == 0) {
            free(digits);
			return "NO";
		}
	}
    free(digits);
	return "YES";
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
