#include<bits/stdc++.h>

using namespace std;

int main(){

  string line;
  int cont=0;
  long long ans=0;

  while(getline(cin,line)){
    if(line[0]=='+')
      cont++;
    else if(line[0]=='-')
      cont--;
    else{
      auto pos=line.find(":");
      string sub=line.substr(pos+1,line.size());  
      ans+=(long long)sub.size()*cont;
    }
  }
  cout<<ans<<endl;

  return 0;
}
