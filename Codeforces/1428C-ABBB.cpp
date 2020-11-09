#include<bits/stdc++.h>

using namespace std;

int main () {
    int t;
    int s_cad;
    string cad;
    cin>>t;
    cin.ignore();
    while (t--) {
        getline(cin, cad);
        s_cad = cad.size();
        stack<int> st;
        st.push(0);
        for (int i = 1; i < s_cad; i++) {
            if (st.empty()) {
                st.push(i);
                continue;
            }
            int t = st.top(); 
            if ((cad[t] == 'A' && cad[i] == 'B') || (cad[t] == 'B' && cad[i] == 'B')) {
                st.pop();
            } else {
                st.push(i);
            }
        }
        int ans = 0;
        while (!st.empty()) {
            ans++;
            st.pop();
        }
        printf("%d\n", ans);

    }
    return 0;
}
