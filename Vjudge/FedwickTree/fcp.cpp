#include<bits/stdc++.h>

using namespace std;

unordered_map<long long,long long> dict;
int m;
long long n;

const long long mod=1000000007LL;

long long query_p(long long i){
  long long sum=0;
  while(i>0){
    sum+=dict[i];
    sum%=mod;
    i-=i&-i;
  }
  return sum;
}

long long query(long long i,long long j){
  return query_p(j)+mod-query_p(i-1ll);
}

void update(long long i,long long val){
  while(i<=n){
    dict[i]+=val;
    dict[i]%=mod;
    i+=i&-i;
  }
}

int main(){

  long long x,y;
  scanf("%lld %d",&n,&m);
  n++;
  vector<pair<long long,long long>> b;
  for(int i=0;i<m;i++){
    scanf("%lld %lld",&x,&y);
    b.push_back({x+1ll,y+1ll});
  }
  //sort(begin(b),end(b));
  using pll=pair<long long,long long>;
  sort(begin(b),end(b), [](pll p, pll q) {
          return p.second < q.second or p.second == q.second and p.first < q.first;});

  update(1ll,1ll);
  long long anst;
  for(int i=0;i<m;i++){
    anst=query(b[i].first,b[i].second-1ll)%mod
    update(b[i].second,anst);
  }
  printf("%lld\n",query(n,n)%mod);

  return 0;
}
