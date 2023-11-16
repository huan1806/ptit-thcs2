#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isStrictIncreasingSeq(char *seq) {
	for (int i = 0; i < strlen(seq) - 1; i++) {
		if (seq[i] >= seq[i + 1]) {
			return 0;
		}
	}
	return 1;
}

int isAllSameSeq(char *seq) {
	for (int i = 0; i < strlen(seq) - 1; i++) {
		if (seq[i] != seq[i + 1]) {
			return 0;
		}
	}
	return 1;
}

int check3FirstAnd2Last(char *seq) {
	return seq[0] == seq[1] && seq[1] == seq[2] && seq[3] == seq[4];
}

int contains6And8Only(char *seq) {
	for (int i = 0; i < strlen(seq); i++) {
		if (seq[i] != '6' && seq[i] != '8') {
			return 0;
		}
	}
	return 1;
}

char *removeDot(char *str) {
	char *result = (char *) malloc(5 * sizeof(char));
	for (int i = 0; i < strlen(str); i++) {
		if (i <= 2) {
			result[i] = str[i];
		} else if (i >= 4) {
			result[i - 1] = str[i];
		}
	}
	return result;
}

void solve() {
	char temp[6], value[7];
	scanf("%s %s", temp, value);
	char *seq = removeDot(value);
	if (
		isStrictIncreasingSeq(seq) || isAllSameSeq(seq)
			|| check3FirstAnd2Last(seq) || contains6And8Only(seq)
	) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--){
		solve();
	}
	return 0;
}
