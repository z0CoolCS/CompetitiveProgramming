#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll upper=2*1000000001LL+1LL;
ll var=1000000001LL;
const int maxn=2*1e5+10;

struct line{
  ll x;
  ll y;
  int i;
  int ans;
};

bool compare_y(line l1,line l2){
  return l1.y<l2.y;
}
bool compare_ans(line& l1,line& l2){
  return l1.i<l2.i;
}

line lines[maxn];
int n;
unordered_map<ll,int> ft;

void update(ll i){
  i+=var;
  while(i<=upper){
    ft[i]+=1;
    i+=i&-i;
  }
}

int query(ll tot, ll i){
  i+=var;
  i--;
  int ans=0;
  while(i>0){
    ans+=ft[i];
    i-=i&-i;
  }
  return tot-ans;
}


int main(){
  scanf("%d",&n);
  ll x,y;
  for(int i=0;i<n;i++){
    scanf("%lld %lld",&x,&y);
    lines[i].x=x;
    lines[i].y=y;
    lines[i].i=i;
    lines[i].ans=0;
  }

  sort(lines,lines+n,compare_y);
  for(int i=0;i<n;i++){
    lines[i].ans=query(i*1ll,lines[i].x);
    update(lines[i].x);
  }

  sort(lines,lines+n,compare_ans);
  for(int i=0;i<n;i++){
    printf("%d\n",lines[i].ans);
  }

  return 0;
}
