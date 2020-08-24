#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int main(){

  int t,n;
  cin>>t;
  string word;
  while(t--){
    cin>>n;
    set<string> words;
    REP(i,0,n){
      cin>>word;
      words.insert(word);
    }
    cout<<words.size()<<endl;
    for(auto x:words)
      cout<<x<<endl;
  }

  return 0;
}
