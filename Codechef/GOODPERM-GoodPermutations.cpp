#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REPREV(i,a,b) for(int i=a;i>b;i--)

bool check(int *arr,int k,int n){
  int cont=0;
  REP(i,1,n){
    if(arr[i-1]<arr[i])
      cont++;
  }
  return cont==k;
}
int main(){

  int t;
  int n,k;
  cin>>t;

  while(t--){
    cin>>n>>k;
    int arr[n];
    bool state[n+1];
    memset(state,0,sizeof state);
    REP(i,0,n){
      cin>>arr[i];
      if(arr[i]!=0)
        state[arr[i]]=1;
    }
    string per="";
    REP(i,1,n+1){
      if(!state[i])
        per+=to_string(i);
    }
    int ans=0;
    do{
      int j=0;
      int cop[n];
      copy(arr,arr+n,cop);
      REP(i,0,n){
        if(cop[i]==0){
          cop[i]=per[j]-'0';
          j++;
        }
      }
      if(check(cop,k,n))
        ans++;
    }
    while(next_permutation(per.begin(),per.end()));

    cout<<ans<<endl;
  }

  return 0;
}
