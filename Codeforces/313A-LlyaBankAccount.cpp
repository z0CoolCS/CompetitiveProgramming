#include<iostream>
#include<string>
   
using namespace std;

int main(){
  string num;
  cin>>num;
  if(num[0]!='-')
    cout<<num;
  else
  {
    if(num[num.size()-1]>num[num.size()-2])
      num.erase(num.size()-1);
    else
      num.erase(num.size()-2,1);

    cout<<atoi(num.c_str());
    
  }
  return 0;
}
   
