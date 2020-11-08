#include<bits/stdc++.h>

using namespace std;

long long q = 998244353 * 1LL;

long long solve(long long &a, long long &b, long long &c) {
    long long res = 1LL;
    res *= (a * (a + 1LL) / 2LL);
    res %= q;
    res *= (b * (b + 1LL) / 2LL) % q;
    res %= q;
    res *= (c * (c + 1LL) / 2LL) % q;
    res %= q;
    return res;
}

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", solve(a, b, c));
    return 0;
}
