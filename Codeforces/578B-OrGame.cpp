#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>b;i--)

int main(){

  int n,k,x;
  cin>>n>>k>>x;
  long long mul=1;

  REP(i,0,k)
    mul*=1ll*x;

  long long nums[n];
  long long left[n+2];
  long long right[n+2];

  REP(i,0,n)
    cin>>nums[i];

  left[0]=0;
  right[n+1]=0;

  REP(i,1,n+1)
    left[i]=left[i-1]|nums[i-1];

  REV(i,n,0)
    right[i]=right[i+1]|nums[i-1];

  long long ans=0;
  REP(i,1,n+1)
    ans=max(ans,left[i-1] | mul*nums[i-1] | right[i+1]);

  cout<<ans<<endl;

  return 0;
}
