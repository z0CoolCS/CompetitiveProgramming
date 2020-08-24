#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>b;i--)

int main(){

  int t;
  cin>>t;
  int n,a,k;
  while(t--){

    cin>>n>>k;
    int num[n];

    long long l[n+2];
    long long r[n+2];
    
    REP(i,0,n)
      cin>>num[i];

    l[0]=0;
    r[n+1]=0;

    REP(i,1,n+1){
      if(num[i-1]%k==0)
        l[i]=l[i-1];
      else
        l[i]=l[i-1]+1ll*num[i-1]%k;
    }

    REV(i,n,0){
      if(num[i-1]%k==0)
        r[i]=r[i+1];
      else
        r[i]=r[i+1]+1ll*(k-num[i-1]%k);
    }
    long long ans=LLONG_MAX;
    REP(i,1,n+1){
      if(l[i]>=r[i+1])
        ans=min(ans,abs(l[i]-r[i+1]));
    }
    cout<<ans<<endl;


  }

  return 0;
}
