#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int n;
  int x;
  cin>>n;  
  long long ans[n*2];
  REP(i,0,2*n)
    ans[i]=0;
  int matrix[n][n];
  
  REP(i,0,n){
    REP(j,0,n){
      cin>>x;
      matrix[i][j]=x;
      ans[i]+=(long long)x;
      ans[n+j]+=(long long)x;
    }
  }
  long long maxi=LONG_MIN;
  REP(i,0,n){
    REP(j,0,n)
      maxi=max(maxi,ans[i]+ans[n+j]-1ll*matrix[i][j]);
  }
  cout<<maxi<<endl;


  return 0;
}
