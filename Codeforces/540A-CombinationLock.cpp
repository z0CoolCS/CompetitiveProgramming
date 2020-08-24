#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
  int cont=0;
  short n;
  string num1,num2;
  cin>>n;
  cin>>num1;
  cin>>num2;
  for(int i=0;i<n;i++){
    short aux1=abs(num1[i]-num2[i]),aux2;

    if(num1[i]>num2[i])
      aux2=10-int(num1[i])+int(num2[i]);
    else
      aux2=10-int(num2[i])+int(num1[i]);

    if(aux1<aux2)
      cont+=aux1;
    else
      cont+=aux2;
  }
  cout<<cont;

  return 0;
}
