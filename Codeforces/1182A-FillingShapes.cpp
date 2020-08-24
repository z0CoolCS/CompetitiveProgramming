#include<bits/stdc++.h>

using namespace std;

const int n=60;
bool vis[n][2];
int memo[n][2];


int main(){

  int n;
  cin>>n;
  long long ans;
  if(n & 1)
    ans=0;
  else
    ans=1<<(n/2);

  cout<<ans<<endl;



  return 0;
}
