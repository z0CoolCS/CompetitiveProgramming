#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  int a,b;
  while(t--){
    cin>>a>>b;
    int res=abs(a-b);
    int ans=0;
    int i=0;
    for(;;i++){
      if(i*(i+1)/2>res)
        break;
    }
    i--;
  }

  return 0;
}
