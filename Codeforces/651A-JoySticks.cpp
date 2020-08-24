#include<bits/stdc++.h>

using namespace std;

int main(){

  int a,b;
  cin>>a>>b;
  int cont=0;
  while((a>1 || b>1) && a>0 && b>0){
    if(a>b){
      a-=2;
      b++;
    }
    else{
      b-=2;
      a++;
    }
    cont++;
  }
  cout<<cont<<endl;

  return 0;
}
