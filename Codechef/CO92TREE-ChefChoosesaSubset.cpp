#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int t,n,a,b;
bool state[100001];

void dfs(int i,int &size,int &op,vector<int> *v){
  state[i]=true;
  int sizec=v[i].size();
  REP(j,0,sizec){
    if(!state[v[i][j]]){
      size++;
      op&=v[i][j];
      dfs(v[i][j],size,op,v);
    }
  }
}

int main(){

  cin>>t;
  while(t--){
    cin>>n;
    vector<int> nodes[n+1];
    REP(i,0,n-1){
      cin>>a>>b;
      nodes[a].push_back(b);
      nodes[b].push_back(a);
    }
    memset(state,0,sizeof state);
    int maxi=0;
    REP(i,1,n+1){
      if(!state[i]){
        int size=1;
        int op=i;
        dfs(i,size,op,nodes);
        maxi=max(maxi,size*op);
      }
    }
    cout<<maxi<<endl;
  }

  return 0;
}
