#include <stdio.h>

int min(int a, int b) {
	return a <= b ? a : b;
}

int max(int a, int b) {
	return a >= b ? a : b;
}

void solve() {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int x_min = min(x1, x3);
	int x_max = max(x2, x4);
	int y_min = min(y1, y3);
	int y_max = max(y2, y4);
	int l = max(x_max - x_min, y_max - y_min);
	printf("%d", l * l);
}

int main() {
	solve();
	return 0;
}
