#include <stdio.h>

#define f(a, b, i) for(int i = a; i <= b; i++)
#define fr(a, b, i) for(int i = b; i >= a; i--)

void solve() {
	int n;
	scanf("%d", &n);
	f(0, n - 1, i) {
		int start = i * (i + 1) / 2;
		int end = start + i;
		if (i % 2 == 0) {
			f(start, end, j) {
				printf("%c ", j + 'a');
			}
		} else {
			fr(start, end, j) {
				printf("%c ", j + 'a');
			}
		}
		printf("\n");
	}
}

int main() {
    solve();
	return 0;
}
