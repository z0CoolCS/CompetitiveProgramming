#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int size=10e5+2;
int sizeC;
int arr[size];
int state[size];

int main(){

  int k;
  scanf("%d",&sizeC);
  scanf("%d",&k);
  for(int i=0;i<sizeC;i++)
    scanf("%d",&arr[i]);

  state[0]=0;
  state[1]=abs(arr[0]-arr[1]);
  for(int i=2;i<=k;i++){
  }

  for(int i=2;i<sizeC;i++){
    state[i]=state[i-1]+abs(arr[i]-arr[i-1]);
    for(int j=2;j<=k && (i-j)>=0;j++){
      state[i]=min(state[i],state[i-j]+abs(arr[i-j]-arr[i]));
    }
  }

  cout<<state[sizeC-1]<<endl;

  return 0;
}
