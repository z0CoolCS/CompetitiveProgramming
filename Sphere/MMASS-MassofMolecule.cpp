#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int te(char c){
  if(c=='C')
    return 12;
  if(c=='O')
    return 16;
  return 1;
}

int main(){

  string cad;
  cin>>cad;
    stack<long long> p;
    int size=cad.size();
    long long ans=0;
    REP(i,0,size){
      if(cad[i]>='1' && cad[i]<='9') continue;
      else if(cad[i]=='(')
        p.push(0);
      else if(cad[i]==')'){
        long long acum=0;
        int op=1;
        if(i+1<size){
          if(cad[i+1]>='1' && cad[i+1]<='9')
            op=cad[i+1]-'0';
        }
        while(p.top()!=0){
          acum+=p.top()*(1ll*op);
          p.pop();
        }
        p.pop();
        p.push(acum);
      }
      else if(cad[i]=='O' || cad[i]=='H' || cad[i]=='C'){
        int v=te(cad[i]);
        if(i+1<size){
          if(cad[i+1]>='1' && cad[i+1]<='9')
            v*=cad[i+1]-'0';
        }
        p.push(v*1ll);
      }
    }
    while(!p.empty()){
      ans+=p.top();
      p.pop();
    }
    cout<<ans<<endl;

  return 0;
}

