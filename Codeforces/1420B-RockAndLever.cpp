#include<bits/stdc++.h>

using namespace std;

int const n_max = 1e5 + 10;
int num[n_max];

long long comb (long long i) {
    return i * (i - 1) / 2;
}

int main () {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        int pre_cal[32];
        memset(pre_cal, 0, sizeof pre_cal);
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
            int bit_most = 32 - __builtin_clz(num[i]);
            pre_cal[bit_most]++;
        }
        long long ans = 0;
        for (int i = 0; i < 32; i++) {
            if (pre_cal[i] > 1) {
                ans += comb(pre_cal[i] * 1ll);
            }
        }
        printf("%lld\n", ans);
    }
}
