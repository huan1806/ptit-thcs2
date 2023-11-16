#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Triangle {
	double a, b, c, area;
};

double calculateArea(struct Triangle t) {
	double p = (t.a + t.b + t.c) / 2;
	return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

int compare(const void *s1, const void *s2) {
	struct Triangle *t1 = (struct Triangle *) s1;
	struct Triangle *t2 = (struct Triangle *) s2;
    if (t1-> area == t2->area) {
        return 0;
    } else if (t1->area > t2->area) {
        return 1;
    }
	return -1;
}

void printTriangles(struct Triangle *triangles, int n) {
	for (int i = 0; i < n; i++) {
		printf("%.0lf %.0lf %.0lf\n", triangles[i].a, triangles[i].b, triangles[i].c);
	}
}

void solve() {
	int n;
	scanf("%d", &n);
	struct Triangle triangles[n];
	for (int i = 0; i < n; i++) {
		scanf("%lf %lf %lf", &triangles[i].a, &triangles[i].b, &triangles[i].c);
		triangles[i].area = calculateArea(triangles[i]);
	}
	qsort(triangles, n, sizeof(struct Triangle), compare);
	printTriangles(triangles, n);
}

int main() {
	solve();
	return 0;
}
