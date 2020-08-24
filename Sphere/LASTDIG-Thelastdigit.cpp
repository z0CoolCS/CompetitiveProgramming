#include<bits/stdc++.h>

using namespace std;

long long getans(long long a,long long b){
  if(a==0)
    return 0;
  if(b==0)
    return 1ll;

  long long ans=1;
  while(b>0){
    if(b&1ll)
      ans=ans*a%10;
    a=a*a%10;
    b>>=1;
  }
  return ans;
}

int main(){

  int t;
  cin>>t;
  long long a,b;
  while(t--){
    cin>>a>>b;
    cout<<getans(a,b)%10<<endl;
  }

  return 0;
}
