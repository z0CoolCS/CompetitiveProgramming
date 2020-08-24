#include<bits/stdc++.h>

using namespace std;

const int size=1e6;
int n,c;
long long ft1[size],ft2[size];


void update(long long ft[],int i,long long v){
  for(;i<=n;i+=i&-i)
    ft[i]+=1ll*v;
}
void update_ans(int a,int b,long long v){
  update(ft1,a,v);
  update(ft1,b+1,-v);
  update(ft2,a,(a-1)*v);
  update(ft2,b+1,-v*b);
}

long long query(long long ft[],int i){
  long long sum=0;
  for(;i>0;i-=i&-i)
    sum+=ft[i];
  return sum;
}

long long query_q(int i){
  return query(ft1,i)*i-query(ft2,i);
}
long long query_ans(int i,int j){
  return query_q(j)-query_q(i-1);
}


int main(){

  int t;
  int p,q,op;
  long long v;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&c);
    memset(ft1,0,sizeof ft1);
    memset(ft2,0,sizeof ft2);
    while(c--){
      scanf("%d",&op);
      if(op==0){
        scanf("%d %d %lld",&p,&q,&v);
        update_ans(p,q,v);
      }
      else if(op==1){
        scanf("%d %d",&p,&q);
        printf("%lld\n",query_ans(p,q));
      }
    }
    
  }

  return 0;
}
