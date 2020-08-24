#include<iostream>
#include<string>

using namespace std;

int main(){
  string cad="";
  short n;
  cin>>n;
  for(short i=0;i<n;i++){
    if(i%2==0){
      if(i!=n-1)
         cad+="I hate that ";
      else
         cad+="I hate ";
    }
    else{
      if(i!=n-1)
         cad+="I love that ";
      else
         cad+="I love ";
    }
  }
  cout<<cad<<"it";
  return 0;
}
