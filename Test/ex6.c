#include <stdio.h>
#include <string.h>

void solve() {
	char num[19];
	int count[10];
	scanf("%s", num);
	for (int i = 0; i <= 9; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < strlen(num); i++) {
		count[num[i] - '0']++;
	}
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= count[i]; j++) {
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
}
