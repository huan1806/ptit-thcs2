#include <stdio.h>
#include <string.h>

int countDifferences(char *str){
	int len = strlen(str);
	int diff = 0;
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			diff++;
		}
	}
	return diff;
}

void solve() {
	char str[21];
	scanf("%s", str);
	int diff = countDifferences(str);
	if (diff == 1 || (diff == 0 && strlen(str) % 2 == 1)) {
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
	return 0;
}
