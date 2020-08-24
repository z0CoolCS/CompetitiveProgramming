#include<bits/stdc++.h>

using namespace std;
const int size=1e2+1;
int n,m;
int mat[size][size];
bool vis[size][size];
int b[size];
int g[size];

int dp(int i,int j){
  if(i==n || j==m)
    return 0;

  if(vis[i][j]) return mat[i][j];

  if(abs(b[i]-g[j])<=1)
    mat[i][j]=max(dp(i+1,j+1)+1,mat[i][j]);
  else
    mat[i][j]=max(dp(i,j+1),dp(i+1,j));

  vis[i][j]=true;

  return mat[i][j];
}

int main(){

  cin>>n;
  for(int i=0;i<n;i++)
    cin>>b[i];

  sort(b,b+n);
  cin>>m;
  for(int i=0;i<m;i++)
    cin>>g[i];
  sort(g,g+m);
  cout<<dp(0,0)<<endl;

  return 0;
}
