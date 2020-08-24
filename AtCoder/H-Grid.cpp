#include<bits/stdc++.h>

using namespace std;

int h,w;
const int mod=1e9+7;  
const int size=1e3+1;
int mat[size][size];
bool state[size][size];
bool vis[size][size];
int movx[2]={0,1};
int movy[2]={1,0};
bool valid(int x,int y){
  return x>=0 && x<h && y>=0 && y<w && state[x][y];
}
int dp(int i,int j){

  if(vis[i][j])
    return mat[i][j];

  if(i==h-1 && j==w-1)
    return 1;

  vis[i][j]=1;
  for(int x=0;x<2;x++){
    if(valid(i+movx[x],j+movy[x])){
      mat[i][j]+=(dp(i+movx[x],j+movy[x]));
      mat[i][j]%=mod;
    }
  }

  return mat[i][j];
}
int main(){

  scanf("%d %d",&h,&w);
  cin.ignore();
  char c;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      scanf("%c",&c);
      if(c=='.')
        state[i][j]=true;
      else
        state[i][j]=false;
    }
    cin.ignore();
  }
  printf("%d\n",dp(0,0));

  return 0;
}
