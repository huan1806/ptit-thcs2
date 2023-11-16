#include <stdio.h>
#include <string.h>

void solve() {
	char number[19];
	int digits[10];
	scanf("%s", number);
	for (int i = 0; i < 10; i++) {
		digits[i] = 0;
	}
	for (int i = 0; i < strlen(number); i++) {
		digits[number[i] - '0']++;
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= digits[i]; j++) {
			printf("%d", i);
		}
	}
	printf("\n");
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
