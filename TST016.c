#include <stdio.h>
#include <string.h>

int check(const int *count) {
	return (count['('] == count[')'])
		&& (count['{'] == count['}'])
		&& (count['['] == count[']'])
		&& (count['\''] % 2 == 0)
		&& (count['\"'] % 2 == 0);
}

void solve() {
	char string[1000000];
	int count[256];
	scanf("%s", string);
	for (int i = 0; i < 256; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < strlen(string); i++) {
		count[string[i]]++;
	}
	printf("%d", check(count));
}

int main() {
    solve();
	return 0;
}
