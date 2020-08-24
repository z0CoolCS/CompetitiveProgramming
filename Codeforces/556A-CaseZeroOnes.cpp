#include<iostream>
#include<string>

using namespace std;

int main(){

  string cad;
  unsigned long n;
  cin>>n;
  cin>>cad;
  if(n==1)
    cout<<1;
  else{
    for(unsigned long i=1;i<cad.size();i++){
      if((cad[i]=='0' && cad[i-1]=='1') || (cad[i-1]=='0' && cad[i]=='1')){
         cad.erase(i-1,2);        
         i-=2;
      }
    }
    
  cout<<cad.size();
  }
  return 0;

  }

