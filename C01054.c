#include <stdio.h>

#define MAX 2000001

int seize[MAX];

void init() {
	for (int i = 0; i < MAX; i++) {
		seize[i] = 0;
	}
	for (int i = 2; i < MAX; i++) {
		if (seize[i] == 0) {
			seize[i] = i;
			for (int j = 2 * i; j < MAX; j += i) {
				int temp = j;
				while (temp % i == 0) {
					seize[j] += i;
					temp /= i;
				}
			}
		}
	}
}

void solve() {
	init();
	int n;
	long long sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int value;
		scanf("%d", &value);
		sum += seize[value];
	}
	printf("%lld", sum);
}

int main() {
	solve();
	return 0;
}
