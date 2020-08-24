#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
  int q,n,num;
  cin>>q;
  int r0,r1,r2;
  int cont;
  while(q--){
    cin>>n;
    r0=0,r1=0,r2=0;
    for(int i=0;i<n;i++){
      cin>>num;
      if(num%3==0)
        r0++;
      else if(num%3==1)
        r1++;
      else
        r2++;
    }
    cont=r0;
    int mini=min(r2,r1);
    r1-=mini;
    r2-=mini;
    cont+=mini;
    cont+=r2/3;
    cont+=r1/3;
    cout<<cont<<endl;
  }

  return 0;
}
