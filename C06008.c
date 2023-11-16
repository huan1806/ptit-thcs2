#include <stdio.h>
#include <string.h>

void solve() {
	char string[50][100], n = -1, result[50][100], m = 0;
	while (1) {
		if (scanf("%s", string[++n]) == EOF) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
	    int identical = 0;
	    for (int j = 0; j < m; j++) {
	    	if (strcmp(string[i], result[j]) == 0) {
	    	    identical = 1;
	    	    break;
			}
		}
		if (!identical) {
            strcpy(result[m++], string[i]);
		}
	}
	for (int i = 0; i < m; i++) {
		printf("%s ", result[i]);
	}
}

int main() {
	solve();
	return 0;
}
