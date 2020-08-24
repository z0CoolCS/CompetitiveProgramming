#include<bits/stdc++.h>

using namespace std;

const int size=1e5+10;
const long long mod=1e9+7;

int n;
vector<int> g[size];
bool c[size];
long long dp[size][2];

void dfs(int i,int p){

  dp[i][0]=1-c[i];
  dp[i][1]=c[i];
  for(int x:g[i]){
    if(x!=p){
      long long w,b;
      dfs(x,i);
      w=dp[i][0]*dp[x][0];
      w%=mod;
      b=dp[i][1]*dp[x][0]+dp[x][1]*dp[i][0];
      b%=mod;
      w+=dp[i][0]*dp[x][1];
      w%=mod;
      b+=dp[i][1]*dp[x][1];
      b%=mod;
      dp[i][0]=w;
      dp[i][1]=b;
    }
  }
}

int main(){
  int x;
  scanf("%d",&n);
  for(int i=0;i<n-1;i++){
    scanf("%d",&x);
    g[x].push_back(i+1);
    g[i+1].push_back(x);
  }
  for(int i=0;i<n;i++){
    scanf("%d",c+i);
  }
  dfs(0,-1);
  printf("%d\n",dp[0][1]%mod);


  return 0;
}
