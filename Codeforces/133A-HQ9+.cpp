#include<iostream>
#include<string>
using namespace std;


int main(){
  string word;
  char h='H',q='Q',n9='9';
  bool sem=false;
  cin>>word;
  for(char &c:word)
  {
    if(c==h || c==q || c==n9)
    {
      sem=true;
      break;}
  }
  if(sem)
    cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  return 0;
}
