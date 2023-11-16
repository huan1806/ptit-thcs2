#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *toLower(char *s) {
  for(char *p = s; *p; p++) {
	*p = tolower(*p);
  }
  return s;
}

void solve() {
	char word[51], email[100], *tmp, idx = 0;
	while (scanf("%s", word) != EOF) {
		tmp = toLower(word);
		email[idx++] = tmp[0];
	}
	email[idx - 1] = '\0';
	strcat(email, tmp);
	strcat(email, "@ptit.edu.vn");
	printf("%s", email);
}

int main() {
	solve();
	return 0;
}
