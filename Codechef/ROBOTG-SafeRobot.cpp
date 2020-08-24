#include<bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)


int main(){
  int t;
  int n,m;
  string orders;
  cin>>t;

  while(t--){
    cin>>n>>m;
    n--,m--;
    cin>>orders;
    int w=0,h=0;
    for(char &c:orders){
      if(c=='R')
        w++;
      else if(c=='L')
        w--;
      if(c=='R')
        w++;
      if(c=='R')
        w++;
    }

  }

  return 0;
}
