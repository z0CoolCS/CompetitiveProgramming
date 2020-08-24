#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,fives=0,zeros=0,c;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>c;
    if(c==5)
      fives++;
    else
      zeros++;
  }

  bool faro=false;

  while(fives>0 and zeros>0){
    if((fives*5)%9==0){
      for(int i=0;i<fives;i++)
        cout<<5;
      for(int i=0;i<zeros;i++)
        cout<<0;
      cout<<endl;
      faro=true;
      break;
    }
    fives--;
  }

  if(!faro){
    if(zeros>0)
      cout<<0<<endl;
    else
      cout<<-1<<endl;
  }

  return 0;
}
