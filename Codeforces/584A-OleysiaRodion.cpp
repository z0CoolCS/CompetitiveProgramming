#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  short n,t;
  cin>>n>>t;
  if(n==1 && t==10)
    printf("-1");
  else{
    if(t!=10)
      cout<<setfill(static_cast<char>(t+48))<<setw(n);
    else
      cout<<1<<setfill('0')<<setw(n-1);
  }
  cout<<"";
  
   
   return 0;
}
