#include<bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
int main(){
  int t;
  cin>>t;
  int a,b,c,d;
  int sum;
  while(t--){
    cin>>a>>b>>c>>d;

    bool faro=false;
    REP(i,1,16){
      sum=0;
      if(i&1)
        sum+=d;
      if(i&(1<<1))
        sum+=c;
      if(i&(1<<2))
        sum+=b;
      if(i&(1<<3))
        sum+=a;
      if(sum==0){
        faro=true;
        break;
      }
    }
    if(faro)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }

  return 0;
}
