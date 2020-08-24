#include<iostream>

using namespace std;

int main(){

  int arr[10002]={0};
  int l,h,r;
  int mini=10002,maxi=-1;
  bool faro=true;
  while(cin>>l>>h>>r){
    if(l<mini)
      mini=l;
    if(r>maxi)
      maxi=r;
    for(int i=l;i<r;i++){
      if(arr[i]<h)
        arr[i]=h;
    }
    if(h>0)
      faro=false;
  }

  bool space=false;
  for(int i=mini;i<=maxi;i++){
    if(arr[i]!=arr[i-1]){
      if(space)
        cout<<" ";
      cout<<i<<" "<<arr[i];
      space=true;
    }
  }
  if(faro)
    cout<<1<<" "<<0;
  cout<<endl;

  return 0;
}
