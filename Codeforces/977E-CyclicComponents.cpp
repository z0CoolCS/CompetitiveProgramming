#include<iostream>
#include<vector>

using namespace std;

vector<int> nodes[200002];
bool state[200002];
int n,m;
bool faro;

void dfs(int node){
  if(nodes[node].size()!=2){
    faro=false;
    return;
  }
  state[node]=true;
  for(int x:nodes[node]){
    if(!state[x])
      dfs(x);
  }
}

int main(){
  cin>>n>>m;

  int x,y;
  while(m--){
    cin>>x>>y;
    nodes[x].push_back(y);
    nodes[y].push_back(x);
  }

  int cont=0;
  for(int i=1;i<=n;i++){
    if(!state[i]){
      faro=true;
      dfs(i);
      if(faro)
        cont++;
    }
  }
  cout<<cont<<endl;

  return 0;
}
