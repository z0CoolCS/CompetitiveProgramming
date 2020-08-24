#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool dfs(int ord,int pos,int n){
  if(ord[pos]
}
int main(){

  int n,m;
  int i,x,y;
  cin>>n>>m;
  vector<int> v[n+1];
  for(i=0;i<m;i++){
    cin>>x>>y;
    v[x].push_back(y);
  }
  int state[n+1];
  for(i=0;i<=n;i++)
    state[i]=0;

  vector<int> ord;
  for(i=0;i<n;i++){
  }

  return 0;
}
