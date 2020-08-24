#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  long long m;
  scanf("%d %lld",&n,&m);

  int arr[n+1];
  int p1=0,p2=n-1;
  m--;
  for(int i=1;i<=n-1;i++){
    if(m<(1ll<<(n-i-1))){
      arr[p1]=i;
      p1++;
    }
    else{
      arr[p2]=i;
      p2--;
      m-=(1ll<<(n-i-1));
    }
  }
  arr[p1]=n;
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
  
  return 0;
}
