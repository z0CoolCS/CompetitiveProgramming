#include<iostream>
#include<string>
using namespace std;
int main(){
 string cad1="qwertyuiop",cad2="asdfghjkl;",cad3="zxcvbnm,./";
 char c;
 string sentence;
 cin>>c;
 cin>>sentence;
 short act=(c=='R')?-1:1;
 for(char &c:sentence){
    if(cad1.find(c)!=string::npos)
      cout<<cad1[cad1.find(c)+act];
    else if(cad2.find(c)!=string::npos)
      cout<<cad2[cad2.find(c)+act];
    else
      cout<<cad3[cad3.find(c)+act];
 }
 return 0;

}
