#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int main(){

  int q,n;
  cin>>q;
  string ans="";

  REP(i,1,n+1)
    ans+=to_string(i);

  int sum=0;
  while(q--){
    cin>>n;
    sum+=ans[n-1]-'0';
  }
  cout<<sum<<endl;

  return 0;
}
