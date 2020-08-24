#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int n,m,maxi;
set<string> s;
bool faro;

void backtracking(string& cad,int size){
  if (faro) return;
  if(size==maxi){
    string cp=cad;
    REP(i,0,m-1)
      cp+=cad[i];

    REP(i,size-m+1,size){
      string tmp=cp.substr(i,m);
      if(!s.count(tmp))
        s.insert(tmp);
      else{
        REP(j,size-m+1,i){
          string tmp=cp.substr(j,m);
          s.erase(tmp);
        }
        return;
      }
    }
    faro=true;
    return;
  }

  REP(i,0,n){
    string tmp=cad.substr(size-m+1,m-1);
    tmp+=(i+'0');
    if(!s.count(tmp)){
      s.insert(tmp);
      cad+=i+'0';
      backtracking(cad,size+1);
      if(faro)
        return;
      cad.pop_back();
      s.erase(tmp);
    }
  }
}

int main(){
  while(cin>>m>>n){
    s.clear();
    string cad="";
    maxi=1;
    faro=false;
    REP(i,0,m)
      maxi*=n;

    REP(i,0,m)
      cad+='0';

    s.insert(cad);
    backtracking(cad,m);
    cout<<cad<<endl;
  }

  return 0;
}
