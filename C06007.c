#include <stdio.h>
#include <string.h>

void solve() {
	char string[51][100], len = -1;
	while (scanf("%s", string[++len]) != EOF)
	for (int i = 0; i < len - 1; i++) {
	    if(strcmp(string[i], string[len - 1]) != 0) {
	        	printf("%s ", string[i]);
	    }
	}
}

int main() {
	solve();
	return 0;
}
