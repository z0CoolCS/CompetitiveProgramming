#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,d,m;
  scanf("%d %d %d",&n,&d,&m);

  int nums[n];
  long long ans = 0 ;

  for(int i=0;i<n;i++){
    scanf("%d",nums+i);
    ans += 1LL*nums[i];
  }
  int cont=0;
  for(int i=0;i<n;i++){
    if(nums[i]>m){
      cont++;
    }
  }

  sort(nums,nums+n);

  int i=0;
  if(cont>1){
    for(int j=0;j<d;j++){
      ans -= 1LL*nums[i];
      i++;
    }
    cont--;
  }
  printf("%lld\n",ans);

  return 0;
}
