#include<bits/stdc++.h>

using namespace std;

const int size=1e3+10;
int n;
int num[size];
long long dp[size][size];
bool vis[size][size];

long long maxidif(int i,int j,bool faro){

  if(i>j)
    return 0;

  if(vis[i][j])
    return dp[i][j];

  vis[i][j]=1;
  if(faro)
    return dp[i][j]=max(num[i]+maxidif(i+1,j,!faro),num[j]+maxidif(i,j-1,!faro));
  else
    return dp[i][j]=max(-num[i]+maxidif(i+1,j,!faro),-num[j]+maxidif(i,j-1,!faro));

}

int main(){

  scanf("%d",&n);

  for(int i=0;i<n;i++)
    scanf("%d",num+i);
  
  printf("%lld\n",maxidif(0,n-1,true));

  return 0;
}
