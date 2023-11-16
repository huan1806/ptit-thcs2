#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *toLower(char *s) {
  for(char *p = s; *p; p++) {
	*p = tolower(*p);
  }
  return s;
}

void solve() {
	char input[100], words[10000][100], idx = 0;
	int count[10000];
	while (scanf("%s", input) != EOF) {
		char *lower = toLower(input);
		int new_element = 1;
		for (int i = 0; i < idx; i++) {
			if (strcmp(words[i], lower) == 0) {
				count[i]++;
				new_element = 0;
				break;
			}
		}
		if (new_element) {
			strcpy(words[idx], lower);
			count[idx++] = 1;
		}
	}
	
	for (int i = 0; i < idx; i++) {
		printf("%s %d\n", words[i], count[i]);
	}
}

int main() {
	solve();
	return 0;
}
