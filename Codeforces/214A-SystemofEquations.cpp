#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m;
  cin>>n>>m;
  int a=0,b,c=0;
  
  for(;a*a<=n;a++){
    b=n-a*a;
    if(a+b*b==m)
      c++;
  }
  cout<<c<<endl;



  return 0;
}
