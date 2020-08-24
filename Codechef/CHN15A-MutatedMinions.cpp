#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n,k,x;
  cin>>t;
  while(t--){
    int cont=0;
    cin>>n>>k;
    REP(i,0,n){
      cin>>x;
      if((x+k)%7==0)
        cont++;
    }

    cout<<cont<<endl;

  }

  return 0;
}
