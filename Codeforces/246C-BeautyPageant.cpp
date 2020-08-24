#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,k;
  scanf("%d %d",&n,&k);

  int sold[n];
  for(int i=0;i<n;i++){
    scanf("%d",sold+i);
  }
  sort(sold,sold+n);
  long long prefix[n+2];
  long long suffix[n+2];
  prefix[0]=suffix[n+1]=0;
  unordered_map<long long,bool> dict;
  
  for(int i=1;i<=n;i++){
    prefix[i]=prefix[i-1]+1LL*sold[i-1];
    suffix[n-i+1]=suffix[n-i+2]+1LL*sold[n-i];
  }

  for(int i=0;i<n && k;i++){
    printf("1 %d\n",sold[i]);
    dict[1LL*sold[i]]=true;
    k--;
  }
  for(int i=1;i<=n && k;i++){
    for(int j=i+1;j<=n && k;j++){
      long long tmp = prefix[i]+1LL*sold[j-1];
      if(!dict[tmp] && k){
        dict[tmp]=true;
        k--;
        printf("%d",i+1);
        for(int k=0;k<i;k++){
          printf(" %d",sold[k]);
        }
        printf(" %d\n",sold[j-1]);
      }
      tmp = suffix[n-i+1] + 1LL*sold[n-j];
      if(!dict[tmp] && k){
        dict[tmp]=true;
        k--;
        printf("%d",i+1);
        for(int k=n-1;k>=n-i;k--){
          printf(" %d",sold[k]);
        }
        printf(" %d\n",sold[n-j]);
      }
    }

  }

  return 0;
}
