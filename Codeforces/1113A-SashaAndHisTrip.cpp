#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,v;
  cin>>n>>v;

  if(n-1<=v)
    cout<<min(n-1,v)<<endl;
  else{
    int ans=n-v;
    cout<<ans*(ans+1)/2-1+v<<endl;
  }


  return 0;
}
