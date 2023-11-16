#include <stdio.h>
#include <math.h>

struct Point {
	double x;
	double y;
};

double calculateDistance(struct Point A, struct Point B) {
	double dx = A.x - B.x;
	double dy = A.y - B.y;
	return sqrt(dx * dx + dy * dy);
}

double calculateArea(struct Point A, struct Point B, struct Point C) {
	double AB = calculateDistance(A, B);
	double AC = calculateDistance(A, C);
	double BC = calculateDistance(B, C);
	if (AB + BC <= AC || AB + AC <= BC || BC + AC <= AB) {
		return - 1;
	}
	double p = (AB + AC + BC) / 2;
	return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

void solve() {
	struct Point A, B, C;
	scanf("%lf %lf %lf %lf %lf %lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
	double area = calculateArea(A, B, C);
	if (area == - 1) {
		printf("INVALID\n");
	} else {
            printf("%.2f\n", area);
    }
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--) {
		solve();
	}
	return 0;
}
