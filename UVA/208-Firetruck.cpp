#include<bits/stdc++.h>

using namespace std;

int cont;
bool state[21];
int obj;
void dfs(int i,vector<int> &r,vector<int>*n){

  for(int &x:n[i]){
    if(x==obj){
      cont++;
      cout<<"   ";
      for(int &y:r)
        cout<<y<<" ";
      cout<<obj<<endl;
      continue;
    }
    if(!state[x]){
      state[x]=1;
      r.push_back(x);
      dfs(x,r,n);
      r.pop_back();
      state[x]=0;
    }
  }
}
int main(){

  int x,y;
  int cas=1;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while(cin>>obj){
    cont=0;
    vector<int> arr[21];
    memset(state,0,sizeof state);
    while(cin>>x>>y,x||y){
      arr[x].push_back(y);
      arr[y].push_back(x);
    }

  vector<int> r;
  state[1]=1;
  r.push_back(1);
  cout<<"CASE "<<cas<<":"<<endl;
  dfs(1,r,arr);
  cas++;

  cout<<"There are "<<cont<<" routes from the firestation to streetcorner "<<obj<<".\n";

  }

  return 0;
}
