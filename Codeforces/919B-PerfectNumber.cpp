#include<bits/stdc++.h>

using namespace std;

const int size=1e4;
int n;
int arr[size];

int val(int x){
  int sum=0;
  while(x>0){
    sum+=x%10;
    x/=10;
  }
  return sum;
}

void prec(){
  n=0;
  for(int i=1;n<size;i++){
    if(val(i)==10){
      arr[n]=i;
      n++;
    }
  }
}
int main(){
  prec();

  int k;
  cin>>k;
  cout<<arr[k-1]<<endl;

  return 0;
}
