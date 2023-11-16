#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 501

int digitAt(char *number, int index) {
	return index < strlen(number) ? number[index] - '0' : 0;
}

char *strrev(char *str){
	if (! str || ! *str) {
		return str;
	}
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return str;
}

char *sum(char *a, char *b) {
	int size_a = strlen(a);
	int size_b = strlen(b);
	if (size_a < size_b) {
		return sum(b, a);
	}
	char *result = (char *) calloc(size_a + 1, sizeof(char));
	int carried = 0;
	for (int i = 0; i < size_a; i++) {
		int temp = digitAt(a, size_a - i - 1) + digitAt(b, size_b - i - 1) + carried;
		if (temp >= 10) {
			carried = 1;
			temp %= 10;
		} else {
			carried = 0;
		}
		result[i] = temp + '0';
	}
	if (carried == 1) {
		result[size_a] = '1';
	}
	return strrev(result);
}

void solve() {
	char *a = (char *) malloc(MAX * sizeof(char));
	char *b = (char *) malloc(MAX * sizeof(char));
	scanf("%s %s", a, b);
    char *_sum = sum(a, b);
	printf("%s\n", _sum);
    free(a);
    free(b);
    free(_sum);
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
