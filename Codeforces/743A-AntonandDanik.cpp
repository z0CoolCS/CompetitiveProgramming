#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int contA=0,contD=0;
  char c;
  while(n--){
     cin>>c;
     if(c=='A')
       contA++;
    else
      contD++;
   }
   if(contA>contD)
     cout<<"Anton";
   else if(contA==contD)
     cout<<"Friendship";
   else
     cout<<"Danik";
  return 0;
}
