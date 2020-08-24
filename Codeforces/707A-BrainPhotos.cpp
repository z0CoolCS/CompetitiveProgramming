#include<iostream>
using namespace std;

int main(){
  short n,m;
  bool faro=false;
  cin>>n>>m;
  while(n--){
    for(short i=0;i<m;i++){
      char c;
      cin>>c;
      if(c=='C' || c=='Y' || c=='M'){
        faro=true;
        break;}
    }
  }
  if(faro)
    cout<<"#Color";
  else
    cout<<"#Black&White";

  return 0;

}
