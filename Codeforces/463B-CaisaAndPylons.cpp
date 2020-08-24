#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,x;
  cin>>n;

  int maxi=0;

  for(int i=0;i<n;i++){
    cin>>x;
    maxi=max(maxi,x);
  }
  cout<<maxi<<endl;

  return 0;
}
