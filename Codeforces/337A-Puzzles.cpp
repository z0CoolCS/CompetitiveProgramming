#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  vector<short> arr;
  short n,m;
  cin>>n>>m;
  while(m--){
    short a;
    cin>>a;
    arr.push_back(a);
  }
  sort(arr.begin(),arr.end());
  short size=arr.size(),min=n+arr[arr.size()-1];
   for(int i=0;i<size-n+1;i++){
    if(arr[i+n-1]-arr[i]<min)
      min=arr[i+n-1]-arr[i];

   }
   cout<<min;


  return 0;
  }
