#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  int x,y,k,n,p,c;
  cin>>t;
  while(t--){
    cin>>x>>y>>k>>n;
    x-=y;
    bool faro=false;
    REP(i,0,n){
      cin>>p>>c;
      if(p>=x && c<=k)
        faro=true;
    }
    if(x<=0)
      faro=true;

    if(faro)
      cout<<"LuckyChef\n";
    else
      cout<<"UnluckyChef\n";
    
  }

  return 0;
}
