#include<bits/stdc++.h>

using namespace std;

const int size=2010;

bool mat[size][size];
string cad;

void palindromo(int i,int j){
  int l=i,r=j;
  while(l<r){
    if(cad[l]!=cad[r]){
      mat[i][j]=true;
      return;
    }
    l++;
    r--;
  }
}

int main(){

  cin>>cad;
  vector<int> c[26];
  int size=cad.size();

  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      palindromo(i,j);
    }
  }

  long long sum[size+1],dp[size+1];
  sum[0]=dp[0]=0;

  for(int i=1;i<=size;i++){
    dp[i]=dp[i-1];
    sum[i]=sum[i-1];
    for(int j=1;j<=i;j++){
      if(!mat[j-1][i-1]){
        dp[i]+=sum[j-1];
        sum[i]++;
      }
    }
  }

  cout<<dp[size]<<endl;

  return 0;
}
