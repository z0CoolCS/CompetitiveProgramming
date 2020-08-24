#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int main(){

  int n;
  cin>>n;
  cin.ignore();
  string word;
  while(n--){
    cin>>word;
    int acum=0;
    for(char &c:word)
      acum+=(c-'a')%5;
    cout<<acum<<endl;
  }

  return 0;
}
