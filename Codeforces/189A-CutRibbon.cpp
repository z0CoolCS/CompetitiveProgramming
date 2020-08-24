#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,p[3];
  cin>>n>>p[0]>>p[1]>>p[2];
  int num[n+1];
  memset(num,0,sizeof num);
  if(p[0]<=n)
    num[p[0]]=1;
  if(p[1]<=n)
    num[p[1]]=1;
  if(p[2]<=n)
    num[p[2]]=1;

  for(int i=1;i<=n;i++){
    for(int j=0;j<3;j++){
      if(p[j]<=i && num[i-p[j]]>0)
        num[i]=max(num[i],num[i-p[j]]+1);
    }
  }
  cout<<num[n]<<endl;

  return 0;
}
