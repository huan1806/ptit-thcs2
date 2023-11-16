#include <stdio.h>

void solve() {
	int n, x = 0;
	scanf("%d", &n);
	while (n--) {
		char input[3];
		scanf("%s", input);
		if (input[0] == '+' || input[2] == '+') {
			x++;
		} else {
			x--;
		}
	}
	printf("%d", x);
}

int main() {
	solve();
	return 0;
}
