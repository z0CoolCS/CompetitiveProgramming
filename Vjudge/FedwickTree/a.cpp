#include<bits/stdc++.h>

using namespace std;

const int size=1e6;

int num[size];
int n;

int query(int ft[],int index){
  int ans=0;
  while(index>0){
    ans+=ft[index];
    index-=index&-index;
  }
  return ans;
}
void update(int ft[],int index,int maxi){
  while(index<=maxi){
    ft[index]++;
    index+=index&-index;
  }
}


int main(){
  int t;
  scanf("%d",&t);

  while(t--){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      scanf("%d",num+i);
    int max_v=*max_element(num,num+n);
    int ft[max_v+1];
    memset(ft,0,sizeof ft);
    long long sum=0;
    for(int i=n-1;i>=0;i--){
      sum+=1ll*query(ft,num[i]);
      update(ft,num[i],max_v);
    }
    printf("%lld\n",sum);
  }

  return 0;
}
