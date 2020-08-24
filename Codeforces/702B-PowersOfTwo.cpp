#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int main(){

  int n;
  cin>>n;
  int a[n];
  unordered_map<long long,int> dict;
  int maxi=0;
  REP(i,0,n){
    cin>>a[i];
    maxi=max(maxi,a[i]);
    dict[a[i]]++;
  }
  long long ans=0;
  REP(i,0,n-1){
    dict[a[i]]--;
    long long tmp=2;
    while(tmp<=1ll*(maxi+a[i])){
      ans+=dict[tmp-1ll*a[i]];
      tmp*=1ll*2;
    }
  }
  cout<<ans<<endl;


  return 0;
}
