#include<bits/stdc++.h>

using namespace std;

const int size 1000;

int main(){

  int n,k;
  scanf("%d %d",&n,&k);

  int fact[]={1,2,6,24};

  long long sum=0;
  for(int i=n-k;i<=n;i++){
    sum+=dp(i,n);
  }


  return 0;
}
