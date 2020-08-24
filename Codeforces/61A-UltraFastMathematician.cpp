#include<iostream>
#include<string>

using namespace std;
int main(){
  string cad1;
  string cad2;
  cin>>cad1;
  cin>>cad2;
  short size=cad1.size();
  for(int i=0;i<size;i++){
    if(cad1[i]==cad2[i])
      cout<<0;
    else
      cout<<1;
  }
  return 0;
}
