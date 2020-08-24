#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  int n,c,a;
  cin>>t;
  while(t--){
    int cand=0;
    cin>>n>>c;
    REP(i,0,n){
      cin>>a;
      cand+=a;
    }
    if(cand<=c)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;

  }

  return 0;
}
