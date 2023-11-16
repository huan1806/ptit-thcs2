#include <stdio.h>
#include <string.h>
#include <limits.h>

void solve() {
	int n, min = INT_MAX;
	scanf("%d\n", &n);
	char collection[50][51];
	for (int i = 0; i < n; i++) {
		scanf("%s", collection[i]);
	}
	for (int i = 0; i < n; i++) {
		int steps = 0;
		for (int j = 0; j < n; j++) {
			char double_str[101];
			strcpy(double_str, collection[j]);
			strcat(double_str, collection[j]);
			char *sub = strstr(double_str, collection[i]);
			if (sub == NULL) {
				printf("-1");
				return;
			}
			steps += sub - double_str;
		}
		if (steps < min) {
			min = steps;
		}
	}
	printf("%d", min);
}

int main() {
	solve();
	return 0;
}
