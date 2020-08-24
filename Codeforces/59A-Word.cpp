#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string word;
  cin>>word;
  short l=0,u=0;
  for(char &c:word){
    if(c>='A' && c<='Z')
      u++;
    else
      l++;
  }
  if(u>l)
    transform(word.begin(),word.end(),word.begin(),::toupper);
  else
    transform(word.begin(),word.end(),word.begin(),::tolower);

  cout<<word;
  return 0;
}
