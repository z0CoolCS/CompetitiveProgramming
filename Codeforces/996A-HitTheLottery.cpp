#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  int cont=0;
  if(n/100>0){
    cont+=n/100;
    n%=100;
  }
  if(n/20>0){
    cont+=n/20;
    n%=20;
  }
  if(n/10>0){
    cont+=n/10;
    n%=10;
  }
  if(n/5>0){
    cont+=n/5;
    n%=5;
  }
  if(n>0)
    cont+=n;
  cout<<cont<<endl;


  return 0;
}
