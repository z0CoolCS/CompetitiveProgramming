#include<iostream>
#include<set>

using namespace std;

int main(){
  set<char> letters;
  string cad;
  getline(cin,cad);
  for(char &c:cad){
    if(c>='a' && c<='z')
      letters.insert(c);
  }
  cout<<letters.size();
  return 0;
  }
