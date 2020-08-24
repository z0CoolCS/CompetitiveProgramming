#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<cmath>

using namespace std;

int mat[50001][18];
int num[50001];

void compute(int n,int k){
  for(int i=0;i<n;i++)
    mat[i][0]=num[i];

  for(int j=1;j<=k;j++)
    for(int i=0;i+(1<<j)<=n;i++)
      mat[i][j]=max(mat[i][j-1],mat[i+(1<<(j-1))][j-1]);

}
int main(){

  int n,m,i;
  cin>>n>>m;
  for(i=0;i<n;i++)
    cin>>num[i];

  int loga[n+1];
  loga[1]=0;

  int k=floor(log2(n))+1;

  for(int i=2;i<=n;i++)
    loga[i]=loga[i/2]+1;

  compute(n,k);

  int ans=0,a,b;
  for(i=0;i<m;i++){
    cin>>a>>b;
    if(a>b)
      swap(a,b);
    a--;
    b-=2;
    int j=loga[b-a+1];
    int maxi=max(mat[a][j],mat[b-(1<<j)+1][j]);
    if(maxi<=num[a])
      ans++;
  }
  cout<<ans<<endl;
  return 0;
}
