#include<bits/stdc++.h>

using namespace std;

int main(){

  int a,b,c,d,e,f;
  cin>>a;
  cin>>b;
  cin>>c;
  cin>>d;
  cin>>e;
  cin>>f;

  int maxi=0;
  for(int i=0;i<=min(a,d);i++){
    maxi=max(maxi,i*e+f*(min(b,min(c,d-i))));
  }
  cout<<maxi<<endl;


  return 0;
}
