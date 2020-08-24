#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int num[n];
  int o[n+1];
  int z[n+1];
  o[0]=z[0]=0;
  for(int i=0;i<n;i++){
    cin>>num[i];
    if(num[i]==0){
      z[i+1]=z[i]+1;
      o[i+1]=o[i];
    }
    else{
      z[i+1]=z[i];
      o[i+1]=o[i]+1;
    }
  }
  int coun=o[n],maxi=0;
  for(int i=0;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      maxi=max(coun-o[j]+o[i]+z[j]-z[i],maxi);
    }
  }
  cout<<maxi<<endl;
    

}
