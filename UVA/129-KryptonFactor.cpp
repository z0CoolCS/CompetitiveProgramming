#include<bits/stdc++.h>

using namespace std;

int n,l;
bool faro;
int d;
#define rep(i,a,b) for(int i=a;i<b;i++)

bool check(string &cad,int size){
  rep(i,1,size/2+1){
    string subc1=cad.substr(size-i,i);
    string subc2=cad.substr(size-i*2,i);
    if(subc1==subc2)
      return true;
  }
  return false;
}
void backtracking(string& cad,int &size){

  if(size>80)
    return;

  if(d==n){
    rep(i,0,size){
      if(i%64==0 && i>0)
        cout<<endl;
      if(i%4==0 && i%64!=0)
        cout<<" ";
      cout<<cad[i];
    }
    cout<<endl;
    cout<<size<<endl;

    faro=true;
    return;
  }

  for(char i='A';i<'A'+l;i++){
    cad+=i;
    if(check(cad,cad.size())){
      cad.pop_back();
      continue;
    }
    d++;
    size++;
    backtracking(cad,size);
    if(faro)
      return;
    size--;
    cad.pop_back();
  }
}

int main(){

  while(cin>>n>>l,n || l){

    faro=false;
    string cad="";
    d=0;
    int size=0;
    backtracking(cad,size);
  }

  return 0;
}
