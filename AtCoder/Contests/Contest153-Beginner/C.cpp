#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int n,k,h;

  cin>>n>>k;
  vector<int> hs;
  REP(i,0,n){
    cin>>h;
    hs.push_back(h);
  }
  sort(hs.begin(),hs.end());

  long long acum=0;
  REP(i,0,n-k)
    acum+=(long long)hs[i];
  cout<<acum<<endl;

  return 0;
}
