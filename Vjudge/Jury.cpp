#include<bits/stdc++.h>

using namespace std;

const int maxn=2010;
int n,k;

int a[maxn];
int prefix[maxn];
int b[maxn];
unordered_map<int,int> dict;

int main(){

  scanf("%d %d",&k,&n);

  for(int i=0;i<k;i++){
    scanf("%d",a+i);
    prefix[i+1]=prefix[i]+a[i];
  }
  for(int i=0;i<n;i++){
    scanf("%d",b+i);
  }
  for(int i=0;i<n;i++){
    set<int> s;
    for(int j=0;j<k;j++){
      s.insert(b[i]-prefix[j+1]);
    }
    for(auto x:s){
      dict[x]++;
    }
  }
  int sol=0;
  for(auto x:dict){
    if(x.second==n)
      sol++;
  }
  printf("%d\n",sol);


  return 0;
}
