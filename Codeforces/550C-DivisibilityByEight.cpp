#include<bits/stdc++.h>

using namespace std;

string num;
int ans,size;
bool faro=false;

bool check(int i,int j,int k){
  int t=(num[i]-'0')*100;
  t+=(num[j]-'0')*10;
  t+=(num[k]-'0');
  if(t%8==0){
    ans=t;
    faro=true;
    return true;
  }
  return false;
}
void search2(){

  int t;
  for(int i=size-1;i>=0;i--){
    for(int j=i-1;j>=0;j--){
      t=(num[j]-'0')*10+(num[i]-'0');
      if(t%8==0){
        ans=t;
        faro=true;
        return;
      }
    }
  }
}
void search3(){

  for(int i=size-1;i>=0;i--){
    for(int j=i-1;j>=0;j--){
      for(int k=j-1;k>=0;k--){
        if(check(k,j,i))
          return;
      }
    }
  }
}

int main(){
  cin>>num;
  size=num.size();
  for(char &c:num){
    if((c-'0')%8==0){
      cout<<"YES\n";
      cout<<c<<endl;
      return 0;
    }
  }
  search2();
  if(faro){
      cout<<"YES\n";
      cout<<ans<<endl;
      return 0;
  }
  
  search3();
  if(faro){
      cout<<"YES\n";
      cout<<ans<<endl;
  }
  else
      cout<<"NO\n";


  return 0;
}
