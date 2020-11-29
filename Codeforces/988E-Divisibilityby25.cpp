#include<bits/stdc++.h>

using namespace std;

string num;
int size_n;
int ans;

int pre (char c1, char c2, int pos1, int pos2) {
    string tmp = num;
    int cont = 0;
    bool faro = false;
    int i;
    for (i = pos2 - 1; i < size_n - 1; i++) {
        swap(tmp[i], tmp[i + 1]);
        if (tmp[i] == c1) { faro =true; }
        cont++;
    }
    if (faro) { pos1--; }
    for (i = pos1 - 1; i < size_n - 2; i++) {
        swap(tmp[i], tmp[i + 1]);
        cont++;
    }
    for (i = 0; i < size_n - 2 && tmp[i] =='0'; i++);
    if (size_n - 2 >= i) {
        return cont + i;
    } 
    return INT_MAX;
}

void solve () {

    int pos7, pos5, pos2, pos01, pos02;
    pos5 = pos7 = pos2 = pos01 = pos02 = 100;
    for (int i = size_n - 1; i >= 0; i--) {
        if (num[i] == '7' && pos7 == 100) { pos7 = i + 1; }
        else if (num[i] == '5' && pos5 == 100) { pos5 = i + 1; }
        else if (num[i] == '2' && pos2 == 100) { pos2 = i + 1; }
        else if (num[i] == '0' && pos01 == 100) { pos01 = i + 1; }
        else if (num[i] == '0' && pos02 == 100) { pos02 = i + 1; }
    }
    if (pos01 != 100 && pos02 != 100) {
         ans = min(ans, abs(pos02 - size_n + 1) + abs(pos01 - size_n));
    }
    if (pos5 != 100 && pos01 != 100) {
        if (pos5 > pos01) {
            ans = min(ans, abs((pos5 - 1) - size_n + 1) + abs(pos01 - size_n));
        } else {
            ans = min(ans, abs(pos5 - size_n + 1) + abs(pos01 - size_n));
        }
    }
    if (pos5 != 100 && pos7 != 100) {
        ans = min(ans, pre('7', '5', pos7, pos5));
    }
    if (pos5 != 100 && pos2 != 100) {
        ans = min(ans, pre('2', '5', pos2, pos5));
    }
}

int main () {
    getline(cin, num);
    size_n = num.size();
    ans = 100;
    solve();
    if (ans == 100) {
        printf("-1\n");
    } else {
        printf("%d\n", ans);
    }

    return 0;
}
