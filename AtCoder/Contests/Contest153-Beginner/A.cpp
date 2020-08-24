#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int h,a;
  cin>>h>>a;
  if(h%a>0)
    cout<<h/a+1<<endl;
  else
    cout<<h/a<<endl;

  return 0;
}
