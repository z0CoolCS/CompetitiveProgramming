#include<bits/stdc++.h>

using namespace std;

int const max_n = 1e8+10;
int const n_primes = 1e5;
bool states[n_primes];
int primes[n_primes];
int p_i = 0;

void sieve() {
    for (int i = 2; i * i < max_n; i++) {
        if (states[i]) continue;
        primes[p_i] = i;
        p_i++;
        for (int j = i * i; j < n_primes; j += i) {
            states[j] = true;
        }
    }
}

int main() {

    sieve();

    int num, ind, ans;

    while (scanf("%d", &num), num) {
        ans = -1;
        ind = 0;

        while (ind < p_i) {
            if (num % primes[ind] == 0) {
                ans = primes[ind];
                break;
            } else if (num < primes[ind]) {
                break;
            }
            ind++;
        }

        if (ans == -1) {
            printf("%d\n", num);
        } else {
            printf("%d\n", ans);
        }
    }
    return 0;
}
