#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
vector<int> friends[150001];
bool state[150001];
int n,m;
long long edges,vertices;

void  dfs(int node){
  state[node]=true;
  for(int x:friends[node]){
    edges++;
    if(!state[x]){
      vertices++;
      dfs(x);
    }
  }
}

int main(){

  scanf("%d %d",&n,&m);

  int a,b;

  while(m--){
    scanf("%d %d",&a,&b);
    friends[a].push_back(b);
    friends[b].push_back(a);
  }

  for(int i=1;i<=n;i++){
    if(!state[i]){
      edges=0;
      vertices=1L;
      dfs(i);
      if(edges/2!=vertices*(vertices-1)/2){
        printf("NO\n");
        return 0;
      }
    }
  }
  printf("YES\n");

  return 0;
}
