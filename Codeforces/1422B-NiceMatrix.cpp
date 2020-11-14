#include<bits/stdc++.h>

using namespace std;

int mat[101][101];
long long ans;
int m, n;

void update (int i, int j) {

    int i_tmp = n - i - 1;
    int j_tmp = m - j - 1;
    vector<int> v;
    v.push_back(mat[i][j]);
    map<pair<int,int>, bool> dict;
    dict[{i, j}]= true;

    if (!dict[{i_tmp, j}]) {
        v.push_back(mat[i_tmp][j]);
        dict[{i_tmp, j}] = true;
    }
    if (!dict[{i, j_tmp}]) {
        v.push_back(mat[i][j_tmp]);
        dict[{i, j_tmp}] = true;
    }
    if (!dict[{i_tmp, j_tmp}]) {
        v.push_back(mat[i_tmp][j_tmp]);
    }

    sort(begin(v), end(v));
    int med  = v[v.size() / 2];
    for (int& x : v) {
        ans += 1ll * abs(med - x);
    }
}

int main () {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d", &n, &m);
        ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        int mt = 0;
        for (int i = 0; i < (m + 1) / 2; i++) {
            for (int j = 0; j < (n + 1) / 2; j++) {
                update(j, i);
            }
            //mt++;
        }
        printf("%lld\n", ans);
    }

    return 0;
}
