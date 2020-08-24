#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<cmath>

using namespace std;

const int w_max=1e9+1;
const int v_max=1e5+10;
const int size=1e2+1;
int memo[v_max][size];
bool vis[v_max][size];
int v[size];
int w[size];

int n,w_tot;

int dp(int vtmp,int i){
  if(vtmp<=0)
    return 0;
  if(i==n)
    return w_max;
  if(vis[vtmp][i])
    return memo[vtmp][i];

  vis[vtmp][i]=1;

  return memo[vtmp][i]=min(dp(vtmp,i+1),w[i]+dp(vtmp-v[i],i+1));

}

int answer(int v_tot){
  int ans=0;
  for(int i=v_tot;i>=0;i--){
    if(dp(i,0)<=w_tot)
      return i;
  }
  return 0;
}

int main(){

  scanf("%d %d",&n,&w_tot);
  int v_tot=0;
  for(int i=0;i<n;i++){
    scanf("%d %d",&w[i],&v[i]);
    v_tot+=v[i];
  }
  printf("%d\n",answer(v_tot));


  return 0;
}
