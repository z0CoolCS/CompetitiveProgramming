#include<bits/stdc++.h>

using namespace std;

bool extcheck(int r,int g,int b){
  if(r%2==0 && g%2==0 && b%2!=0){
    return true;
  }
  else if(r%2!=0 && g%2==0 && b%2==0){
    return true;
  }
  else if(r%2==0 && g%2!=0 && b%2==0){
    return true;
  }
  return false;
}

bool extcheck2(int r,int g,int b){
  if( r%2!=0 && g%2!=0 && b%2==0 && r>0 && g>0 && b>0){
    return true;
  }
  if( r%2==0 && g%2!=0 && b%2!=0 && r>0 && g>0 && b>0){
    return true;
  }
  if( r%2!=0 && g%2==0 && b%2!=0 && r>0 && g>0 && b>0){
    return true;
  }
  return false;
}
bool check(int r,int g,int b,int w){
        if(r%2==0 && g%2==0 && b%2==0){
          return true;
        }
        else if(r & 1 && g & 1 && b & 1){
          return true;
        }
      if(w%2==0){
        if(extcheck(r,g,b)){
          return true;
        }
        return false;
      }
      else{
        if(extcheck2(r,g,b)){
          return true;
        }
        return false;
      }
}

int main(){

  int t;
  scanf("%d",&t);
  int r,g,b,w;

  while(t--){
    scanf("%d %d %d %d",&r,&g,&b,&w);

    if(check(r,g,b,w)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }

  return 0;
}
