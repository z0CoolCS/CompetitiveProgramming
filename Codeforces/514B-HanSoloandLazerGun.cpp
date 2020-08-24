#include<bits/stdc++.h>

using namespace std;

int gcd(int x,int y){
  while(y>0){
    int tmp=x%y;
    x=y;
    y=tmp;
  }
  return x;
}
int main(){

  int n,x0,y0;
  int x,y;
  bool ax=false,ay=false;

  cin>>n>>x0>>y0;
  unordered_set<double> s;

  for(int i=0;i<n;i++){
    cin>>x>>y;
    if(x-x0==0)
      ax=true;
    else{
      int g=gcd(abs(x-x0),abs(y-y0));
      x=(x-x0)/g;
      y=(y-y0)/g;
      s.insert(y*1.0/x); 
    }

  }
  cout<<s.size()+ax<<endl;

  return 0;
}
