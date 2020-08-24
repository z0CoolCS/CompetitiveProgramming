#include<bits/stdc++.h>

using namespace std;

bool state[101][101];
int n,m,x,y;

int movx[]={1,0,-1,0};
int movy[]={0,1,0,-1};

bool isvalid(int i,int j){
  return i>0 && i<=n && j>0 && j<=m && !state[i][j];
}


void dfs(int i,int j){

    printf("%d %d\n",i,j);
    state[i][j]=true;

    for(int k=0;k<4;k++){
      if(isvalid(i+movx[k],j+movy[k])){
        dfs(i+movx[k],j+movy[k]);
      }
    }

}

int main(){

  scanf("%d %d %d %d",&n,&m,&x,&y);
  dfs(x,y);


  return 0;
}
