#include <stdio.h>
#include <math.h>

int toBase2(int n) {
	int exp = 0, base2 = 0;
	while (n > 0) {
		base2 += (int) ((n % 2) * pow(10, exp++));
		n /= 2;
	}
	return base2;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", toBase2(n));
	return 0;
}
