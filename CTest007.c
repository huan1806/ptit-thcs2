#include <stdio.h>
#include <string.h>

int isInBase3(char *string) {
	for (int i = 0; i < strlen(string) - 1; i++) {
		if (string[i] > '2' || string[i] < '0') {
			return 0;
		}
	}
	return 1;
}

void solve() {
	char string[19];
	fgets(string, 19, stdin);
	if (isInBase3(string)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int test_cases;
	scanf("%d\n", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
