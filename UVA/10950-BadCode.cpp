#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int size;
int n;
string ec;
set<string> ans;

bool verificate(string &cad,int ind){
  REP(i,0,cad.size()){
    if(ec[ind+i]!=cad[i])
      return false;
  }
  return true;
}

void backtracking(vector<pair<string,string>> &c,int ind,string &cad,int step){

  if(ind==size){
    ans.insert(cad);
    return;
  }

  REP(i,0,n){
    if(ind+c[i].second.size()<=size){
      if(verificate(c[i].second,ind)){
        cad+=c[i].first;
        backtracking(c,ind+c[i].second.size(),cad,step+1);
        cad=cad.substr(0,step);
      }
      else if(ec[ind]=='0' && ind+1+c[i].second.size()<=size){
        if(verificate(c[i].second,ind+1)){
          cad+=c[i].first;
          backtracking(c,ind+1+c[i].second.size(),cad,step+1);
          cad=cad.substr(0,step);
        }
      }
    }
  }
}

int main(){
  int ind=1;
  while(cin>>n,n){
    ans.clear();
    vector<pair<string,string>> c(n);
    REP(i,0,n)
      cin>>c[i].first>>c[i].second;
    cin>>ec;
    size=ec.size();
    string cad="";
    backtracking(c,0,cad,0);
    cout<<"Case #"<<ind<<endl;
    int cont=0;
    for(auto &x:ans){
      if(cont==100)
        break;
      cout<<x<<endl;
      cont++;
    }
    cout<<endl;
    ind++;
  }


  return 0;
}
