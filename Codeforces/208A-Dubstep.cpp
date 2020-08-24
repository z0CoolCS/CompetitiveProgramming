#include<string>
#include<iostream>
using namespace std;

int main(){
  string s="",aux="",saux;
  cin>>saux;
  short size=saux.size();
  for(int i=0;i<size;i++){
    if(saux[i]=='W' && saux[i+1]=='U' && saux[i+2]=='B'){
      i+=2;
      if(s!="")
        if(s[s.size()-1]!=' ')
           s+=" "; 
      continue;
      }
    else      
      s+=saux[i];
  }
  
  cout<<s;
  return 0;
}

