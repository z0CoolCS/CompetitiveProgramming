#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int n;
  int c;
  while(cin>>n,n){
    stack<int> s;
    int cont=1;
    REP(i,0,n){
      cin>>c;
      if(cont==c){
        cont++;
        while(!s.empty()){
          if(s.top()==cont){
            cont++;
            s.pop();
          }
          else
            break;
        }
      }
      else
        s.push(c);
    }
    if(s.empty())
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }

  return 0;
}
