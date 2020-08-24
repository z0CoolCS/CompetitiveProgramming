#include<bits/stdc++.h>

using namespace std;

string cad1,cad2;
int vi,n,cont,ans;

void dfs(int i,int acum){
  if(i==n){
    cont++;
    if(acum==vi)
      ans++;
    return;
  }
  if(cad2[i]=='?'){
    dfs(i+1,acum+1);
    dfs(i+1,acum+-1);
  }
  else if(cad2[i]=='+')
    dfs(i+1,acum+1);
  else
    dfs(i+1,acum-1);
}
int main(){

  cin>>cad1;
  cin>>cad2;
  n=cad1.size();
  vi=cont=ans=0;
  for(char &c:cad1){
    if(c=='+')
      vi++;
    else
      vi--;
  }
  dfs(0,0);
  cout<<fixed<<setprecision(12);
  cout<<(long double)(ans)/cont<<endl;

  return 0;
}
