#include<bits/stdc++.h>

using namespace std;

int main(){

  int a,b;
  cin>>a>>b;
  int i=1;
  bool faro=true;
  while(1){
    if(faro){
      a-=i;
      if(a<0){
        cout<<"Vladik\n";
        break;
      }
    }
    else{
      b-=i;
      if(b<0){
        cout<<"Valera\n";
        break;
      }
    }
    faro=!faro;
    i++;
  }

  return 0;
}
