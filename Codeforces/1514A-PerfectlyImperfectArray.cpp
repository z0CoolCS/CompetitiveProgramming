#include<bits/stdc++.h>

using namespace std;

bool is_square(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main () {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int num;
        bool faro = false;
        for (int i = 0; i < n; i++) {
            scanf("%d", &num);
            if (!is_square(num)) {
                faro = true;
            }
        }
        if (faro) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }


    }
}
