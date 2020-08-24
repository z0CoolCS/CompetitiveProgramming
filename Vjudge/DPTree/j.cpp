#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  scanf("%d",&n);
  int count[n+1];
  memset(count,0,sizeof count);
  int x,y;

  for(int i=0;i<n-1;i++){
    scanf("%d %d",&x,&y);
    count[x]++;
    count[y]++;
  }
  set<int> g;
  for(int i=1;i<=n;i++){
    if(count[i]<4)
      g.insert(count[i]);
  }
  cout<<g.size()<<endl;


  return 0;
}
