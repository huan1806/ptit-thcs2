#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DELIMITERS " +*x^\n\r"

struct Polynomial {
    int coefficients[10001];
};

void add(struct Polynomial *polynomial, int coefficient, int exponent) {
    polynomial->coefficients[exponent] += coefficient;
}

void printResult(struct Polynomial polynomial) {
    int i = 10000;
    for (; i >= 0; i--) {
        if (polynomial.coefficients[i] != 0) {
            printf("%d*x^%d", polynomial.coefficients[i], i);
            break;
        }
    }
    for (--i; i >= 0; i--) {
        if (polynomial.coefficients[i] != 0) {
            printf(" + %d*x^%d", polynomial.coefficients[i], i);
        }
    }
    printf("\n");
}

void addX(char polynomial[1000000], struct Polynomial *result) {
    char *token;
    token = strtok(polynomial, DELIMITERS);
    while (token != NULL) {
        int coefficient = atoi(token);
        token = strtok(NULL, DELIMITERS);
        int exponent = atoi(token);
        token = strtok(NULL, DELIMITERS);
        add(result, coefficient, exponent);
    }
}

void solve() {
    char first_polynomial[100000], second_polynomial[100000];
    struct Polynomial result;
    memset(result.coefficients, 0, 10000 * sizeof(int ));
    fgets(first_polynomial, 100000, stdin);
    fgets(second_polynomial, 100000, stdin);
    addX(first_polynomial, &result);
    addX(second_polynomial, &result);
    printResult(result);
}

int main() {
    int test_num;
    scanf("%d\n", &test_num);
    while (test_num--) {
        solve();
    }
    return 0;
}
