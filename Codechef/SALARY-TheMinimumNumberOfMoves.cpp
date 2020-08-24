#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  int n,num;
  cin>>t;
  while(t--){
    cin>>n;
    int mini=10001;
    int acum=0;
    REP(i,0,n){
      cin>>num;
      acum+=num;
      mini=min(num,mini);
    }
    cout<<acum-n*mini<<endl;
  }

  return 0;
}
