#include<iostream>

using namespace std;

int main(){

  string game;
  int n;
  cin>>n;
  cin>>game;
  int ant=0,dan=0;
  for(char &c:game){
    if(c=='A')
      ant++;
    else
      dan++;
  }
  if(ant>dan)
    cout<<"Anton\n";
  else if(dan>ant)
    cout<<"Danik\n";
  else
    cout<<"Friendship\n";
  return 0;
}
