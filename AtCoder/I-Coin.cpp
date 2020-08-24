#include<bits/stdc++.h>

using namespace std;

int n;
const int size=3010;
double coins[size];
double prob[size][size];
bool vis[size][size];

int main(){

  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%lf",coins+i);

  double ans=0;

  prob[0][0]=1;
  for(int i=1;i<=n;i++){
    prob[i][0]=prob[i-1][0]*(1-coins[i-1]);
    for(int j=1;j<=i;j++){
      prob[i][j]=coins[i-1]*prob[i-1][j-1]+(1.0-coins[i-1])*prob[i-1][j];
    }
  }
  for(int i=n/2+1;i<=n;i++){
    ans+=prob[n][i];
  }
  printf("%.10lf\n",ans);


  return 0;
}
