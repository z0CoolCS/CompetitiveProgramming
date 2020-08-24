#include<bits/stdc++.h>

using namespace std;
int n,m;

const int max_n=1001;
bool faro=false;

bool matrix[max_n][max_n];
int movx[]={-2,-2,0,0,-1,-1,-2,0,-1};
int movy[]={-2,0,0,-2,-2,0,-1,-1,-1};

bool valid_move(int i,int j){
  return i<=n && j<=n && i>0 && j>0;
}

bool valid(int x,int y){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(valid_move(x+i,y+j)){
        if(!matrix[i+x][j+y]){
          return false;
        }
      }
      else{
        return false;
      }
    }
  }
  return true;
}

bool check(int x,int y){
  matrix[x][y]=true;

  for(int i=0;i<9;i++){
    if(valid(x+movx[i],y+movy[i])){
      faro=true;
      return true;
    }
  }
  return false;
}

int main(){

  scanf("%d %d",&n,&m);
  int x,y;
  int i=1;

  for(;i<=m;i++){
    scanf("%d %d",&x,&y);
    if(check(x,y)){
      break;
    }
  }

  if(faro){
    printf("%d\n",i);
  }
  else{
    printf("-1\n",i);
  }

  return 0;
}
