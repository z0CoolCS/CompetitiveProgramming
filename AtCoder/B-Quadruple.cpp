#include<bits/stdc++.h>

using namespace std;

int f (int n, int k) {
    int tmp = min(k - 1, 2 * n + 1 - k);
    return max(tmp, 0);
}

int main () {

    int n, k;
    long long ans = 0; 

    scanf("%d %d", &n, &k);

    //k = max(k, -k); //optional

    for (int i = k + 1; i <= 2 * n; i++) {
        ans += 1ll * f(n, i) * f(n, i - k);
    }

    printf("%lld\n", ans);

    return 0;
}
