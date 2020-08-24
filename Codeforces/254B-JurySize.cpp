#include<bits/stdc++.h>

using namespace std;

unordered_map<int,int> dict;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

void month(){
  for(int i=1;i<13;i++){
    mon[i]+=mon[i-1];
  }
}

int main(){

  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
  month();

  int n;
  scanf("%d",&n);
  int m,d,j,t;
  int ans=0;

  for(int i=0;i<n;i++){
    scanf("%d %d %d %d",&m,&d,&j,&t);
    int d_i=d+mon[m-1];
    for(int p=d_i-t;p<d_i;p++){
      dict[p]+=j;
      ans=max(ans,dict[p]);
    }
  }

  printf("%d\n",ans);

  return 0;
}
