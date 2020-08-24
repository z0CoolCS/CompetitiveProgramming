#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

void make_set(int *arr,int *h,int n){
  for(int i=1;i<=n;i++){
    arr[i]=i;
    h[i]=0;
  }
}

int find_node(int node,int *arr){
  if(arr[node]==node)
    return node;
  arr[node]=find_node(arr[node],arr);
  return arr[node];
}

int main(){
  int n;
  cin>>n;
  int parent[n+1];
  int h[n+1];
  make_set(parent,h,n);
  int x,y;
  int xp,yp;
  queue<pair<int,int>> inns;

  for(int i=1;i<n;i++){
    cin>>x>>y;
    xp=find_node(x,parent);
    yp=find_node(y,parent);
    if(xp==yp){
      inns.push({x,y});
      continue;
    }

    if(h[xp]>h[yp])
      swap(xp,yp);

    parent[xp]=yp;

    if(h[xp]==h[yp])
      h[xp]++;
  }

  bool state[n+1];
  memset(state,1,sizeof state);
  queue<int> parents;
  int cont=0;
  for(int i=1;i<=n;i++){
    if(state[find_node(parent[i],parent)]){
      state[find_node(parent[i],parent)]=false;
      parents.push(i);
      cont++;
    }
  }

  if(cont==1){
    cout<<0<<endl;
    return 0;
  }

  cont--;
  cout<<cont<<endl;
  x=parents.front();
  parents.pop();
  for(int i=0;i<cont;i++){
    y=parents.front();
    parents.pop();

    auto tmp=inns.front();
    inns.pop();
    cout<<tmp.first<<" "<<tmp.second<<" "<<x<<" "<<y<<endl;
    x=y;
  }

  return 0;
}
