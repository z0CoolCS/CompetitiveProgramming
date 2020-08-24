#include<iostream>
#include<algorithm>
typedef long long ll;

using namespace std;

int count(ll num){
  int cont=0;
  bool faro;
  while(num!=1){
    faro=true;
    if(num%2==0){
      num/=2;
      cont++;
      faro=false;
    }
    else if(num%3==0){
      num/=3;
      num*=2;
      cont++;
      faro=false;
    }
    else if(num%5==0){
      num/=5;
      num*=4;
      cont++;
      faro=false;
    }
    if(faro)
      return -1;
  }
  return cont;
}
int main(){
  ll num;
  int q;
  cin>>q;
  while(q--){
    cin>>num;
    cout<<count(num)<<endl;
  }

  return 0;
}
