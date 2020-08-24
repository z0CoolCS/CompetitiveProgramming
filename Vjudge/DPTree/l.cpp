#include<bits/stdc++.h>

using namespace std;


const int size=1e5+10;
int n;
vector<pair<int,int>> g[size];
long long sum=0;
long long maxi[size];
void dfs(int i,int p){
  for(auto x : g[i]){
    if(x.first!=p){
      sum+=1ll*x.second;
      dfs(x.first,i);
      maxi[i]=max(maxi[i],1ll*x.second+maxi[x.first]);
    }
  }
}
int main(){

  int x,y,w;
  cin>>n;
  for(int i=0;i<n-1;i++){
    cin>>x>>y>>w;
    g[x].push_back({y,w});
    g[y].push_back({x,w});
  }

  dfs(1,0);
  if(sum==maxi[1])
    cout<<maxi[1]<<endl;
  else
    cout<<2ll*sum-maxi[1]<<endl;

  return 0;
}
