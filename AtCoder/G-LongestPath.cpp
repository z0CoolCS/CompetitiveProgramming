#include<bits/stdc++.h>

using namespace std;
int n,m;

const int size=1e5+10;
vector<int> g[size];
int dp[size];

int path(int i){

  if(dp[i]) return dp[i];

  for(int &j:g[i]){
    dp[i]=max(dp[i],path(j)+1);
  }
  return dp[i];
}

int main(){

  scanf("%d %d",&n,&m);
  int x,y;

  for(int i=0;i<m;i++){
    scanf("%d %d",&x,&y);
    g[x].push_back(y);
  }
  
  int maxi=0;
  for(int i=1;i<=n;i++)
    maxi=max(maxi,path(i));

  printf("%d\n",maxi);

  return 0;
}
