#include<iostream>
#include<string>
using namespace std;

int main(){
  int b=0,w=0;
  for(int i=0;i<8;i++){
    string row;
    cin>>row;
    for(char &c:row){
      if(c!='.'){
        if(c=='Q')
          w+=9;
        else if(c=='R')
          w+=5;
        else if(c=='N' || c=='B')
          w+=3;
        else if(c=='P')
          w++;
        else if(c=='q')
          b+=9;
        else if(c=='r')
          b+=5;
        else if(c=='n' || c=='b')
          b+=3;
        else if(c=='p')
          b++;
      }
    }
  }
    if(b>w)
      printf("Black");
    else if(w>b)
      printf("White");
    else
      printf("Draw");

   return 0;
}
        
