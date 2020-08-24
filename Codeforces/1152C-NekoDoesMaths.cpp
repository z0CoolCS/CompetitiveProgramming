#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

vector<int> d; 

void getDiv(int x){
  for(int i=1;i*i<=x;i++){
    if(x%i==0){
      d.push_back(i);
      if(i*i!=x)
        d.push_back(x/i);
    }
  }
}

int gcd(int x,int y){
  while(y>0){
    int tmp=x%y;
    x=y;
    y=tmp;
  }
  return x;
}

int getK(int a,int b){
  int size=d.size();
  long long lcd=1ll*a*b;
  int k=INT_MAX;

  REP(i,0,size){
    if(a%d[i]!=b%d[i])
        continue;

    if(a%d[i]==0){
      long long tmp=1ll*a*b/gcd(a,b);
      if(tmp<lcd){
        lcd=tmp;
        k=0;
      }
    }
    else{
      long long tmp=1ll*(d[i]-a%d[i]+a)*(d[i]-b%d[i]+b)/gcd(d[i]-a%d[i]+a,d[i]-b%d[i]+b);
      if(tmp<lcd){
        lcd=tmp;
        k=d[i]-a%d[i];
      }
      else if(tmp==lcd)
        k=min(k,d[i]-a%d[i]);
    }
  }

  if(1ll*a*b/gcd(a,b)<=lcd)
    k=0;
  return k;
}
int main(){

  int a,b;
  cin>>a>>b;
  if(a==b){
    cout<<0<<endl;
    return 0;
  }

  if(b<a)
    swap(a,b);

  getDiv(b-a);
  cout<<getK(a,b)<<endl;

  return 0;
}
