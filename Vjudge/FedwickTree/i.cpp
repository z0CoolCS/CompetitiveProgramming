#include<bits/stdc++.h>

using namespace std;

const int size=3*1e5;
int nums[size];
int n;
long long ans=0;

int d(int x,int y){
  if(abs(x-y)<=1)
    return 0;
  return y-x;
}

void merge(int i,int p,int j){
  while(

}

void mergesort(int i,int j){
  if(i<j){
    int med=i+(j-i)/2;
    mergesort(i,med);
    mergesort(med+1,j);
    merge(i,med,j);
  }
}

int main(){

  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%d",nums+i);
  }
  merge(0,n-1);


  return 0;
}
