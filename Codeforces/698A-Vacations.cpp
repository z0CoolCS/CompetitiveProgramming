#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  int num[n];
  int ans=0;
  for(int& i:num){
    cin>>i;
    if(i==0)
      ans++;
  }

  for(int i=1;i<n;i++){
    if(num[i]==1 || num[i]==2){
      if(num[i-1]==num[i]){
        ans++;
        num[i]=0;
      }
    }
    else if(num[i]==3){
      if(num[i-1]==1)
        num[i]=2;
      else if(num[i-1]==2)
        num[i]=1;
    }
  }
  cout<<ans<<endl;

  return 0;
}
