#include<bits/stdc++.h>

using namespace std;
int values[26];

int main(){

  vector<int> g[26];
  for(int i=0;i<26;i++)
    cin>>values[i];

  string cad;
  cin>>cad;
  int size=cad.size();

  long long l[size+1];
  l[0]=0;
  for(int i=0;i<size;i++){
    g[cad[i]-'a'].push_back(i);
    l[i+1]=l[i]+1ll*values[cad[i]-'a'];
  }

  long long ans=0;
  for(int i=0;i<26;i++){
    long long cont=0;
    unordered_map<long long,int> m;
    for(int& j:g[i]){
      cont+=m[l[j]];
      m[l[j+1]]++;
    }
    ans+=cont;
  }
  cout<<ans<<endl;

  return 0;
}
