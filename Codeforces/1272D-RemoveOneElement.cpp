#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int n,x;
  cin>>n;
  const int size=2*1e5+10;
  int a[size];
  int ls[size];
  int rs[size];
  ls[0]=rs[n+1]=0;
  REP(i,1,n+1){
    cin>>a[i];
    ls[i]=rs[i]=1;
  }
  REP(i,2,n+1){
    if(a[i]>a[i-1])
      ls[i]=ls[i-1]+1;
    if(a[n-i+2]>a[n-i+1])
      rs[n-i+1]=rs[n-i+2]+1;
  }
  int ans=*max_element(ls+1,ls+n+1);
  REP(i,2,n){
    if(a[i-1]<a[i+1])
      ans=max(ans,ls[i-1]+rs[i+1]);
  }
  cout<<ans<<endl;
  

  return 0;
}
