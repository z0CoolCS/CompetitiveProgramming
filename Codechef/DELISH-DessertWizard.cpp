#include<bits/stdc++.h>

using namespace std;

int n;
const int size=10001;
long long ans[size];
long long anstmp=0;
long long num[size];
long long dp(int i){
  if(i<0)
    return 0;

  if(ans[i]) return ans[i];

  return ans[i]=max(dp(i-1)+ans[i],
}

int main(){

  int t;cin>>t;

  while(t--){

    cin>>n;
    for(long long &i:num)
      cin>>i;

  }

  
  return 0;
}
