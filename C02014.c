#include <stdio.h>

#define f(a,b,i) for(int i = a; i <= b; i++)
#define fr(a,b,i) for(int i = a; i >= b; i--)

void printLine(int start, int end) {
	fr(end, start, i) {
		printf("%d", i);
	}
	f(1, 2 * start - 2, i) {
		printf("%d", start);
	}
	f(start + 1, end, i) {
		printf("%d", i);
	}
	printf("\n");
}

void solve() {
	int n;
	scanf("%d", &n);
	fr(n, 1, i) {
		printLine(i, n);
	}
	f(2, n, i) {
		printLine(i, n);
	}
}

int main() {
    solve();
	return 0;
}
