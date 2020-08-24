#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,k;
  cin>>n>>k;
  int num[n];

  for(int i=0;i<n;i++)
    cin>>num[i];

  int ans=0,act;
  for(int i=0;i<k;i++)
    ans+=num[i];

  act=ans;
  int ind=0;
  for(int i=k;i<n;i++){
    act=act-num[i-k]+num[i];
    if(ans>act){
      ans=act;
      ind=i-k+1;
    }
  }

  cout<<ind+1<<endl;

  return 0;
}
