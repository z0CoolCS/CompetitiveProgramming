#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x,long long y){
  while(y>0){
    long long tmp=x%y;
    x=y;
    y=tmp;
  }
  return x;
}
void check(long long l,long long r,bool &faro){
  for(long long i=l;i<r-1;i++){
    for(long long j=i+1;j<r;j++){
      for(long long m=j+1;m<=r;m++){
        if(gcd(i,j)==1 and gcd(j,m)==1 and gcd(i,m)!=1){
          cout<<i<<" "<<j<<" "<<m<<endl;
          faro=true;
          return;
        }
      }
    }
  }
}

int main(){

  long long l,r;
  cin>>l>>r;

  bool faro=false;
  check(l,r,faro);
  if(!faro)
    cout<<-1<<endl;


  return 0;
}
