#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int size=10e5+2;
int sizeC;
int matrix[size][3];
int state[size][3];

int maxi(int n,int a){

  if(n==0)
    return matrix[n][a];

  if(state[n][a])
    return state[n][a];

  if(a==0)
    return state[n][a]=max(maxi(n-1,1),maxi(n-1,2))+matrix[n][a];
  else if(a==1)
    return state[n][a]=max(maxi(n-1,0),maxi(n-1,2))+matrix[n][a];
  else
    return state[n][a]=max(maxi(n-1,1),maxi(n-1,0))+matrix[n][a];
}

int main(){

  scanf("%d",&sizeC);

  for(int i=0;i<sizeC;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  cout<<max(maxi(sizeC-1,0),max(maxi(sizeC-1,1),maxi(sizeC-1,2)))<<endl;

  return 0;
}
