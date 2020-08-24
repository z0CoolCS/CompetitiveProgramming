#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(long long i=a;i<b;i++)

int main(){
  long long x,a,b,c;
  
  while(cin>>x>>a>>b>>c, x || a || b || c){
    long long ans=x;
    REP(i,0,b){
      ans=(ans-1ll)*a%c;
    }
    if(ans<0)
      cout<<(ans+c)<<endl;
    else
      cout<<ans<<endl;
  }

  return 0;
}
