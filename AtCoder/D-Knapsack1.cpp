#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;

const int size=102;
const int wMax=10e5+2;
int sizeC;
int maxiW;
int arrW[size];
int arrV[size];
ll state[size][wMax];

ll maxi(int n,int w){

  if(n<0)
    return 0;

  if(state[n][w])
    return state[n][w];

  if(w-arrW[n]<0)
    return state[n][w]=1ll*maxi(n-1,w);
  else
    return state[n][w]=max(maxi(n-1,w-arrW[n])+1ll*arrV[n],maxi(n-1,w));
}

int main(){

  cin>>sizeC;
  cin>>maxiW;

  for(int i=0;i<sizeC;i++)
    cin>>arrW[i]>>arrV[i];

  cout<<maxi(sizeC-1,maxiW)<<endl;

  return 0;
}
