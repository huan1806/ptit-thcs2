#include <stdio.h>
#include <math.h>

int isPrime(int number) {
	if (number < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}

int sumOfDigits(int number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

void solve() {
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 2; i < n; i++) {
		if (isPrime(i) && sumOfDigits(i) % 5 == 0) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	
}

int main() {
    solve();
	return 0;
}
