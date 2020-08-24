#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string word1,word2;
    cin>>n>>m;

    map<string,string> dict;
    for (int i = 0; i < m; ++i) {
        cin>>word1>>word2;
        dict[word1]=word2;
    }
    cin.ignore();
    string line,auxword;
    getline(cin,line);

    stringstream ss(line);
    while(ss>>auxword) {
        if(auxword.size()>dict[auxword].size())
            cout<<dict[auxword]<<" ";
        else
            cout<<auxword<<" ";
    }

    return 0;
}

