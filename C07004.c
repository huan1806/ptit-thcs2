#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

struct Fraction {
    int numerator;
    int denominator;
};

struct Fraction simplify(struct Fraction fraction) {
    struct Fraction result;
    int _gcd = gcd(fraction.numerator, fraction.denominator);
    result.numerator = fraction.numerator / _gcd;
    result.denominator = fraction.denominator / _gcd;
    return result;
}

struct Fraction converge(struct Fraction f, int factor) {
    struct Fraction result;
    result.numerator = factor * f.numerator;
    result.denominator = factor * f.denominator;
    return result;
}

struct Fraction sumOf(struct Fraction f1, struct Fraction f2) {
    struct Fraction result;
    result.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return simplify(result);
}

struct Fraction divide(struct Fraction f1, struct Fraction f2) {
    struct Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return simplify(result);
}

char *toString(struct Fraction fraction) {
    char *res = (char *) calloc(20, sizeof(char));
    sprintf(res, "%d/%d", fraction.numerator, fraction.denominator);
    return res;
}

void printConvergence(struct Fraction f1, struct Fraction f2) {
    f1 = simplify(f1);
    f2 = simplify(f2);
    int _lcm = lcm(f1.denominator, f2.denominator);
    f1 = converge(f1, _lcm / f1.denominator);
    f2 = converge(f2, _lcm / f2.denominator);
    printf("%s %s\n", toString(f1), toString(f2));
}

void printSumOf(struct Fraction f1, struct Fraction f2) {
    printf("%s\n", toString(sumOf(f1, f2)));
}

void printDivision(struct Fraction f1, struct Fraction f2) {
    printf("%s\n", toString(divide(f1, f2)));
}

void solve() {
    struct Fraction f1, f2;
    scanf("%d %d %d %d", &f1.numerator, &f1.denominator, &f2.numerator, &f2.denominator);
    printConvergence(f1, f2);
    printSumOf(f1, f2);
    printDivision(f1, f2);
}

int main() {
    int test_num;
    scanf("%d", &test_num);
    for (int i = 1; i <= test_num; i++) {
        printf("Case #%d:\n", i);
        solve();
    }
    return 0;
}