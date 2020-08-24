#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin>>s;

  set<string> ans;

  for(char c='a';c<='z';c++){
    for(int i=0;i<=s.size();i++){
      string tmp="";
      if(i==0)
        tmp=s+c;
      else if(i==s.size())
        tmp=c+s;
      else
        tmp=s.substr(0,i)+c+s.substr(i);
      ans.insert(tmp);
    }
  }

  cout<<ans.size()<<endl;

  return 0;
}
