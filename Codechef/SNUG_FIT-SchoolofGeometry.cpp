#include<bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n,a,b;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> as(n);
    vector<int> bs(n);
    long long ans=0;
    REP(i,0,n){
      cin>>a;
      as[i]=a;
    }
    REP(i,0,n){
      cin>>b;
      bs[i]=b;
    }
    sort(as.begin(),as.end());
    sort(bs.begin(),bs.end());
    REP(i,0,n){
      if(as[i]<bs[i])
        ans+=1ll*as[i];
      else
        ans+=1ll*bs[i];
    }
    cout<<ans<<endl;
  }


  return 0;
}
