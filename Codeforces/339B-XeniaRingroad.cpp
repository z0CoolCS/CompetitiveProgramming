#include<iostream>
using namespace std;

int main(){
  long n,m,temp=1;
  unsigned long long cont=0;
  cin>>n>>m;
  while(m--){
    long aux;
    cin>>aux;
    if(temp==aux)
      continue;
    cont+=aux<temp?(n-temp+aux):(aux-temp);
    temp=aux;
  }
  cout<<cont;

  return 0;
  }

