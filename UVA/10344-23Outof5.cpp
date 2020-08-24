#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int arr[5];
bool state[5];

void back(bool &faro,int res,int cont){
  if(cont==5){
    if(res==23){
      faro=true;
      return;
    }
  }

  for(int i
}
int main(){

  while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4],arr[0]){
    bool faro=false;
    memset(state,0,sizeof state);
    
    REP(i,0,5){
      state[i]=true;
      back(faro,arr[i],1);
      if(faro)
        break;
    }
    if(faro)
      cout<<"Possible\n";
    else
      cout<<"Impossible\n";

  }

  return 0;
}
