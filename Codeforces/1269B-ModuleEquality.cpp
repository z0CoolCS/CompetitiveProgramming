#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll m;
int n;
int const max_n = 2 * 1e3 + 10;
ll a[max_n];
ll b[max_n];

bool check (ll diff, int j){
    for(int i = 0; i < n; i++) {
        j%=n;
        if ((a[i] + diff) % m != b[j]) { return false; }
        j++;
    }
    return true;
}

int main () {

    scanf("%d %lld", &n, &m);
    for (int i = 0; i < n; i++) { scanf("%lld", &a[i]); }
    for (int i = 0; i < n; i++) { scanf("%lld", &b[i]); }

    sort(a, a + n);
    sort(b, b + n);

    int cont = 1;
    ll val_a = a[0];
    for (int i = 1; i < n && val_a <= a[i]; i++) {
        if (val_a == a[i]) { 
            cont++; 
        }
    }
    vector<int> vals;
    int cont_b = 1;
    ll val_b = b[0];
    int ind = 0;

    for (int i = 1; i < n; i++) {
        if (val_b != b[i]) {
            if (cont_b == cont) {
                vals.push_back(ind);
            }
            cont_b = 1;
            ind = i;
            val_b = b[i];
        } else {
            cont_b++;
        }
    }
    if (cont_b == cont) {
        vals.push_back(ind);
    }
    ll ans = INT_MAX;
    for (int &i: vals) {
        ll diff = b[i] >= val_a ? b[i]- val_a: (m - val_a) + b[i]; 
        if(check(diff, i)) {
            ans = min(ans, diff);
        }
    }
    printf("%lld\n", ans);

    return 0;
}
