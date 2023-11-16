#include <stdio.h>
#include <math.h>

#define ll long long

ll minSteps(ll left, ll right) {
    ll diff = right - left;
    if (diff == 0) {
        return 0;
    }
    if (diff < 0) {
        return minSteps(right, left);
    }
    ll n = (ll) sqrt((double) diff);
    ll remaining = diff - n * n;
    if (remaining > n) {
        return 2 * n + 1;
    }
    return remaining > 0 ? 2 * n : 2 * n - 1;
}

void solve() {
    ll left, right;
    while (scanf("%lld", &left) != EOF) {
        scanf("%lld", &right);
        printf("%lld\n", minSteps(left, right));
    }
}

int main() {
    solve();
    return 0;
}