#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  int n,x,y;
  while(t--){
    scanf("%d",&n);
    vector<int> g[n];
    for(int i=0;i<n-1;i++){
      scanf("%d %d",&x,&y);
      g[x].push_back(y);
      g[y].push_back(x);
    }
    bool state[n];
    memset(state,0,sizeof state);

  }

  return 0;
}
