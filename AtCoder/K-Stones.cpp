#include<bits/stdc++.h>

using namespace std;

const int size_k = 1e5+1;
const int size_n = 1e2+1;

bool dp[size_k];
int v_n[size_n];

int main(){

  int n,k;
  scanf("%d %d",&n,&k);

  for(int i=0;i<n;i++)
    scanf("%d",v_n+i);

  dp[0]=0;
  for(int i=1;i<=k;i++){
    for(int j=0;j<n;j++){
      if(v_n[j]<=i){
        if(!dp[i-v_n[j]])
          dp[i]=true;
      }
    }
  }
  if(dp[k])
    printf("First\n");
  else
    printf("Second\n");



  return 0;
}
