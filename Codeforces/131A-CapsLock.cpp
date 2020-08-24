#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string word;
  bool temp=false;
  cin>>word;
  for(int i=1;i<word.size();i++){
     if(word[i]>96){
        temp=true;
        break;}
  }
  if(temp)
    cout<<word;
  else{
    if(isupper(word[0]))
      cout<<static_cast<char>(tolower(word[0]));
    else
      cout<<static_cast<char>(toupper(word[0]));

      transform(word.begin()+1,word.end(),word.begin()+1,::tolower);
      cout<<word.substr(1,word.size());
      }
  
  return 0;
  }
