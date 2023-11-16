#include <stdio.h>
#include <string.h>

void solve() {
	char string[51][100], word[100], len = 0;
	while (scanf("%s", word) != EOF) {
	   strcpy(string[len++], word);
	}
	for (int i = 0; i < len - 1; i++) {
	    if(strcmp(string[i], word) != 0) {
	        	printf("%s ", string[i]);
	    }
	}
}

int main() {
	solve();
	return 0;
}
