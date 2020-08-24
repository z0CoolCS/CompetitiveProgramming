#include<bits/stdc++.h>

using namespace std;

int main(){

  string s;
  cin>>s;
  unordered_set<char> c;
  unordered_map<char,int> dict;
  for(char &ch:s){
    c.insert(ch);
    dict[ch]++;
  }

  if(c.size()==2){
    bool faro=true;
    for(auto x:dict){
      if(x.second!=2)
        faro=false;
    }
    if(faro)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
  else
    cout<<"No\n";

  return 0;
}

