#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> g[2002];
bool dict[2002];

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,i,j;
  int val;
  cin>>n;
  string ans[n];

  for(i=0;i<n;i++)
    ans[i]="NO WAY";


  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin>>val;
      if(val)
        g[i].push_back(j);
    }
  }

  for(i=0;i<n;i++){
    int val=20020;
    memset(dict,false,sizeof dict);
    queue<pair<int,int>> q;
    for(int x:g[i]){
      dict[x]=true;
      q.push({x,1});
    }
    while(!q.empty()){
      auto v=q.front();
      q.pop();
      if(v.first==i){
        ans[i]=to_string(v.second);
        break;
      }
      for(int x:g[v.first]){
        if(!dict[x]){
          dict[x]=true;
          q.push({x,v.second+1});
        }
      }
    }
  }

  for(auto x:ans)
    cout<<x<<endl;

  return 0;
}
