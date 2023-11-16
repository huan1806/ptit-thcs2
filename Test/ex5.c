#include <stdio.h>
#include <string.h>

void solve() {
	char num[19], min = '9', max = '0';
	scanf("%s", num);
	for (int i = 0; i < strlen(num); i++) {
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("%c %c\n", max, min);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
