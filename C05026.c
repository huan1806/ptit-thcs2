#include <stdio.h>
#include <math.h>

#define MAX 1001

int prime[MAX];

void initSeize() {
	for (int i = 2; i < MAX; i++) {
		prime[i] = 1;
	}
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (prime[i]) {
			for (int j = 2 * i; j < MAX; j += i) {
				prime[j] = 0;
			}
		}
	}
}

void solve() {
	int n, row[30], row_max[30], max = 0, index = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			int number;
			scanf("%d", &number);
			if (prime[number]) {
				row[count++] = number;
			}
		}
		if (count > max) {
			max = count;
			index = i + 1;
			for (int j = 0; j < count; j++) {
				row_max[j] = row[j];
			}
		}
	}
	printf("%d\n", index);
	for (int i = 0; i < max; i++) {
		printf("%d ", row_max[i]);
	}
	printf("\n");
}

int main() {
	initSeize();
	solve();
	return 0;
}
