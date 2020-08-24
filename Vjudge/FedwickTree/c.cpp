#include<bits/stdc++.h>

using namespace std;

const int size=1e5+10;

int nums[size];

struct s{
  int neg;
  int zeros;
  s(){
    neg=0;
    zeros=0;
  }
};


int n,k;

int getOp(int v){
  if(v>0)
    return 1;
  else if(v<0)
    return -1;
  else
    return 0;
}
pair<int,int> subquery(int i,s ans[]){
  int zeros=0;
  int neg=0;
  while(i>0){
    zeros+=ans[i].zeros;
    neg+=ans[i].neg;
    i-=i&-i;
  }
  return {zeros,neg};
}
int query(int i,int j,s ans[]){
  auto pj=subquery(j,ans);
  auto pi=subquery(i-1,ans);
  if(pj.first-pi.first>0)
    return 0;
  if((pj.second-pi.second)&1)
    return -1;
  return 1;
}
void update(int i,int v,bool act,s ans[]){
  int v_p=getOp(nums[i]);
  int v_c=getOp(v);
  int pos_i=i;
  while(i<=n){
    if(v_c==0)
      ans[i].zeros++;
    if(v_p==0 && act)
      ans[i].zeros--;
    if(v_c<0)
      ans[i].neg++;
    if(v_p<0 && act)
      ans[i].neg--;
    i+=i&-i;
  }
}


int main(){
  int x,l,u;
  char c;
  while(cin>>n>>k){
    s ans[n+1];

  for(int i=1;i<=n;i++){
    cin>>nums[i];
    if(nums[i]<=0)
      update(i,nums[i],false,ans);
  }
  for(int i=1;i<=k;i++){
    cin>>c;
    if(c=='C'){
      cin>>l>>x;
      update(l,x,true,ans);
      nums[l]=x;
      /*
      for(int opt=1;opt<=n;opt++)
        cout<<ans[opt].neg<<" "<<ans[opt].zeros<<endl;
        */
    }
    else if(c=='P'){
      cin>>l>>u;
      int sol=query(l,u,ans);
      if(sol>0)
        cout<<"+";
      else if(sol<0)
        cout<<"-";
      else
        cout<<"0";
    }
  }
  cout<<endl;
  }

  return 0;
}
