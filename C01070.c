#include <stdio.h>

void swap(int *a, int *b) {
    int p = *a;
    *a = *b;
    *b = p;
}

int isSatisfied(int a, int b, int c, int d, int e, int f) {
    int area = a * b + c * d + e * f;
    if (a > b) swap(&a, &b);
    if (c > d) swap(&c, &d);
    if (e > f) swap(&e, &f);
    if (d > b) {
        swap(&a, &c);
        swap(&b, &d);
    }
    if (f > b) {
        swap(&a, &e);
        swap(&b, &f);
    }
    if (b * b != area) {
        return 0;
    }
    int x = b - a;
    return (b == d && b == f) || (c == x && e == x) || (c == x && f == x) || (d == x && e == x) || (d == x && f == x);
}

void solve() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (isSatisfied(a, b, c, d, e, f)) {
        printf("YES");
    } else {
        printf("NO");
    }
}

int main() {
	solve();
	return 0;
}
