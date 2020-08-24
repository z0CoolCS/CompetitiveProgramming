#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  scanf("%d",&t);

  int n;
  while(t--){
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",arr+i);
    }
    if(arr[0]+arr[1]>arr[n-1]){
      printf("-1\n");
    }
    else{
      printf("%d %d %d\n",1,2,n);
    }

  }

  return 0;
}
