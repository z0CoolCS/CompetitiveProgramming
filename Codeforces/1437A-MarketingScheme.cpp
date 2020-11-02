#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long l, r;
    scanf("%d", &t);

    while (t--) {
        scanf("%lld %lld", &l, &r);

        if (l*2 > r) {
            printf("YES\n");
        } else {
            long long diff = r - l;
            long long a = 2 * l / 3;
            if (a / 2 > diff) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }

    }

    return 0;
}
