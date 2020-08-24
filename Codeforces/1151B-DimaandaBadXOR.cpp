#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int n,m;
  cin>>n>>m;
  int mat[n][m];

  REP(i,0,n)
    REP(j,0,m)
      cin>>mat[i][j];

  int ans=0;

  REP(i,0,n)
    ans=ans^mat[i][0];

  vector<int> pos(n,1);

  if(ans>0){
    cout<<"TAK\n";
    REP(i,0,n){
      if(i>0)
        cout<<" ";
      cout<<pos[i];
    }
    cout<<endl;
  }
  else{
    for(int i=0;i<n && ans==0;i++){
      REP(j,1,m){
        if(mat[i][0]!=mat[i][j]){
          ans^=mat[i][0];
          ans^=mat[i][j];
          pos[i]=j+1;
          break;
        }
      }
    }
    if(ans>0){
      cout<<"TAK\n";
      REP(i,0,n){
        if(i>0)
          cout<<" ";
        cout<<pos[i];
      }
      cout<<endl;
    }
    else
      cout<<"NIE\n";
  }


  return 0;
}
