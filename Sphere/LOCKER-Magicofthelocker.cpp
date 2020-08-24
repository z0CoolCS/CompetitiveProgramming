#include<bits/stdc++.h>

using namespace std;

const long long modu=1000000007;

long long getexp(long long b){
  long long ans=1;
  long long base=3;
  while(b>0){
    if(b&1)
      ans=ans*base%modu;
    base=base*base%modu;
    b>>=1;
  }
  return ans;
}
int main(){

  int t;
  cin>>t;
  long long x;
  while(t--){
    cin>>x;
    if(x==1ll)
      cout<<1<<endl;
    else{
      long long exp=x/3;
      if(x%3==1)
        cout<<getexp(exp-1)*4%modu<<endl;
      else if(x%3==2)
        cout<<getexp(exp)*2%modu<<endl;
      else
        cout<<getexp(exp)<<endl;
    }
  }

  return 0;
}
