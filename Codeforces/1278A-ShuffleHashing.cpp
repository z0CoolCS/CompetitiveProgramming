#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

bool verificate(unordered_map<char,int> &d1,unordered_map<char,int> &d2,set<char> &cs){
  for(auto x:cs){
    if(d1[x]!=d2[x])
      return false;
  }
  return true;
}
int main(){
  int t;
  cin>>t;
  string p,pc;
  while(t--){
    cin>>p;
    cin>>pc;
    set<char> cs;
    unordered_map<char,int> ch;
    for(char &c:p){
      cs.insert(c);
      ch[c]++;
    }
    int sizep=p.size();
    int sizepc=pc.size();
    int pos_ans=-1;
    REP(i,0,sizepc){
      unordered_map<char,int> ch_aux;
      REP(j,0,sizep)
        ch_aux[pc[i+j]]++;
      if(verificate(ch,ch_aux,cs)){
        pos_ans=i;
        break;
      }
    }
    if(pos_ans!=-1)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }

  return 0;
}
