#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)


int main(){

  int h,n,a,b,x;
  cin>>h>>n;
  vector<pair<int,int>> m;
  REP(i,0,n){
    cin>>a>>b;
    m.push_back({a,b});
  }
  int mat[h+1][n+1];

  REP(i,0,h+1){
    REP(j,0,n+1)
        mat[i][j]=100000;
  }

  REP(i,0,h+1){
    REP(j,0,n+1){
      if(i==0 || j==0)
        mat[i][j]=0;
      else if(i<=m[j].first)
        mat[i][j]=min(m[j].second+,mat[i][j]);
      else{
        mat[i][j]=min(m[j].second+mat[i-m[j].first][j],mat[i][j]);
      }
    }
  }

  cout<<mat[h][n]<<endl;


  return 0;
}
