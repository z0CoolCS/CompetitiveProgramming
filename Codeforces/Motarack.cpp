#include<bits/stdc++.h>

using namespace std;
const int size= 1e5+1;

int t,n;
int num[size];
int check(int k){
  int maxi=-1;
  int a,b;
  for(int i=1;i<n;i++){
    a=num[i];
    b=num[i-1];
    if(a==-1)
      a=k;
    if(b==-1)
      b=k;

    maxi=max(maxi,abs(a-b));
  }
  return maxi;
}

int main(){
  cin>>t;
  while(t--){
  cin>>n;
  int mini=1000000010;
  int maxi=-mini;
  bool faro=false;
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  for(int i=0;i<n;i++){
    if(i > 0 && num[i] == -1 && num[i - 1] != -1){
      mini=min(num[i-1],mini);
      maxi=max(num[i-1],maxi);
    }
    if(i <n-1 && num[i] == -1 && num[i + 1] != -1){
      mini=min(num[i+1],mini);
      maxi=max(num[i+1],maxi);
    }
    
  }
  int dif=(maxi+mini)/2;
  int ans=0;
  for(int i=0;i<n;i++){
        if(num[i] == -1)
           num[i] = dif;
        if(i)
           ans = max(ans,abs(num[i]-num[i - 1]));
  }
    cout<<ans<<" "<<dif<<endl;
  }

  return 0;
}
