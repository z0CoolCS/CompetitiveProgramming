#include<bits/stdc++.h>

using namespace std;


const int size=1e5+1;
int n,x;
unordered_map<int,int> dict;
int maxi=0;

int main(){

  cin>>n;

  for(int i=0;i<n;i++){
    cin>>x;
    dict[x]++;
    maxi=max(x,maxi);
  }
  long long acum[size+1];
  acum[0]=0;
  acum[1]=1ll*dict[1];

  for(int i=2;i<=maxi;i++){
    acum[i]=max(acum[i-1],acum[i-2]+1ll*i*dict[i]);
  }
  cout<<acum[maxi]<<endl;

  return 0;
}
     
