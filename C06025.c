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

int isSmallerOrEqual(char *a, char *b) {
	int size_a = strlen(a);
	int size_b = strlen(b);
	if (size_a < size_b) {
		return 1;
	}
	if (size_a > size_b) {
		return 0;
	}
	for (int i = 0; i < size_a; i++) {
		if (a[i] > b[i]) {
			return 0;
		}
	}
	return 1;
}

char *subtract(char *a, char *b) {
    int size_a = strlen(a);
    int size_b = strlen(b);
    char *result = (char *) calloc(size_a, sizeof(char));
    int carried = 0;
    for (int i = 0; i < size_a; i++) {
        int temp = digitAt(a, size_a - i - 1) - digitAt(b, size_b - i - 1) - carried;
        if (temp < 0) {
            carried = 1;
            temp += 10;
        } else {
            carried = 0;
        }
        result[i] = (char) (temp + '0');
    }
    return strrev(result);
}

char *calculateDifferent(char *a, char *b) {
    return isSmallerOrEqual(a, b) ? subtract(b, a) : subtract(a, b);
}

void printResult(char *result) {
	int isEliminated = 1;
	for (int i = 0; i < strlen(result); i++) {
		if (!isEliminated || result[i] != '0') {
			isEliminated = 0;
			printf("%c", result[i]);
		}
	}
	printf("\n");
}

void solve() {
	char *a = (char *) malloc(MAX * sizeof(char));
	char *b = (char *) malloc(MAX * sizeof(char));
	scanf("%s %s", a, b);
	printResult(calculateDifferent(a, b));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		solve();
	}
	return 0;
}
