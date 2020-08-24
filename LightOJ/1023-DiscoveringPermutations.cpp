#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n,k;
  cin>>t;
  REP(j,1,t+1){
    cout<<"Case "<<j<<":\n";

    cin>>n>>k;
    string c="";

    REP(i,0,n)
      c+=(char('A'+i));

    do{
      if(k==0)
        break;
      cout<<c<<endl;
      k--;
    }
    while(next_permutation(c.begin(),c.end()));
  }



  return 0;
}
