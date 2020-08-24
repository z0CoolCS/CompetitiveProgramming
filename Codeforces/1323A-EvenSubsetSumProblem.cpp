#include<bits/stdc++.h>

using namespace std;

int main(){

  int t,n,x;
  bool even;
  bool odd1,odd2;
  int o1,o2,e1;
  cin>>t;
  while(t--){
    odd1=odd2=even=false;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>x;
      if(x & 1){
        if(!odd1){
          odd1=true;
          o1=i+1;
        }
        else{
          odd2=true;
          o2=i+1;
        }
      }
      else{
        e1=i+1;
        even=true;
      }
    }
    if(odd1 && odd2){
      cout<<2<<endl;
      cout<<o1<<" "<<o2<<endl;
    }
    else if(even){
      cout<<1<<endl;
      cout<<e1<<endl;
    }
    else
      cout<<-1<<endl;

  }


  return 0;
}
