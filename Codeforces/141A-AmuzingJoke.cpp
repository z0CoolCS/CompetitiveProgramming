#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
  map<char,short> dict;  
  string cad1,cad2,res;
  cin>>cad1;
  cin>>cad2;
  cad1+=cad2;
  cin>>res;
  for(char &c:cad1){
     dict[c]++;
  }
    
  for(char &c:res){
     dict[c]--;
  }
  bool faro=false;
  for(auto it=dict.begin();it!=dict.end();it++)
   {
     if(it->second!=0)
       {
         faro=true;
         break;
       }
   }
   if(faro)
     cout<<"NO";
   else
     cout<<"YES";

  return 0;
}
