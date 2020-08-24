#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,x;
  cin>>n;
  int negnum=0,zeros=0;
  long long ans=0;

  for(int i=0;i<n;i++){
    cin>>x;
    if(x<0){
      negnum++;
      if(x<-1)
        ans-=1ll*(x+1);
    }
    else if(x>1)
      ans+=1ll*(x-1);
    else if(x==0)
      zeros++;
  }
  if(negnum%2==1){
    if(zeros>0){
      ans++;
      zeros--;
    }
    else
      ans+=1ll*2;
  }
  ans+=1ll*zeros;
  cout<<ans<<endl;


  return 0;
}
