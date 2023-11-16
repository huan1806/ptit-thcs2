#include <stdio.h>
#include <string.h>

void solve() {
	char num[19];
	scanf("%s", num);
	int len = strlen(num);
	if (num[0] == num[len - 2] && num[1] == num[len - 1]) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
}
