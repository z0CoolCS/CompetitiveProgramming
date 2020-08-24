#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int size=10e5+2;
int sizeC;
int arr[size];
int state[size];

int main(){

  scanf("%d",&sizeC);
  for(int i=0;i<sizeC;i++)
    scanf("%d",&arr[i]);

  state[0]=0;
  state[1]=abs(arr[0]-arr[1]);

  for(int i=2;i<sizeC;i++)
    state[i]=min(state[i-1]+abs(arr[i]-arr[i-1]),state[i-2]+abs(arr[i-2]-arr[i]));

  cout<<state[sizeC-1]<<endl;

  return 0;
}
