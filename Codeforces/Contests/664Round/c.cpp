#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m;
  scanf("%d %d",&n,&m);
  int arr1[n];
  int arr2[m];

  for(int i=0;i<n;i++){
    scanf("%d",arr1+i);
  }
  for(int i=0;i<m;i++){
    scanf("%d",arr2+i);
  }

  int ans=0;
  for(int i=0;i<n;i++){
    int ans2 = arr1[i] & arr2[0];
    for(int j=1;j<m;j++){
      ans2 = min(ans2, arr1[i] & arr2[j]);
    }
    ans = ans | ans2;
  }
  printf("%d\n",ans);


  return 0;
}
