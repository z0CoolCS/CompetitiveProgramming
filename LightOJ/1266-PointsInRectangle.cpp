#include<iostream>

using namespace std;

int arr[1005];
int n;

void update(int i){
  for(;i<n;i=i|(i+1))
    cont+=arr[i];
}

int count(int i){

  int cont=0;
  for(;i<n;i=(i&(i+1))-1)
    cont+=arr[i];

  return cont;
}
int countxy(int x,int y){
}


int main(){


  int t;
  cin>>t;

  while(t--){
  }

  return 0;
}
