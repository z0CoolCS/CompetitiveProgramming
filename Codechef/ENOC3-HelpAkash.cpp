#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t;
  int a,b;
  string num;
  cin>>t;
  cin.ignore();
  while(t--){
    cin>>num;
    int size=num.size();
    if(size!=1){
      string ans="";
      REP(i,0,size-1){
        a=num[i]-'0';
        b=num[i+1]-'0';
        ans+=to_string(a ^ b);
      }
      a=num[size-1]-'0';
      b=num[0]-'0';
      ans+=to_string(a ^ b);
      cout<<ans<<endl;
    }
    else
      cout<<num<<endl;
  }

  return 0;
}
