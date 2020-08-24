#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  long long h;
  cin>>h;
  long long base=1,acum=0;
  while(h>0){
    acum+=base;
    base*=2;
    h/=2;
  }
  cout<<acum<<endl;

  return 0;
}
