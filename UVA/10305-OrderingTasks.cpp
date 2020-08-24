#include<iostream>
#include<vector>
#include<deque>
#include<cstring>

using namespace std;

bool state[101];
void dfs(vector<int> v[],int node,deque<int> &ord){
  state[node]=1;
  for(int x:v[node]){
    if(!state[x])
      dfs(v,x,ord);
  }
  ord.push_front(node);
}

int main(){

  int n,m,i;
  int x,y;

  while(cin>>n>>m,n || m){
    memset(state,0,sizeof state);
    vector<int> arr[n+1];
    for(i=0;i<m;i++){
      cin>>x>>y;
      arr[x].push_back(y);
    }
    deque<int> ord;
    for(i=1;i<=n;i++){
      if(!state[i])
        dfs(arr,i,ord);
    }

    bool space=false;
    for(auto x=ord.begin();x!=ord.end();x++){
      if(space)
        cout<<" ";
      cout<<*x;
      space=true;
    }
    cout<<endl;
  }

  return 0;
}
