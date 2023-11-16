#include <stdio.h>

#define NOT_EXISTS 0
#define A 1
#define B 2
#define INTERSECTION 3
#define MAX 1000

int n, m, existence[MAX];

void init() {
	for (int i = 0; i < MAX; i++) {
		existence[i] = NOT_EXISTS;
	}	
}

void enterSize() {
	scanf("%d %d", &n, &m);
}

void enterA() {
	for (int i = 0; i < n; i++) {
		int value;
		scanf("%d", &value);
		existence[value] = A;
	}
}

void enterB() {
	for (int i = 0; i < m; i++) {
		int value;
		scanf("%d", &value);
		if (existence[value] == A) {
			existence[value] = INTERSECTION;
		} else if (existence[value] == NOT_EXISTS) {
			existence[value] = B;
		}
	}
}

void printIntersection() {
	for (int i = 0; i < MAX; i++) {
		if (existence[i] == INTERSECTION) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void printRemainingOfA() {
	for (int i = 0; i < MAX; i++) {
		if (existence[i] == A) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void printRemainingOfB() {
	for (int i = 0; i < MAX; i++) {
		if (existence[i] == B) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void solve() {
	init();
	enterSize();
	enterA();
	enterB();
	printIntersection();
	printRemainingOfA();
	printRemainingOfB();
}

int main() {
	solve();
	return 0;
}
