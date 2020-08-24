#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(){
   int n;
   cin>>n;
   map<string,int> dict;
   while(n--){
     string name;
     cin>>name;
     auto it=dict.insert(pair<string,int>(name,0));
     if(it.second==false){
       dict[name]++;
       cout<<name<<dict[name]<<endl;
     }
     else
       cout<<"OK"<<endl;

   }
   return 0;
}
