#include<iostream>

using namespace std;

int main(){
  int num;
  int arr[]={4,7,44,47,74,77,444,447,477,744,747,774,777};
  bool faro=false;
   cin>>num;
  for(int &c:arr)
  {
    if(num%c==0)
    {
      faro=true;
      break;
      }
  }
  if(faro)
      cout<<"YES"<<endl;
  else
      cout<<"NO"<<endl;
  return 0;
}
