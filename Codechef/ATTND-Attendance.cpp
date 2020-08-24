#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n;
  string name,last;
  cin>>t;
  while(t--){
    cin>>n;
    cin.ignore();
    unordered_map<string,int> dict;
    vector<pair<string,string>> s;
    REP(i,0,n){
      cin>>name>>last;
      dict[name]++;
      s.push_back({name,last});
    }
    REP(i,0,n){
      cout<<s[i].first;
      if(dict[s[i].first]>1)
        cout<<" "<<s[i].second;
      cout<<endl;
    }

  }

  return 0;
}
