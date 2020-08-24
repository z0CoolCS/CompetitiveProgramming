#include<bits/stdc++.h>

using namespace std;

bool searchabfirst(string cad,int size){
  bool ab=false;
  for(int i=0;i<size-1;i++){
    if(cad[i]=='A' && cad[i+1]=='B' && !ab){
      ab=true;
      i++;
    }
    else if(cad[i]=='B' && cad[i+1]=='A' && ab)
        return true;
  }
  return false;
}
bool searchbafirst(string cad,int size){
  bool ba=false;
  for(int i=0;i<size-1;i++){
    if(cad[i]=='B' && cad[i+1]=='A' && !ba){
      ba=true;
      i++;
    }
    else if(cad[i]=='A' && cad[i+1]=='B' && ba)
        return true;
  }
  return false;
}

int main(){

  string cad;
  cin>>cad;
  int size=cad.size();
  int i=0;
  if(searchabfirst(cad,size))
    cout<<"YES\n";
  else{
    if(searchbafirst(cad,size))
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }

  return 0;
}
