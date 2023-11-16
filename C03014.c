#include <stdio.h>

#define ll long long

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b, ll gcd) {
    return a * b / gcd;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        ll gcd1 = gcd(a, b);
        printf("%lld %lld\n", lcm(a, b, gcd1), gcd1);
    }
    
    return 0;
}