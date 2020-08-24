#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>b;i--)

long long fact[19];

void factorial(){
  fact[0]=1ll;
  REP(i,1,19)
    fact[i]=1ll*i*fact[i-1];
}

long long pos;

void calculate(int i,int n,string num,int *d){

  if(i==n-1)
    return;

  int cont=0;
  long long aux=1;

  REV(j,num[i]-'0'-1,-1){
    if(d[j]>0)
      cont++;
  }

  REP(j,0,10){
    if(d[j]>0){
      aux*=d[j];
    }
  }
  pos+=1ll*cont*fact[n-i-1]/aux;
  d[num[i]-'0']--;
  calculate(i+1,n,num,d);

}
int main(){

  factorial();
  int t;
  cin>>t;
  string num;
  while(t--){
    cin>>num;
    int d[10];
    REP(i,0,10)
      d[i]=0;

    pos=0;

    for(char &c:num)
      d[c-'0']++;

    calculate(0,num.size(),num,d);
    cout<<pos+1ll<<endl;
  }

  return 0;
}
