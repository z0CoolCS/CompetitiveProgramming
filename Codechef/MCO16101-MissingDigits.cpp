#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

vector<pair<string,string>> ans;

void recursiveCal(string num1,string num2,int pos,int &n){
  if(n==pos){
    int num=atoi(num1.c_str());
    string next=to_string(num+1);
    int size=next.size();
    if(size>n)
      return;
    bool faro=true;
    REP(i,0,n){
      if(num2[i]!='?' && num2[i]!=next[i]){
        faro=false;
        break;
      }
    }
    if(faro){
      ans.push_back({num1,next});
      return;
    }
    return;
  }
  int x=0;
  if(pos==0)
    x++;

  REP(i,x,10){
    if(num1[pos]=='?'){
      string tmp=num1.substr(0,pos)+to_string(i)+num1.substr(pos+1,n);
      recursiveCal(tmp,num2,pos+1,n);
    }
    else{
      recursiveCal(num1,num2,pos+1,n);
      return;
    }
  }
  
}
int main(){

  string num1,num2;
  cin>>num1>>num2;
  int size=num1.size();
  recursiveCal(num1,num2,0,size);
  cout<<ans.size()<<endl;
  for(auto x:ans)
    cout<<x.first<<" "<<x.second<<endl;

  return 0;
}
