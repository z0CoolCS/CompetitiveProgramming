#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,k;
  cin>>n>>k;
  int num[n];
  for(int i=0;i<n;i++)
    cin>>num[i];
  int ans=0;
  for(int i=1;i<n;i++){
    ans+=max(0,k-num[i]-num[i-1]);
    num[i]+=max(0,k-num[i]-num[i-1]);
  }
  cout<<ans<<endl;
  for(int i=0;i<n;i++){
    if(i>0)
      cout<<" ";
    cout<<num[i];
  }
  cout<<endl;


  return 0;
}
