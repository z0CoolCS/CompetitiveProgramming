#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin>>t;
  int n,d;
  while(t--){
    cin>>n>>d;
    int ceil=sqrt(d)+1;
    int i;
    for(i=0;i<=ceil;i++){
      if(i+(d+i)/(i+1)<=n) break;
    }
    if(i<ceil)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }

  return 0;
}
