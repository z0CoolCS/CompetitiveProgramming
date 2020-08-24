#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  scanf("%d",&n);
  int t[n][2];
  for(int i=0;i<n;i++)
    scanf("%d %d",&t[i][0],&t[i][1]);

  int count=1;
  int prev=t[0][0];
  for(int i=1;i<n-1;i++){
    if(t[i][0]-t[i][1]>prev){
      count++;
      prev=t[i][0];
    }
    else{
      if(t[i][0]+t[i][1]<t[i+1][0]){
        count++;
        prev=t[i][0]+t[i][1];
      }
      else
        prev=t[i][0];
    }
  }
  if(t[n-1][0]>prev)
    count++;
  printf("%d\n",count);
  


  return 0;
}
