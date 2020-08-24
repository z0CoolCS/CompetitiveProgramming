#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int h,n,x;
  int acum=0;
  cin>>h>>n;
  REP(i,0,n){
    cin>>x;
    acum+=x;
  }
  if(h>acum)
    cout<<"No\n";
  else
    cout<<"Yes\n";


  return 0;
}
