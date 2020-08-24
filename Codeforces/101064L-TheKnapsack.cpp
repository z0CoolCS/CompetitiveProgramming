#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  int n,w;
  cin>>n>>w;

  int matrix[max(n+1,w+1)][w+1];
  int itemW[n+1];
  int itemC[n+1];
  for(int i=0;i<n;i++)
    cin>>itemW[i]>>itemC[i];

  for(int i=0;i<=max(w,n);i++){
    for(int j=0;j<=w;j++){
      if(i==0 || j==0)
        matrix[i][j]=0;
      else if(itemW[(i-1)%n]<=j)
        matrix[i][j]=max(matrix[i-1][j-itemW[(i-1)%n]]+itemC[(i-1)%n],matrix[i-1][j]);
      else
        matrix[i][j]=matrix[i-1][j];
    }
  }
  cout<<matrix[max(n,w)][w]<<endl;

  return 0;
}
