#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t,n;
  string word;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>word;
    long long count1s=0;
    for(char &c:word){
      if(c=='1')
        count1s++;
    }
    cout<<count1s+(count1s-1ll)*count1s/2<<endl;
  }
  return 0;
}
