#include<bits/stdc++.h>

using namespace std;

const int size=1e5+10;

long long pri[size];

long long in[size],out[size];

vector<long long> g[size];

long long n,q;

void dfs1(long long i,long long parent){

  for(long long x: g[i]){
    if(x!=parent){
      dfs1(x,i);
      in[i]=max(in[i],max(0ll,pri[x]-pri[i])+in[x]);
    }
  }

}

void dfs2(long long i,long long parent){

  long long maxi1,maxi2;
  maxi1=maxi2=-1*1ll;
  for(long long x: g[i]){
    if(x!=parent){
      long long t=max(0ll,pri[x]-pri[i]);
      if(t+in[x]>=maxi1){
        maxi2=maxi1;
        maxi1=t+in[x];
      }
      else if(t+in[x]>maxi2)
        maxi2=t+in[x];
    }
  }
  for(long long x: g[i]){
    if(x!=parent){
      long long tmp=max(0ll,pri[i]-pri[x]);
      out[x]=tmp+out[i];
      long long dif=max(0,pri[x]-pri[i]);
      if(in[x]+dif==maxi1)
        out[x]=max(out[x],tmp+maxi2);
      else
        out[x]=max(out[x],tmp+maxi1);
      dfs2(x,i);
    }
  }
}

int main(){
  long long x,y;

  scanf("%lld %lld",&n,&q);
  for(long long i=0;i<n;i++){
    scanf("%lld",pri+i);
  }
  for(long long i=0;i<n-1;i++){
    scanf("%lld %lld",&x,&y);
    g[x].push_back(y);
    g[y].push_back(x);
  }
  dfs1(0ll,-1*1ll);

  dfs2(0ll,-1*1ll);

  for(long long i=0;i<q;i++){
    scanf("%lld",&x);
    printf("%lld\n",max(in[x],out[x]));
  }


  return 0;
}
